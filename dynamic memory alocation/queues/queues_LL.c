#include <stdio.h>
#include <stdlib.h>

    struct node{
        int value;
        struct node* nextnode;
    };
    struct node *head=NULL;
    struct node *first = NULL;

void enque(int val){
        struct node *newNode;
        newNode=(struct node*)malloc(sizeof(struct node));
        newNode->value=val;
        newNode->nextnode=NULL;
       if(first==NULL){
        head=newNode;
        first=newNode;
       }
       else{
        head->nextnode=newNode;
        head=newNode;
       }
    }
int is_Empty()
{
    if (first == NULL)
        return 1;
    return 0;
}

int deque()
{
    if (is_Empty())
    {
        printf("queue Underflow\n");
        return -1;
    }

    struct node *temp = first;
    int value = temp->value;

    first = first->nextnode;
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
    return head->value;
}

int size()
{
    struct node *temp = first;
    int count = 0;
    if (is_Empty())
    {
        printf("Stack Empty\n");
        return count;
    }

    while (temp != NULL)
    {
        count++;
        temp = temp->nextnode;
    }
    return count;
}

void display(){
    struct node *temp = first;
     if (is_Empty())
    {
        printf("queue is empty\n");
        return -1;
    }
    while (temp != NULL) {
        printf("%d ", temp->value);
        temp = temp->nextnode;
    }

    printf("\n");
}

int peekBegin(){
    if (is_Empty())
    {
        printf("Stack Empty\n");
        return -1;
    }
    return firs->value;
}


int clear(){

    struct node *temp = first;

    while (temp != NULL)
    {
        temp = first;
        head = temp->nextnode;
        free(temp);
        
    }
    head=NULL;
    first=NULL;
}

int search(int val){
     struct node *temp=first;

    while(temp!=NULL ){
        if(temp->value==val) return 1;
      temp=temp->nextnode;
    }
}
void menu(){
        printf("\n--- queue MENU ---\n");
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
                enque(val);
                printf("Value inserted successfully.\n");
                break;

            case 2:
                result = deque();

                if (result != -1)
                    printf("Deleted value: %d\n", result);
                break;

            case 3:
                result = peek();

                if (result != -1)
                    printf("Front value: %d\n", result);
                break;

            case 4:
                if (is_Empty())
                    printf("Queue is Empty.\n");
                else
                    printf("Queue is Not Empty.\n");
                break;

            case 5:
                printf("Queue: ");
                display();
                break;

            case 6:
                printf("Queue Size: %d\n", size());
                break;

            case 7:
                clear();
                printf("Queue Cleared.\n");
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