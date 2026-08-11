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
    arr[*i] = val;
    (*i)++;
    return 1;
}

int deque(int *arr, int *j, int *i)
{
    if (isempty(i,j))
        return -1;
    return arr[(*j)++];
}
void menu(int *arr, int *i, int *j)
{
    int choice;

    while (1)
    {
        printf("\n1. Enqueue");
        printf("\n2. Dequeue");
        printf("\n0. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (enque(arr, i) == -1)
                printf("Queue is full\n");
        }
        else if (choice == 2)
        {
            int val = deque(arr, j, i);

            if (val == -1)
                printf("Queue is empty\n");
            else
                printf("Dequeued: %d\n", val);
        }
        else if (choice == 0)
        {
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
}
int main()
{
    int queue[20];
    int i = 0, j = 0;



    menu(queue, &i, &j);

    return 0;

}