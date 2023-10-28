#include<stdio.h>
int a[50],n,i,j,choice,rear=-1,front=0;
void insert()

{
int value;
  if(rear>=n)
  {
    printf("queue is full");
    }
  else 
  {
  if(rear==-1)
  {
  
   rear=0;
   printf("insert the element in queue");
   scanf("%d",&value);
     rear=rear+1;
     a[rear]=value;
 
  }
 printf("\nafter insertion queue:");
 for(i=front;i<=rear;i++)
 {
     printf("%d",a[i]);
   } 
   } 
   }
 void display()
 {
 }
 void delete()
 {
 }
int main()
{
printf("enter the size of the queue");
scanf("%d",&n);
printf("enter the elements of the queue");
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);
} 
for(i=0;i<n;i++)
{
   printf("%d",a[i]);
} 
while(choice!=4)
{

printf("\n1.insert\n2.delete\n3.display front and rear value\n ");
printf("enter your choice:");
scanf("%d",&choice);
 switch(choice)
 {
  case 1:insert();
         break;
  case 2:delete();
          break; 
  case 3:display();
       break;
  default:printf("invalid entry"  );
        break;
 }
   } 
 return 0;
    }
       
