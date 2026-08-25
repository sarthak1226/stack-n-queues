#include <iostream>
using namespace std;

int push(char *arr,int *i){
    if((*i)==20) return -1;
    arr[*i]='(';
    (*i)++;
    return 1;
};

int pop(char *arr,int *i){
    if((*i)==0) return -1;
    (*i)--;
    return 1;
};

int main(){
    char str[20];
    int index=0;
    char arr[20];
    printf("Enter String  :");
    scanf("%s",str);
    bool f=false;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='('){ 
            if(push(arr,&index)==-1) {printf("stack overfall");f=true; return 0;   }
        }

       else if (str[i] == ')'){
       if( pop(arr,&index)==-1){ printf("Unbalanced"); f=true; return 0;}
    }

    
    else cout<<"Invalid input";
    }

    if(index==0&&f) printf("Balanced");
    else printf(" unbalanced");
}