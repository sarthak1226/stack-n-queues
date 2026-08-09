#include <iostream>
using namespace std;

int i = 0;
void push(int *arr, int val)
{
   if (i >= 10)
{
    cout << "Stack Overflow "<<endl;
    return;
}

    arr[i] = val;
    i++;
}
int pop(int *arr)
{
    if(i==0){cout<<"Stack Underflow "<<endl;return -1;}
    return arr[--i];
}
int peek(int *arr) { 
    if(i==0){cout<<"Stack is empty "<<endl;return -1;}
    return arr[i - 1]; 
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
       push(arr,val);
        break;}
    case 2:{
       cout<<"Value   :"<<pop(arr)<<endl;
       break;}

    case 3:{
    cout<<"Value   :"<<peek(arr)<<endl;}

    default:
    cout<<"Select Valid opt";
        break;
    }
if(opt!=0) goto repeat;


}
