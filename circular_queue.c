#include <stdio.h>
int inp()
{
    int x;
    scanf("%d", &x);
    return x;
}

int isempty(int *i, int *j)
{
    if ((*i) == (*j))
        return 1;
    return -1;
}

int isfull(int *i){
    if(*(i)==20) return 1;
    return -1;
}

int enque(int *arr, int *i)
{
    int val = inp();
    if (isfull(i))
        return -1;
  


}

int deque(int *arr, int *j, int *i)
{
    if (isempty(i,j))
        return -1;
    
    return arr[(*j)++];
}

int main()
{
 printf("%d",1+2%3);

}