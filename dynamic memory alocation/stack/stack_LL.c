#include <stdio.h>
#include <stdlib.h>
struct node
{
    int val;
    struct node *next;
};
struct node *head = NULL;
int is_Empty()
{
    if (head == NULL)
        return 1;
    return 0;
}
void push(int val)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->val = val;
    newnode->next = head;
    head = newnode;
}

int pop()
{
    if (is_Empty())
    {
        printf("Stack Underflow\n");
        return -1;
    }

    struct node *temp = head;
    int value = temp->val;

    head = head->next;
    free(temp);

    return value;
}

int peek()
{
    if (is_Empty())
    {
        printf("Stack Empty\n");
        return -1;
    }
    return head->val;
}
void display()
{
    struct node *temp = head;

    if (is_Empty())
    {
        printf("Stack Empty\n");
        return;
    }

    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
}

int size()
{
    struct node *temp = head;
    int count = 0;
    if (is_Empty())
    {
        printf("Stack Empty\n");
        return count;
    }

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int clear()
{
    struct node *temp = head;

    while (temp != NULL)
    {
        temp = head;
        head = temp->next;
        free(temp);
    }
}


void menu()
{
    printf("\n--- STACK MENU ---\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Is Empty\n");
    printf("5. Display\n");
    printf("6. Size\n");
    printf("7. Clear\n");
    printf("8. Exit\n");
}
int main()
{

    int choice, val, result;

    while (1)
    {
        menu();

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            push(val);
            printf("Value pushed successfully.\n");
            break;

        case 2:
            result = pop();
            if (result != -1)
                printf("Popped value: %d\n", result);
            break;

        case 3:
            result = peek();
            if (result != -1)
                printf("Top value: %d\n", result);
            break;

        case 4:
            if (is_Empty())
                printf("Stack is Empty.\n");
            else
                printf("Stack is Not Empty.\n");
            break;

        case 5:
            printf("Stack: ");
            display();
            break;

        case 6:
            printf("Stack Size: %d\n", size());
            break;

        case 7:
            clear();
            printf("Stack Cleared.\n");
            break;

        case 8:
            clear();
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid Choice.\n");
        }
    }

    return 0;
}