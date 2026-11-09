#include<stdio.h>
#include<stdlib.h>
struct node
 {
 int data;
 struct node *next;
 };
 struct node *head = NULL;
 void insertNode()
   {
   int n;
   struct node *newnode,*temp;
   printf("Enter the data to  be inserted:");
   scanf("%d",&n);
   newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data = n;
   newnode->next = NULL;
    if(head == NULL)
     head = newnode;
    else{
     temp = head;
    while(temp->next!=NULL)
     {
     temp = temp->next;
     }
     temp->next = newnode;
    }
   }
  void display()
   {
   struct node *temp;
   printf("The elements in the list:");
   temp=head;
   while(temp!=NULL)
    {
    printf("%d\n",temp->data);
    temp=temp->next;
    }
   }
  void deleteFromFront()
   {
   if(head==NULL)
    printf("List is empty");
   else
    head = head->next;
   }

 void main()
  {
  int ch;
  char opt;
  do
   {
   printf("Enter \n1. To insert value \n2.Display \n3.Delete from front \n4.Exit\n");
   scanf("%d",&ch);
   switch(ch)
    {
    case 1:insertNode();
          break; 
    case 2:display();
          break;
    case 3:deleteFromFront();
          break;
    case 4:
          break;
    default:
        printf("invalid choice");
    }
  }while(ch!=4);
 }
     
   
   
 
