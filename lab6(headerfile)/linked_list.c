// LinkedList.c

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

struct Node* createList() {
    return NULL;
}

void insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    while (head->next != NULL) {
        head = head->next;
    }

    head->next = newNode;
}

void deleteElement(struct Node* head, int data) {
    struct Node* temp = head->next;
    struct Node* prev = head;

    while (temp != NULL && temp->data != data) {
        prev = temp;
        temp = temp->next;
    }

    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    }
}

void displayList(struct Node* head) {
    head = head->next;  // Skip the dummy node
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}
