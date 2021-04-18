#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() 
{
   char s1[50], s2[50], s3[50] ;
   int i, c=0;
   
   printf("get the string");
   gets(s1);
   printf("string 1\n");
   puts(s1);   
   printf("\nget the string");
   gets(s2);
   printf("string 2\n");
   puts(s2);   
   
  for(i=0;s1[i]!='\0';i++)
   {
     s3[c]=s1[i];
	 c++;
   }
   for(i=0;s2[i]!='\0';i++)
   {
     s3[c]=s2[i];
	 c++;
   }
   s3[c]='\0';
   
   printf("\n\nstring \n");
   puts(s3);   
   
   getch();
   return 0;
}
