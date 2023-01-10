#include<stdio.h>

#include<stdlib.h>

struct node

{

 int data;

 struct node *left;

 struct node *right;

 struct node *root;

};

void insertion();

void search();

void inorder(struct node*);

void preorder(struct node*);

void postorder(struct node*);


struct node *root=NULL;

struct node *ptr=NULL;

struct node *ptr1=NULL;

struct node *new=NULL;

void main()

{

 int opt;


 do

  {

   printf("\nEnter your choice:\n1. insertion\n 2. Inorder\n 3. Preorder\n 4. Postorder\n 5. Search\n ");

   scanf("%d",&opt);

   switch (opt)

   {

    case 1:insertion();

           break;

    case 2:inorder(root);

           break;

    case 3:preorder(root);
           
           break;

    case 4:postorder(root);

           break;
  
   case 5:search();

           break;

    default:printf("invalid choose");

   }

  }

 while(opt!=4);

}

void insertion()
{
  int x;

  new=(struct node*)malloc(sizeof(struct node));

  printf("enter the data to be inserted ");

  scanf("%d",&x);

  new->data=x;

  new->right=NULL;

  new->left=NULL;

  if(root==NULL)

  {

   root=new;

  }

  else

   {

    ptr=root;

    while(ptr!=NULL)

    {

     if(x==ptr->data)
       
       {
          printf("\n Item is present in the tree");
          break;
       }

     else if(x>ptr->data)

       {
          
         ptr1=ptr;

         ptr=ptr->right;
   
       }
  
     else

       {

          ptr1=ptr;
    
          ptr=ptr->left;

       }
}

    
   if(ptr==NULL)

     {

        if(x>ptr1->data)

           {
 
             ptr1->right=new;

           }
    
        else

            {

               ptr1->left=new;

            }

       }
}
 }  
void inorder(struct node* ptr)

{
  
  if(ptr!=NULL)

   {
  
      inorder(ptr->left);

      printf("%d",ptr->data);

      inorder(ptr->right);

   }
  
}

void preorder(struct node* ptr)

{
  
  if(ptr!=NULL)

   {
  
      printf("%d",ptr->data);

      preorder(ptr->left);

      preorder(ptr->right);


   }
  
}

void postorder(struct node* ptr)

{
  
  if(ptr!=NULL)

   { 

      postorder(ptr->left);

      postorder(ptr->right);

      printf("%d",ptr->data);

   }
  
}
void search()
{
int x;

ptr=root;

printf("Enter the data to be search");

scanf("%d",&x);

while(ptr!=NULL)

{

  if(ptr->data==x)

     {

       printf("Data present");

     }

  else if(x>ptr->data)

     {
       
        ptr=ptr->right;

     }

  else

     {
         ptr=ptr->left;

     } 

if(ptr==NULL)
    {

          printf("Data not present");

    }

}
}
  
 
