#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <openssl/rand.h> //RAND_bytes ke liye


#define BLOCKSIZE 16
const unsigned char sbox[256] = {
    0x63, 0x7C, 0x77, 0x7B, 0xF2, 0x6B, 0x6F, 0xC5,
    0x30, 0x01, 0x67, 0x2B, 0xFE, 0xD7, 0xAB, 0x76,
    0xCA, 0x82, 0xC9, 0x7D, 0xFA, 0x59, 0x47, 0xF0,
    0xAD, 0xD4, 0xA2, 0xAF, 0x9C, 0xA4, 0x72, 0xC0,
    0xB7, 0xFD, 0x93, 0x26, 0x36, 0x3F, 0xF7, 0xCC,
    0x34, 0xA5, 0xE5, 0xF1, 0x71, 0xD8, 0x31, 0x15,
    0x04, 0xC7, 0x23, 0xC3, 0x18, 0x96, 0x05, 0x9A,
    0x07, 0x12, 0x80, 0xE2, 0xEB, 0x27, 0xB2, 0x75,
    0x09, 0x83, 0x2C, 0x1A, 0x1B, 0x6E, 0x5A, 0xA0,
    0x52, 0x3B, 0xD6, 0xB3, 0x29, 0xE3, 0x2F, 0x84,
    0x53, 0xD1, 0x00, 0xED, 0x20, 0xFC, 0xB1, 0x5B,
    0x6A, 0xCB, 0xBE, 0x39, 0x4A, 0x4C, 0x58, 0xCF,
    0xD0, 0xEF, 0xAA, 0xFB, 0x43, 0x4D, 0x33, 0x85,
    0x45, 0xF9, 0x02, 0x7F, 0x50, 0x3C, 0x9F, 0xA8,
    0x51, 0xA3, 0x40, 0x8F, 0x92, 0x9D, 0x38, 0xF5,
    0xBC, 0xB6, 0xDA, 0x21, 0x10, 0xFF, 0xF3, 0xD2,
    0xCD, 0x0C, 0x13, 0xEC, 0x5F, 0x97, 0x44, 0x17,
    0xC4, 0xA7, 0x7E, 0x3D, 0x64, 0x5D, 0x19, 0x73,
    0x60, 0x81, 0x4F, 0xDC, 0x22, 0x2A, 0x90, 0x88,
    0x46, 0xEE, 0xB8, 0x14, 0xDE, 0x5E, 0x0B, 0xDB,
    0xE0, 0x32, 0x3A, 0x0A, 0x49, 0x06, 0x24, 0x5C,
    0xC2, 0xD3, 0xAC, 0x62, 0x91, 0x95, 0xE4, 0x79,
    0xE7, 0xC8, 0x37, 0x6D, 0x8D, 0xD5, 0x4E, 0xA9,
    0x6C, 0x56, 0xF4, 0xEA, 0x65, 0x7A, 0xAE, 0x08,
    0xBA, 0x78, 0x25, 0x2E, 0x1C, 0xA6, 0xB4, 0xC6,
    0xE8, 0xDD, 0x74, 0x1F, 0x4B, 0xBD, 0x8B, 0x8A,
    0x70, 0x3E, 0xB5, 0x66, 0x48, 0x03, 0xF6, 0x0E,
    0x61, 0x35, 0x57, 0xB9, 0x86, 0xC1, 0x1D, 0x9E,
    0xE1, 0xF8, 0x98, 0x11, 0x69, 0xD9, 0x8E, 0x94,
    0x9B, 0x1E, 0x87, 0xE9, 0xCE, 0x55, 0x28, 0xDF,
    0x8C, 0xA1, 0x89, 0x0D, 0xBF, 0xE6, 0x42, 0x68,
    0x41, 0x99, 0x2D, 0x0F, 0xB0, 0x54, 0xBB, 0x16
};
uint8_t Rcon[11][4] = {
	{0x00, 0x00, 0x00, 0x00},
	{0x01, 0x00, 0x00, 0x00},
	{0x02, 0x00, 0x00, 0x00},
	{0x04, 0x00, 0x00, 0x00},
	{0x08, 0x00, 0x00, 0x00},
	{0x10, 0x00, 0x00, 0x00},
	{0x20, 0x00, 0x00, 0x00},
	{0x40, 0x00, 0x00, 0x00},
	{0x80, 0x00, 0x00, 0x00},
	{0x1B, 0x00, 0x00, 0x00},
	{0x36, 0x00, 0x00, 0x00}
	};

