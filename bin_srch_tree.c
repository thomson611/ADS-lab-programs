#include<stdio.h>
#include<stdlib.h>
 struct Node
 {
 int data;
 struct Node* left;
 struct Node* right;
 };
 struct Node* createNode(int value){
  struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
   }
 struct Node* insert(struct Node* root,int value)
  {
   if(root==NULL){
      return createNode(value);
      }
   if(value<root->data){
     root->left=insert(root->left,value);
     }
   else if(value > root->data){
    root->right = insert(root->right,value);
    }
   return root;
   }
 struct Node* search(struct Node* root,int value)
  {
   if(root==NULL || root->data==value)
   {
   return root;
   }
   if(value < root-> data){
     return search(root->left,value);
     }
    else{
      return search(root->right,value);
      }
   }
 void inorderTraversal(struct Node* root)
  {
   if(root!=NULL)
    {
     inorderTraversal(root->left);
     printf("%d\t",root->data);
     inorderTraversal(root->right);
    }
  }
 int main()
  {
  struct Node* root = NULL;
   root = insert(root,50);
   insert(root,30);
   insert(root,20);
   insert(root,40);
   insert(root,70);
   insert(root,60);
   insert(root,80);
  printf("In-order traversal of the BST:\n");
  inorderTraversal(root);
  printf("\n");
  int searchVal1= 40;
    if(search(root,searchVal1)!=NULL)
     {
     printf("%d found in the BST.\n",searchVal1);
     }
    else
     {
     printf("%d not found in the BST.\n",searchVal1);
     }
   int searchVal2 = 90;
     if(search(root,searchVal2)!=NULL)
      {
      printf("%d found in the BST.\n",searchVal2);
      }
     else
      {
      printf("%d not found in the BST.\n",searchVal2);
      }
     return 0;
   }
   
   
   
     
     
 
   
    
