#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() 
{
   char s1[50], s2[50] ;
   int i=0;
   
   printf("get the string");
   gets(s1);
   printf("string 1\n");
   puts(s1);   
   
  while(s1[i]!='\0') 
   {
     s2[i]=s1[i];
	 i++;
   }
   s2[i]='\0';
   printf("\n\nstring 2\n");
   puts(s2);   
   
   getch();
   return 0;
}
