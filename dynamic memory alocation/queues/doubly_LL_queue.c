#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* nextNode;
    struct node* prevNode;
};

struct node *front = NULL;
struct node *head = NULL;


int is_Empty() {
    return front == NULL;
}


void enque(int val) {
    struct node *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->value = val;
    newNode->prevNode=NULL;
    newNode->nextNode=NULL;
    if(head==NULL){
        front=newNode;
        head=newNode;
    }
    else{
        newNode->prevNode=head;
        head->nextNode=newNode;
        head=newNode;

    }
}


int pop_Beg() {
    struct node* temp=front;
    int value=front->value;
    front=front->nextNode;
    front->prevNode=NULL;
    free(temp);
    return value;
}

int pop(){
    struct node* temp=head;
    int value=front->value;
    head=head->prevNode;
    free(temp);
    return value;
}

void display(){
    if(is_Empty()){ printf("queue is empty"); return;}
     struct node* temp=front;
     while(temp!=NULL){
        printf("%d ",temp->value);
        temp=temp->nextNode;
     }
}


void menu() {
    printf("\n--- QUEUE MENU ---\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Pop from beging\n");
    printf("4. Is Empty\n");
    printf("5. Display\n");
    printf("6. Size\n");
    printf("7. Clear\n");
    printf("8. Exit\n");
}


int main() {
    enque(10);
    enque(20);
    enque(30);
    enque(40);
display();
pop();
display();
 pop_Beg();

    return 0;
}