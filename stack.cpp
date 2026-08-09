#include <iostream>
using namespace std;


void push(int *arr, int val,int *i)
{
   if ((*i) >= 10)
{
    cout << "Stack Overflow "<<endl;
    return;
}

    arr[*i] = val;
    (*i)++;
}
int pop(int *arr,int *i)
{
    if(*i==0){cout<<"Stack Underflow "<<endl;return -1;}
    return arr[--(*i)];
}
int peek(int *arr,int *i) { 
    if((*i)==0){cout<<"Stack is empty "<<endl;return -1;}
    return arr[*i - 1]; 
}

void menu(){
    cout<<"Enter 1 for push"<<endl;
    cout<<"Enter 2 for pop"<<endl;
    cout<<"Enter 3 for peek"<<endl;
    cout<<"Enter 0 for exit"<<endl;
}
int input(){int x;cin>>x; return x;}


int main()
{
    int i=0;
    int arr[10];
    repeat:
    int opt;
    menu();
    cout<<"\nOption   :";opt=input();
     
    switch (opt)
    {
    case 1:{
        cout<<"\n\nenter value:";
    int val=input();
       push(arr,val,&i);
        break;}
    case 2:{
       cout<<"Value   :"<<pop(arr,&i)<<endl;
       break;}

    case 3:{
    cout<<"Value   :"<<peek(arr,&i)<<endl;break;}

    default:
    cout<<"Select Valid opt";
        break;
    }
if(opt!=0) goto repeat;


}
