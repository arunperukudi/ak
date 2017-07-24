#include<stdio.h>
#include<string.h>
void main()
{
char str[40],temp;
int i,j;
printf("enter the string"/n);
gets(str);
for(i=0;i<strleng;i=i+2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;
}
printf("/n after swapping nthe string values",str);
getch 0;
}
