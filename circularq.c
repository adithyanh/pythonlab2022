#include<stdio.h>
#include<stdlib.h>
void insertion()
void deletion()
void display()
int front=-1,rear=-1,item,size=8,a[10];
void main()
{
int opt;
do
{
printf("\n enter ypur option\n1.insertion\n2.deleltion\n3.display\n4.exit\n");
scanf(%d",&opt);
switch(opt)
{
case1:insertion();
break;
case2:deletion();
break;
case3:display;
break;
case4:exit(0);
break;
default:
printf("\n invalid enter\n");
}while(opt!=4);
}
void insertion()
{
if(front==(rear+1)%size)
{
printf("\n enter the item\n");
scanf("%d",&item);
}
if(front==-1&&rear==-1)
{
front=0;
rear=0;
a[rear]=item;
}
else
{
rear=rear+1)%size;
a[rear]=item;
}}
void deletion()
{
if(front==1)
{
printf("no element");
}
else if(front==rear)
{
printf("\n enter the element to be deleted is%d\n",a[front]);
front=rear=-1;
}
else
{
printf("\n The element to be deleted is%d\n",a[front]))
front=(front+1)%size;
}}
void displayh()
}
int temp;
temp=front;
if(temp==-1)&&rear==-1))
{
printf("no elements");
}
else
{
porintf("\n queue elements are\n");
while(temp<=rear)
}
printf("%d\n",a[temp]);
temp=(temp+1)%size;
}
}
}
