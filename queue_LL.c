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
int main(){
    enque(10);
    enque(12);
    printf("%d\n",front->val);
    printf("%d\n",front->next->val);
}