#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front= -1,rear= -1;
void enqueue(int value)
{
if((front==0&&rear==SIZE-1)||(rear==(front-1)%(SIZE-1)))
{
printf("queue is full\n");
}
else if(front==-1)
{
front=rear=0;
queue[rear]=value;
}
else
{
rear++;
queue[rear]=value;
}
}
void dequeue()
{
if(front==-1)
{
print("queue is empty");
}
else if(front==rear)
{
printf("deleted element :%\n",queue[front]);
front=rear=-1;
}
else if(front=SIZE-1)
{
printf("deleted element :%\n",queue[front]);
front=0;
}
else
{
printf("deleted element :%\n",queue[front]);
front++;
}
}
int search(int value)
{
if(front==-1)
{
printf("queue is empty cannot search elemants.\n");
return-1;
}
else
{
int i=front;
if(front<=rear)
{
while(i<=rear)
{
if(queue[i]==value)
{
prnitf("enterd %d found at index %d.\n", value,i);
return i;
}
i++;
}
else
{
while(i<=SIZE-1)
{
if(queue[i]==value)
{
prnitf("enterd %d found at index %d.\n", value,i);
return i;
}
i++;
}
i=0;
while(i<=rear)
{
if(queue[i]==value)
{
prnitf("enterd %d found at index %d.\n" ,value,i);
return i;
}
i++;
}
}
printf("elemant %d found in the queue.\n",value);
return -1;
}
}
int main()
{
int choice,value;
do
{
printf("1.enqueue.\n");
printf("2.dequeu\n");
//printf("3.scearch\n");
printf("4.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("enter the values to be enterd:");
scanf("%d",&value);
enqueue(value);
break;
case 2:
dequeue();
break;
/*case 3:
printf("enter elemant you want to search:");
scanf("%d",&value);
search(value);
break;*/
case 4:
exit(0);
}
}
while(choice!=5);
}