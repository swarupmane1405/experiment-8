#include <stdio.h>
#include<conio.h>
#include<string.h>

int main() {
   char s1[50] ;
   int i=0;
   printf("get the string");
   gets(s1);
      
   while(s1[i]!='\0') 
   {
      i++;
   }
   
   printf("\n\nLength of string '%s' is %d", s1, i);
   getch();
   return 0;
}

