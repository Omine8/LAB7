#include<stdio.h>
int main(){
int n,rev=0,ch;
printf("Enter a number : ");
scanf("%d",&n);
printf("Select option from menu:\n 1--For loop \n 2---While loop \n 3---Do-while loop \n");
printf("Enter your choice : ");
scanf("%d",&ch);
int r;
switch(ch)
{
case 1:
for(n;n!=0;n/=10)
{
r=n%10;
rev=(rev*10)+r;
}
printf("Reverse of number using for is : %d",rev);
printf("\n");
break;

case 2:
while(n!=0)
{
r=n%10;
rev=(rev*10)+r;
n=n/10;
}
printf("Reverse of number using while is : %d",rev);
printf("\n");
break;

case 3:
do
{
r=n%10;
rev=(rev*10)+r;
n=n/10;
}while(n!=0);
printf("Reverse of number using while is : %d",rev);
printf("\n");
break;

default:
printf("INVALID CHOICE");
break;

}
}