uint8_t key_schedule[11][16]; //11 keys with 16 elements(4words)
const unsigned char inv_sbox[256] = {
    0x52,0x09,0x6A,0xD5,0x30,0x36,0xA5,0x38,
    0xBF,0x40,0xA3,0x9E,0x81,0xF3,0xD7,0xFB,
    0x7C,0xE3,0x39,0x82,0x9B,0x2F,0xFF,0x87,
    0x34,0x8E,0x43,0x44,0xC4,0xDE,0xE9,0xCB,
    0x54,0x7B,0x94,0x32,0xA6,0xC2,0x23,0x3D,
    0xEE,0x4C,0x95,0x0B,0x42,0xFA,0xC3,0x4E,
    0x08,0x2E,0xA1,0x66,0x28,0xD9,0x24,0xB2,
    0x76,0x5B,0xA2,0x49,0x6D,0x8B,0xD1,0x25,
    0x72,0xF8,0xF6,0x64,0x86,0x68,0x98,0x16,
    0xD4,0xA4,0x5C,0xCC,0x5D,0x65,0xB6,0x92,
    0x6C,0x70,0x48,0x50,0xFD,0xED,0xB9,0xDA,
    0x5E,0x15,0x46,0x57,0xA7,0x8D,0x9D,0x84,
    0x90,0xD8,0xAB,0x00,0x8C,0xBC,0xD3,0x0A,
    0xF7,0xE4,0x58,0x05,0xB8,0xB3,0x45,0x06,
    0xD0,0x2C,0x1E,0x8F,0xCA,0x3F,0x0F,0x02,
    0xC1,0xAF,0xBD,0x03,0x01,0x13,0x8A,0x6B,
    0x3A,0x91,0x11,0x41,0x4F,0x67,0xDC,0xEA,
    0x97,0xF2,0xCF,0xCE,0xF0,0xB4,0xE6,0x73,
    0x96,0xAC,0x74,0x22,0xE7,0xAD,0x35,0x85,
    0xE2,0xF9,0x37,0xE8,0x1C,0x75,0xDF,0x6E,
    0x47,0xF1,0x1A,0x71,0x1D,0x29,0xC5,0x89,
    0x6F,0xB7,0x62,0x0E,0xAA,0x18,0xBE,0x1B,
    0xFC,0x56,0x3E,0x4B,0xC6,0xD2,0x79,0x20,
    0x9A,0xDB,0xC0,0xFE,0x78,0xCD,0x5A,0xF4,
    0x1F,0xDD,0xA8,0x33,0x88,0x07,0xC7,0x31,
    0xB1,0x12,0x10,0x59,0x27,0x80,0xEC,0x5F,
    0x60,0x51,0x7F,0xA9,0x19,0xB5,0x4A,0x0D,
    0x2D,0xE5,0x7A,0x9F,0x93,0xC9,0x9C,0xEF,
    0xA0,0xE0,0x3B,0x4D,0xAE,0x2A,0xF5,0xB0,
    0xC8,0xEB,0xBB,0x3C,0x83,0x53,0x99,0x61,
    0x17,0x2B,0x04,0x7E,0xBA,0x77,0xD6,0x26,
    0xE1,0x69,0x14,0x63,0x55,0x21,0x0C,0x7D
};



unsigned char * pkcs_pad ( char * , int* );
void SubBytes(uint8_t state_matrix[4][4]);
void ShiftRows(uint8_t state_matrix[4][4]);
uint8_t Gf_mult( uint8_t , uint8_t);
void MixColumns(uint8_t state_matrix[4][4]);
void g(uint8_t word[4],int round);
void KeyExpansion(uint8_t key_matrix[4][4]);//no of round in int
void AddRoundKey(uint8_t state_matrix[4][4], uint8_t roundkey[16]);

