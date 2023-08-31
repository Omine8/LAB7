#include<stdio.h>
int main(){
int i=1,n,ch;
printf("Enter n:");
scanf("%d",&n);
printf("Select option from menu:\n 1--For loop \n 2---While loop \n 3---Do-while loop \n");
printf("Enter your choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
for(i=1;i<=n;i++)
{
printf("%d ",i);
}
printf("\n");
printf("\n");
for(i=n;i>=1;i--)
{
printf("%d ",i);
}
printf("\n");
break;

case 2:
while(i<=n)
{
printf("%d ",i);
i++;
}
printf("\n");
printf("\n");
i=1;

while(n>=i)
{
printf("%d ",n);
n--;
}

printf("\n");
break;

case 3:
do
{
printf("%d ",i);
i++;
}while(i<=n);
i=1;
printf("\n");
printf("\n");
do
{
printf("%d ",n);
n--;
}while(n>=i);
printf("\n");
break;

default:
printf("INVALID CHOICE");
break;

}
}
