#include<stdio.h>

void strcpySmall(char *src, char *dest)
{
   while(*src != '\0')
   {
      if((*src >= 'A') && (*src <= 'Z'))
      {
         *dest = *src + 32;
      }
      else
      {
        *dest = *src;
      }
      src++;
      dest++;
   }
   *dest = '\0';
}

int main()
{
   char Arr[20];
   char Brr[20];

   printf("Please enter string\n");
   scanf("%[^'\n']s",Arr);

   strcpySmall(Arr,Brr);

   printf("Copied String is : %s\n",Brr);
   printf("Original String is : %s\n",Arr);

   return 0;
}