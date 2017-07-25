
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 int num,i,a,Z,A;
 char str[70];
 printf("Enter the string value: ");
 gets(str);
 for(i=0; str[i]!='\0'; i++)
 {
   if(str[i-1]==' ' || i==0)
   {
     if(str[i]>='a' && str[i]<='z')
       str[i]=str[i]-76;
     else
       if(str[i]>='A' && str[i]<='Z') 
     str[i]=str[i]+76; 
   }
   printf("%c",str[i]);
}
 return 0;
}
