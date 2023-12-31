#ifndef LINKED_LIST_H_INCLUDED
#define LINKED_LIST_H_INCLUDED

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node *next;
};

// Function to create a new linked list
struct Node* createList();

// Function to insert an element at the end of the list
void insertAtEnd(struct Node* head, int data);

// Function to delete an element from the list
void deleteElement(struct Node* head, int data);

// Function to display the elements of the list
void displayList(struct Node* head);

// Function to free the memory allocated for the list
void freeList(struct Node* head);

#endif
