#include<stdio.h>
#include<stdlib.h>

struct queue{
    int info;
    struct queue *link;
};
queue *front=NULL,*rear=NULL;

int count=0;

void enQueue(int n)
{
    queue *newnode;
    newnode=(struct queue*)malloc(sizeof(struct queue));
    newnode->info=n;
    newnode->link=NULL;
    if(count==0)
        front=newnode;
    else
        rear->link=newnode;
    rear=newnode;
    rear->link=front;
    count++;
}
int deQueue(void)
{
    int n;
    queue *temp;
    if(count==0)
        return (-1);
    count--;
    if(front==rear)
    {
        n=front->info;
        free(front);
        front=NULL;
        rear=NULL;
    }else
    {
        temp= front ;
        n = temp-> info ;
        front = front -> link ;
        rear -> link = front ;
        free ( temp ) ;
    }
    return n;
}
void display(void)
{
    queue *temp;
    int i;
    if(count==0)
        printf("Empty");
    else
    {
        temp=front;
        for(i=0;i<count;i++)
        {
            printf("%d ",temp->info);
            temp=temp->link;
        }
    }
    printf("\n");
}
int size(void)
{
    return count;
}
int main()
{
    int n,ch=10;
    while(ch!=0)
    {
        printf("\n***MENU***\n");
        printf("1. Insert\n2. Remove\n3. Display\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                printf("What no. do you want to insert in queue\n");
                scanf("%d",&n);
                enQueue(n);
                break;
            }
            case 2:
            {
                n=deQueue();
                if(n==-1)
                    printf("Queue is empty\n");
                else
                    printf("Number removed from queue is %d\n",n);
                break;
            }
            case 3:
            {
                n=size();
                printf("Size of queue is %d\n",n);
                break;
            }
            case 4:
            {
                printf("Queue is -->> ");
                display();
            }
            case 5:
            break;
            default:
            printf("Wrong Choice\n");
            break;
        }
    }
}