void InvSubBytes(uint8_t state_matrix[4][4]);
void InvShiftRows(uint8_t state_matrix[4][4]);
uint8_t InvGf_mult( uint8_t , uint8_t);
void InvMixColumns(uint8_t state_matrix[4][4]);
void g(uint8_t word[4],int round);



int main()
{
	unsigned char *user_input, buffer[1000]; //simple input of user stored in 1D array
	uint8_t state_matrix[4][4]; //the state matrix declared
	int i=0; // kahi bhi use krlo ( for index) 

	//Taking input and storing it in user_input
	fgets(buffer,sizeof(buffer),stdin);
	int len_input = strlen(buffer);
	user_input = malloc( len_input );
	memcpy(user_input , buffer , len_input);


	//Applying PKCS#7 to user_input:
	unsigned char * padded_input = pkcs_pad(user_input,&len_input);


	//Set elements in state matrix:
	i=0;
	for ( int c=0;c<4;c++)
	{
		for ( int r=0;r<4;r++)
		{
			state_matrix[r][c] = padded_input[i];
			i++;
		}
	}

	//Printing the state matrix
	//	for ( int r=0;r<4;r++)
	//	{
	//		for ( int c=0;c<4;c++)
	//		{
	//			printf("%02x " , state_matrix[r][c]);
	//		}
	//		printf("\n");
	//	}



	unsigned char iv[16]; // Initializing vector
	//IV generation
	if (!RAND_bytes(iv, sizeof(iv))) 
	{
		fprintf(stderr,"IV generation not success\n"); //fprintf is better for error handling
	}

//	for ( int r=0;r<16;r++)
//	{
//		printf("%d " , iv[r]);
//	}

	// XORed state_matrix with IV
/*	i=0;*/
/*	for ( int c=0;c<4;c++)*/
/*	{*/
/*		for ( int r=0;r<4;r++)*/
/*		{*/
/*			state_matrix[r][c] ^= iv[i];*/
/*			i++;*/
/*		}*/
/*	}*/


	//Key wala part
	//Creating the original key (1d array)
	uint8_t original_key[16];
	if ( !RAND_bytes(original_key, sizeof(original_key)) )
	{
		printf("Couldn't create the key");
		return 1;
	}

	i=0;
	uint8_t key_matrix[4][4];
	for ( int c=0;c<4;c++)
	{
		for ( int r=0;r<4;r++)
		{
			key_matrix[r][c] = original_key[i];
			i++;
		}
	}

	KeyExpansion(key_matrix); //adds round keys to key_schedule[11][16]


	//CIPHER()
	
	char *cipher; //sum of IV and cipherblocks ( what all this code is for actually)
	//use malloc on cipher
	cipher = malloc (len_input + 16);
	
	//store IV in cipher:
	i=0;
	for ( i=0;i<16;i++)
	{
		cipher[i] = iv[i];
	}
	
	uint8_t pehle_wala[16];
	for ( int i=0;i<16;i++)
	{
		pehle_wala[i] = iv[i];	
	}
		
	for ( int times=0;times<len_input /16;times++)
	{			
		i=0;
		for ( int c=0;c<4;c++)
		{
			for ( int r=0;r<4;r++)
			{
				state_matrix[r][c] = padded_input[i];
				i++;
			}
		}			
		
		i=0;
		for ( int c=0;c<4;c++)
		{
			for ( int r=0;r<4;r++)
			{
				state_matrix[r][c] ^= pehle_wala[i];
			}
		}
			
		AddRoundKey(state_matrix, key_schedule[0]);
		for (int round = 1; round <= 9; round++)
		{
		    SubBytes(state_matrix);
		    ShiftRows(state_matrix);
		    MixColumns(state_matrix);
		    AddRoundKey(state_matrix, key_schedule[round]);
		}
		SubBytes(state_matrix);
		ShiftRows(state_matrix);
		AddRoundKey(state_matrix, key_schedule[10]);
		
		//store the first ciphertxt in a block
		i=0;
		uint8_t cipher_block[4][4];
		for ( int c=0;c<4;c++)
		{
			for ( int r=0;r<4;r++)
			{
				cipher_block[r][c]= state_matrix[r][c];
				pehle_wala[i] = state_matrix[r][c];
				i++;
			}
		}
		
		i=0;
		for ( int c= 0;c<4;c++)
		{
			for ( int r=0;r<4;r++)
			{	
				cipher[i]=cipher_block[r][c] ;
				i++;
			}
		}
	}
	
	
	//DECIPHER()


	
	

	return 0 ;

}

