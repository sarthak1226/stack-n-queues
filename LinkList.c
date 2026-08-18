#include <stdio.h>
#include <stdlib.h>

    struct node{
        int value;
        struct node* nextnode;
    }

    struct node *head=NULL;
    struct node *first = NULL;

    void push(int val){
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->value=val;
        if(head==NULL){
            newnode->nextnode=head;
            first=newnode;
        }

    }

    void pop()
{
    if (head == NULL) {
        printf("Stack is empty\n");
        return;
    }

    struct node *temp = head;
    printf("Popped: %d\n", temp->value);

    head = head->nextnode;

    free(temp);

}

void pushBegin(int val){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
     newnode->value=val;
     newnode->nextnode=first;
     first=newnode;  
}

int popbegin(){
    struct node *temp;
    temp=first;
    first->nextnode=first;
    free(temp);

}


void display(){
    struct node *temp = head;

    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->nextnode;
    }

    printf("\n");
}



int main()
{
    push(10);
    push(20);
    push(30);

    display();

    pop();
    display();

    pop();
    display();
}