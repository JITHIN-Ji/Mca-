#include<stdio.h>
int queue[100];
int front=-1,rear=-1,choice,item,size;
int isfull(){
if (rear==size-1)
return 1;
else
return 0;
}
int isempty(){
if(front==-1)
return 1;
else
return 0;
}
void enqueue(){
if(isfull())
printf("queue isfull\n");
else{
printf("enter item:");
scanf("%d",&item);
if(front==-1)
front=0;
rear=rear+1;
queue[rear]=item;
printf("enqueued %d\n",item);
}
}
void dequeue(){
if(isempty())
printf("queue is empty\n");
else{
printf("dequeued %d\n",queue[front]);
if (front==rear)
front=rear=-1;
else 
front=front+1;
}
}
void display(){
int i;

if(isempty())
printf("queue is empty.\n");
else{
printf("queue elements:\n");
for(i=front; i<=rear; i++)
printf("%d \t",queue[i]);
printf("\n");
}
}
int main(){
printf("\n enter the size of the array(max:100):");
scanf("%d",&size);
do{
printf("\n\n enter the operation to perform:\n1.enqueue\n2.dequeue\n3.display\n0.exit\n your choice:");

scanf("%d",&choice);
switch(choice){
case 1:{
enqueue();
break;}
case 2:{
dequeue();
break;}
case 3:{
display();
break;}
case 0:{
printf("exit\n");
break;}
default:
printf("\ninvalid input");
}
}
while(choice!=0);
return 0;
}

