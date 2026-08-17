#include <stdio.h>

int inp()
{
    int x;
    scanf("%d", &x);
    return x;
}

int isempty(int *currSize)
{
    if (*currSize == 0)
        return 1;

    return 0;
}

int isfull(int *currSize, int *size)
{
    if (*currSize == *size)
        return 1;

    return 0;
}

int enqueue(int *arr, int *i, int size, int *currSize)
{
    if (isfull(currSize, &size))
        return -1;

    *i = (*i + 1) % size;
    arr[*i] = inp();

    (*currSize)++;

    return 1;
}

int dequeue(int *arr, int *j, int size, int *currSize)
{
    if (isempty(currSize))
        return -1;

    *j = (*j + 1) % size;

    (*currSize)--;

    return arr[*j];
}

int main()
{
    int size = 5;
    int currSize = 0;
    int queue[size];

    int i = 0;
    int j = 0;
    int choice;
    int value;

    while (1)
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Check Empty\n");
        printf("4. Check Full\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (enqueue(queue, &i, size, &currSize) == -1)
                printf("Queue is full\n");
            else
                printf("Element inserted\n");
            break;

        case 2:
            value = dequeue(queue, &j, size, &currSize);

            if (value == -1)
                printf("Queue is empty\n");
            else
                printf("Deleted element: %d\n", value);
            break;

        case 3:
            if (isempty(&currSize))
                printf("Queue is empty\n");
            else
                printf("Queue is not empty\n");
            break;

        case 4:
            if (isfull(&currSize, &size))
                printf("Queue is full\n");
            else
                printf("Queue is not full\n");
            break;

        case 5:
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}