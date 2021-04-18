#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() 
{
   char s1[50],r;
   int i, c=0;
   
   printf("get the string");
   gets(s1);
   printf("string 1\n");
   puts(s1);   
 printf("enter the character ");
 r=getchar();
  for(i=0;s1[i]!='\0';i++)
   {
     if(s1[i]==r)
     {
     	c++;
	 }
   }
  
   printf("\nIn string %c occured %d times", r, c);
    getch();
   return 0;
}