//ALL FUNCTIONS
//padding :
unsigned char *  pkcs_pad(char * array , int *len)
{
	int pad_len = BLOCKSIZE - ( *len % BLOCKSIZE);
	if ( pad_len == 0 )
		pad_len = 16;
	array = realloc( array,(*len)+pad_len);
	for ( int i=0;i<pad_len;i++)
	{
		array[*len + i]=pad_len;
	}
	*len += pad_len;
	return array; //since here array is LOCAL and we used the realloc
}

void SubBytes( uint8_t state_matrix[4][4])
{	// SubBytes
	for ( int c=0;c<4;c++)
	{
		for ( int r=0;r<4;r++)
		{
			state_matrix[r][c] = sbox[state_matrix[r][c]];
		}
	}
}

void ShiftRows( uint8_t state_matrix[4][4])
{
	int r=1;
	while ( r<4)
	{
		for ( int times=0;times<r;times++)
		{
			for ( int c = 0;c< 3;c++)
			{
				//unsigned char temp1=state_matrix[r][c];
				unsigned char temp = state_matrix[r][c];
				state_matrix[r][c]= state_matrix[r][c+1];
				state_matrix[r][c+1]=temp;
			}
		}
		r++;
	}
}


/* fixed matrix[4][4]=
	{
	    {0x02, 0x03, 0x01, 0x01},
	    {0x01, 0x02, 0x03, 0x01},
	    {0x01, 0x01, 0x02, 0x03},
	    {0x03, 0x01, 0x01, 0x02}
	};
*/

uint8_t Gf_mult(uint8_t byte, uint8_t mult_with) {
    uint8_t temp;

    if (mult_with == 1) return byte;

    if (mult_with == 2) {
        temp = (byte << 1) & 0xFF;
        if (byte & 0x80) temp ^= 0x1B; // reduce modulo x^8 + x^4 + x^3 + x + 1
        return temp;
    }

    if (mult_with == 3) {
        return Gf_mult(byte, 2) ^ byte;
    }

    // Inverse MixColumns multipliers
    if (mult_with == 9) {        // 0x09 = x^3 + 1
        return Gf_mult(Gf_mult(Gf_mult(byte, 2), 2), 2) ^ byte;
    }
    if (mult_with == 0x0B) {     // 0x0B = x^3 + x + 1
        return Gf_mult(Gf_mult(Gf_mult(byte, 2), 2), 2) ^ Gf_mult(byte, 2) ^ byte;
    }
    if (mult_with == 0x0D) {     // 0x0D = x^3 + x^2 + 1
        return Gf_mult(Gf_mult(Gf_mult(byte, 2), 2), 2) ^ Gf_mult(Gf_mult(byte, 2), 2) ^ byte;
    }
    if (mult_with == 0x0E) {     // 0x0E = x^3 + x^2 + x
        return Gf_mult(Gf_mult(Gf_mult(byte, 2), 2), 2) ^ Gf_mult(Gf_mult(byte, 2), 2) ^ Gf_mult(byte, 2);
    }

    return 0; 
}

