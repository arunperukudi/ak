#include<stdio.h>
#include<string.h>
void main()
{
char arr[64];
int a=0,i,num;
printf("enter the  number");
gets(arr);
num=strnum(arr);
for(i=0;i<=num;i++)
{
a=a*8+(arr[i]-'0');
}
printf("%d",a);
}
