#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

// structure describing one node of the list
struct node {
    int data;
    int key;

    struct node* next;
};

// pointing to the beginning of the list and the current node
struct node* head = NULL;
struct node* current = NULL;

int length() {
    struct node* curr = head;
    int count = 0;
    while (curr->next != curr){
        curr = curr->next;
        count++;
    }
    return count;
}

bool isEmpty(){
    if (head == NULL){
        return true;
    }
    return false;
}

//insert link at the first location
void insertFirst(int key, int data) {

    //create a link
    struct node* link = (struct node*)malloc(sizeof(struct node));
    link->key = key;
    link->data = data;

    if (isEmpty()) {
        head = link;
        head->next = head;
    }
    else {
        //point it to old first node
        link->next = head;

        //point first to new first node
        head = link;
    }
}

//delete first item
struct node* deleteFirst() {

    //save reference to first link
    struct node* tempLink = head;

    if (head->next == head) {
        head = NULL;
        return tempLink;
    }

    //mark next to first link as first
    head = head->next;

    //return the deleted link
    return tempLink;
}

//display the list
void printList() {

    struct node* ptr = head;
    printf("\n[ ");

    //start from the beginning
    if (head != NULL) {

        while (ptr->next != ptr) {
            printf("(%d,%d) ", ptr->key, ptr->data);
            ptr = ptr->next;
        }
    }

    printf(" ]");
}

void main() {
    insertFirst(1, 10);
    insertFirst(2, 20);
    insertFirst(3, 30);
    insertFirst(4, 1);
    insertFirst(5, 40);
    insertFirst(6, 56);

    printf("Original List: ");
    //print list
    printList();
    deleteFirst();
    deleteFirst();
    deleteFirst();
    deleteFirst();
    deleteFirst();

    printf("\nList after deleting all items: ");
    printList();
}