void MixColumns(uint8_t state_matrix[4][4])
{
	for ( int c=0; c< 4 ;c++)
	{
		uint8_t temp1 = (Gf_mult(state_matrix[0][c], 0x02)) ^ (Gf_mult(state_matrix[1][c] , 0x03))^ (Gf_mult(state_matrix[2][c], 0x01)) ^ (Gf_mult(state_matrix[3][c], 0x01));

		uint8_t temp2 = (Gf_mult(state_matrix[0][c], 0x01)) ^ (Gf_mult(state_matrix[1][c] , 0x02))^ (Gf_mult(state_matrix[2][c], 0x03)) ^ (Gf_mult(state_matrix[3][c], 0x01));

		uint8_t temp3 = (Gf_mult(state_matrix[0][c], 0x01)) ^ (Gf_mult(state_matrix[1][c] , 0x01))^ (Gf_mult(state_matrix[2][c], 0x02)) ^ (Gf_mult(state_matrix[3][c], 0x03));

		uint8_t temp4 = (Gf_mult(state_matrix[0][c], 0x03)) ^ (Gf_mult(state_matrix[1][c] , 0x01))^ (Gf_mult(state_matrix[2][c], 0x01)) ^ (Gf_mult(state_matrix[3][c], 0x02));


		state_matrix[0][c] = temp1;
		state_matrix[1][c]=temp2;
		state_matrix[2][c]=temp3;
		state_matrix[3][c]=temp4;
	}
}

void g( uint8_t word[4], int round)
{
	//rotate word
	//RotWord
/*	for ( int i =0;i<3; i++)*/
/*	{*/
/*		int temp = word[i];*/
/*		word[i]=word[i+1];*/
/*		word[i+1]=temp;*/
/*	}*/
	uint8_t temp = word[0];
	word[0] = word[1];
	word[1] = word[2];
	word[2] = word[3];
	word[3] = temp;

	//Sbox substitution
	//SubWord
	for ( int i=0;i<4;i++)
	{
		word[i] = sbox[word[i]];
	}
	
	
	//Rcon
	//just XOR
	
	word[0] ^= Rcon[round][0]; // other bytes xor with 0x00 so unchanged...
	

}
void KeyExpansion(uint8_t original_key[4][4])
{
	//4 words input
	//key schedule have 4 words in each of its rows ( 16 elements )
	
	// manipulate data word-wise but store it element by element
	
	//to make it easier i chose to store the column-wise words as row-based words
	//then transfer these words into key_schedule for easier accessiblitity for each round
	uint8_t key_matrix[44][4];
	int key_r=0,key_c=0;
	int round = 1;
	for ( int c=0;c<4;c++)
	{
		for ( int r=0;r<4;r++)
		{
			key_matrix[key_r][key_c]= original_key[r][c];
			key_c++;
		}
		key_r++;
		key_c=0;
	}

	for ( key_r = 4;key_r<44;key_r++)
	{
		if ( key_r % 4 !=0)
		{
			//1 word in each row of key_matrix
			for ( int col=0;col<4;col++)
			{
				key_matrix[key_r][col] = key_matrix[key_r-1][col] ^ key_matrix[key_r-4][col];
			}
		}
		
		else if ( key_r % 4 == 0 )
		{
			uint8_t temp_for_g[4];
			for (int col = 0; col < 4; col++)
			{
				temp_for_g[col] = key_matrix[key_r-1][col];
			}
			
			g(temp_for_g, round);
			round++;
			
			for ( int col=0;col<4;col++)
			{
				key_matrix[key_r][col] = temp_for_g[col] ^ key_matrix[key_r-4][col];
			}
		}
	}

	 //key_schedule[11][16]
	 key_r=0;
	 key_c=0;
	 for ( int row = 0 ;row<11;row++)
	 {
	 	for ( int col =0;col<16;col++)
	 	{
	 		key_schedule[row][col] = key_matrix[key_r][key_c];
	 		key_c++;
	 		if ( key_c % 4 ==0)
	 		{
	 			key_c=0;
	 			key_r++;
	 		}
	 	}
	 	
	 }


}

//byte to byte
void AddRoundKey( uint8_t state_matrix[4][4] , uint8_t round_key[16])
{
	int i=0;
	for ( int c=0;c< 4;c++)
	{
		for ( int r = 0 ;r<4;r++)
		{
			state_matrix[r][c] ^= round_key[i];
			i++;
		}
	}
}


