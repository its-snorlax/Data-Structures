#include <stdio.h>

#define MAX 50
int queueArray[MAX];
int rear = - 1;
int front = - 1;

void insert()
{
    int value;
    if (rear == MAX - 1)
        printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
            front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &value);
        rear = rear + 1;
        queueArray[rear] = value;
    }
} 

void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queueArray[front]);
        front = front + 1;
    }
} 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queueArray[i]);
        printf("\n");
    }
} 

void main()
{
    int choice;
    while (1)
    {
        printf("\n****** MENU ******\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            default:
            printf("Wrong choice \n");
        } 
    } 
} 
