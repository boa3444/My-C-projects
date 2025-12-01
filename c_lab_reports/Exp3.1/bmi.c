#include <stdio.h>
float weight ;
float height ;



int main(void){

	float BMI = 0;
	printf("Type your weight(in kgs):");
	scanf("%f", &weight);
	printf("Type your height(in meters):");
	scanf("%f", &height);	
	BMI = weight/ ( height * height);
	printf("Your BMI Index is %f\n", BMI);
	printf("Your BMI level:");
	if (BMI < 15){
		printf("Starvation\n");
		}
	else if ( BMI >= 15.1 && BMI <= 17.5){
		printf("Anorexic\n");
		}
	else if (BMI >= 17.6 && BMI <= 18.5){
		printf("Underweight\n");
		}
	else if (BMI >= 18.6 && BMI <= 24.9){
		printf("Ideal\n");
		}
	else if (BMI >= 25 && BMI <= 25.9){
		printf("Overweight\n");
		}
	else if (BMI >= 30 && BMI <= 39.9){
		printf("Obese\n");
		}
	else {
		printf("Morbidity Obese\n");
		}
	return 0;
	}
	