void InvSubBytes( uint8_t cipher_matrix[4][4])
{
	for ( int c=0;c<4;c++)
	{
		for ( int r=0;r<4;r++)
		{
			cipher_matrix[r][c] = inv_sbox[cipher_matrix[r][c]];
		}

	}
}


/*void InvShiftRows( uint8_t cipher_matrix[4][4])*/
/*{*/
/*	int r=1;*/
/*	while ( r<4)*/
/*	{*/
/*		for ( int times=0;times<r;times++)*/
/*		{*/
/*			for ( int c = 3;c>0;c--)*/
/*			{*/
/*				//unsigned char temp1=state_matrix[r][c];*/
/*				unsigned char temp = cipher_matrix[r][c];*/
/*				cipher_matrix[r][c]= cipher_matrix[r][c-1];*/
/*				cipher_matrix[r][c-1]=temp;*/
/*			}*/
/*		}*/
/*		r++;*/
/*	}*/
/*}*/

void InvShiftRows(uint8_t cipher_matrix[4][4]) 
{
    uint8_t temp;

    // shift right by 1
    temp = cipher_matrix[1][3];
    cipher_matrix[1][3] = cipher_matrix[1][2];
    cipher_matrix[1][2] = cipher_matrix[1][1];
    cipher_matrix[1][1] = cipher_matrix[1][0];
    cipher_matrix[1][0] = temp;

    // shift right by 2
    uint8_t temp1 = cipher_matrix[2][3];
    uint8_t temp2 = cipher_matrix[2][2];
    cipher_matrix[2][3] = cipher_matrix[2][1];
    cipher_matrix[2][2] = cipher_matrix[2][0];
    cipher_matrix[2][1] = temp1;
    cipher_matrix[2][0] = temp2;

    // shift right by 3 (same as left by 1)
    temp = cipher_matrix[3][0];
    cipher_matrix[3][0] = cipher_matrix[3][1];
    cipher_matrix[3][1] = cipher_matrix[3][2];
    cipher_matrix[3][2] = cipher_matrix[3][3];
    cipher_matrix[3][3] = temp;
}

//fixed matrix for inverse GF(256)
/*{0x0E, 0x0B, 0x0D, 0x09}*/
/*{0x09, 0x0E, 0x0B, 0x0D}*/
/*{0x0D, 0x09, 0x0E, 0x0B}*/
/*{0x0B, 0x0D, 0x09, 0x0E}*/

void InvMixColumns(uint8_t cipher_matrix[4][4]) 
{
    for (int c = 0; c < 4; c++) {
        uint8_t temp0 = Gf_mult(cipher_matrix[0][c], 0x0E) ^
                        Gf_mult(cipher_matrix[1][c], 0x0B) ^
                        Gf_mult(cipher_matrix[2][c], 0x0D) ^
                        Gf_mult(cipher_matrix[3][c], 0x09);

        uint8_t temp1 = Gf_mult(cipher_matrix[0][c], 0x09) ^
                        Gf_mult(cipher_matrix[1][c], 0x0E) ^
                        Gf_mult(cipher_matrix[2][c], 0x0B) ^
                        Gf_mult(cipher_matrix[3][c], 0x0D);

        uint8_t temp2 = Gf_mult(cipher_matrix[0][c], 0x0D) ^
                        Gf_mult(cipher_matrix[1][c], 0x09) ^
                        Gf_mult(cipher_matrix[2][c], 0x0E) ^
                        Gf_mult(cipher_matrix[3][c], 0x0B);

        uint8_t temp3 = Gf_mult(cipher_matrix[0][c], 0x0B) ^
                        Gf_mult(cipher_matrix[1][c], 0x0D) ^
                        Gf_mult(cipher_matrix[2][c], 0x09) ^
                        Gf_mult(cipher_matrix[3][c], 0x0E);

        cipher_matrix[0][c] = temp0;
        cipher_matrix[1][c] = temp1;
        cipher_matrix[2][c] = temp2;
        cipher_matrix[3][c] = temp3;
    }
}

