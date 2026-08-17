// Online C compiler to run C program online
#include <stdio.h> 
#include <stdlib.h> 
struct node{
  int val;
  struct node * next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;

int enque(int val){
   struct node* newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->val=val;
   newnode->next=NULL;
   if(front==NULL){
       front=newnode;
    rear=newnode;
}
else{   
    temp->next=newnode;
    rear=newnode;
}
temp=newnode;

}


int deque(){
    if(front==NULL) return -1;
    struct node* temp2=front;
    front=front->next;

    free(temp2);
    return 1;


}


void disp(){
    struct node* temp=front;
    while(temp!=NULL){
        printf("%d  ",temp->val);
        temp=temp->next;
    }
}
int main(){
    enque(10);
    enque(12);
    enque(172);
    enque(172);
    enque(13);
    enque(14);
   deque();
   disp();
   dadddyyyyyyyyyyyyyyyyyyy
}