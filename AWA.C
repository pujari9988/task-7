#include <stdio.h>
#include <string.h>

int main()
{
   char inword[100], revword[100];
   clrscr();
   printf("Entre the string to check palindrom \n");
   scanf("%s", inword);

   strcpy(revword, inword);

   strrev(revword);

   if(strcmp(inword, revword) == 0 )
      printf("%s is a palindrome.\n", inword);
   else
      printf("%s is not a palindrome.\n", inword);

   getch();
   return 0;
}