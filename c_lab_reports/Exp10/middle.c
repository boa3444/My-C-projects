#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL, *second = NULL, *third = NULL, *fourth = NULL;
    struct Node *newNode = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 99;

    newNode->next = second->next;  
    second->next = newNode;        // link second to new node

    struct Node *temp = head;
    printf("Linked List after insertion: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    free(head);
    free(second);
    free(newNode);
    free(third);
    free(fourth);

    return 0;
}
