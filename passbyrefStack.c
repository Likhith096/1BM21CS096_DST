#include<stdio.h>
#define stack_size 5

void push(int st[],int *top,int item)
{
 if(*top==stack_size-1)
 printf("STACK OVERFLOW \n ");
 else
{
 *top=*top+1;
 st[*top]=item;
}
}

int pop(int st[],int *top)
{
 if(*top==-1)
 printf("STACK UNDERFLOW \n");
 else
 {
 int del_item;
 del_item=st[*top];
 *top=*top-1;
 printf("The element deleted is %d",del_item);
 return del_item;
 }
}
 
void display(int st[],int *top)
{
 int i;
 if(*top==-1)
 printf("Stack is empty \n");
 for(i=0;i<=*top;i++)
 printf("%d ",st[i]);
}

int main()
{
    int st[stack_size];
    int top=-1;
    
 int ch,i;
while(1)
{
 printf(" Enter 1 for push \n Enter 2 for pop \n Enter 3 for display\n");
 scanf("%d",&ch);

 switch(ch)
 {
  case 1: 
          printf("Enter the number to be added ");
          int item;
          scanf("%d",&item);
          push(st,&top,item);
          break;
  case 2: pop(st,&top);
          break;
  case 3: display(st,&top);
          break;
  default: exit(0);
           break;
 }
}
 return 0;
}