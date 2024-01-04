#include<stdio.h>
#include<stdlib.h>
struct node
{ 
int data;
struct node *link;
} *top,*top1,*temp;
void push();
void pop(void);
void display(void);
int main()
{
int ch,element;




    
   
    printf("\n\t STACK OPERATIONS USING LINKED LIST");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
     printf("\n Enter the Choice:");
        scanf("%d",&ch);
        
    
    
       
        switch(ch)
        {
            case 1:
            {
            printf("enter the element:");
            scanf("%d",&element);
            push(element);
                
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }while(ch!=4);
    return 0;
    
    
}




void push(int element)
{
if(top==NULL)
{
top=(struct node*) malloc(1*sizeof(struct node));
top->link=NULL;
top->data=element;
printf("%d inserted",element);
}
else
{
 
temp=(struct node*)malloc(1*sizeof(struct node));
temp->link=top;
temp->data=element;
top=temp;
printf("%d inserted",element);
}
}
void pop()
{
top1=top;
if(top1==NULL)
{
printf("Empty!!!!!");
}
else
{
top1=top->link;
printf("popped Element %d \n",top->data);
free(top);
top=top1;
}
}
void display()
{
top1=top;
if(top1==NULL)
{
printf("empty");
}
while(top1!=NULL)

{
printf("%d--->",top1->data);
top1=top1->link;
}
printf("NULL");
}
