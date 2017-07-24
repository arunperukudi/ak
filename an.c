#include<stdio.h>
int main()
{
int i,n,fact=1;
printf(" enter the value of n");
scanf("%d",&n);
if(n>0)
{
for(i=1;i<=n;++i)
{
fact=fact*i;
printf("%d",i);
}}
else
{
printf("enter the value of factorial");
} return 0;
}
