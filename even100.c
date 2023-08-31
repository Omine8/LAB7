#include<stdio.h>
int main(){
int i=1,ch;
printf("Select option from menu:\n 1--For loop \n 2---While loop \n 3---Do-while loop \n");
printf("Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
for(i;i<=100;i++)
{
if(i%2==0)
{
printf("%d ",i);
}
}
printf("\n");
break;

case 2:
while(i<=100)
{
if(i%2==0)
{
printf("%d ",i);
}
i++;
}
printf("\n");
break;

case 3:
do
{
if(i%2==0)
{
printf("%d ",i);
}
i++;
}while(i<=100);
printf("\n");
break;

default:
printf("INVALID CHOICE");
break;

}
}
