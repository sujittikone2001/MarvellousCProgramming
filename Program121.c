#include<stdio.h>

void strupX(char *str)
{
   while(*str != '\0')
   {
     if((*str >= 'a') && (*str <= 'z'))
     {
        *str = *str - 32;
     }
      str++;
   }
}

int main()
{
   char Arr[20];

   printf("Please enter string\n");
   scanf("%[^'\n']s",Arr);

   strup(Arr);

   printf("String After conversion is : %s\n",Arr);

   return 0;
}