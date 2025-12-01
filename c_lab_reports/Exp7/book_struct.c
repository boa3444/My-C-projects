#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    float price;
};

void printBook(struct Book b) {
    printf("\nBook Details:\n");
    printf("ID: %d\n", b.id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book myBook;

    printf("Enter book id: ");
    scanf("%d", &myBook.id);

    printf("Enter book title: ");
    scanf("%s", myBook.title);

    printf("Enter author name: ");
    scanf("%s", myBook.author);

    printf("Enter price: ");
    scanf("%f", &myBook.price);

    printBook(myBook);

    return 0;
}
