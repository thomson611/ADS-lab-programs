#include<stdio.h>
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;
 void enqueue()
 {
 int value;
  if(rear == MAX-1)
   {
    printf("Queue Overflow\n");
   }
  else
   {
    printf("Enter value:");
    scanf("%d",&value);
     if(front == -1)
      front=0;
      rear++;
     queue[rear]=value;
     printf("Value inserted successfully\n");
    }
  }
 void dequeue()
  {
   if(front == -1 || front>rear)
    {
     printf("Queue Overflow\n");
    }
   else
    {
    printf("Deleted value:%d\n",queue[front]);
    front++;
     if(front>rear)
      {
      front=-1;
      rear=-1;
      }
    }
  }
  void display()
   {
    int i;
    if(front == -1)
     {
     printf("Queue is empty\n");
     }
    else
     {
     printf("Queue elements:\n");
      for(i=front;i<=rear;i++)
       {
       printf("%d\n",queue[i]);
       }
     }
   }
 int main()
   {
 int choice;
 while(1){
 printf("Queue Operations\n");
 printf("\n1.Enqueue\n2.Dequeue\n3.Display\n");
 printf("Enter your choice:\n");
 scanf("%d",&choice);
 switch(choice)
  {
  case 1:
      enqueue();
      break;
  case 2:
      dequeue();
      break;
  case 3:
      display();
      break;
  case 4:
      return 0;  
  default:
       printf("Inavlid insertion\n");
  }
 }
}
      

