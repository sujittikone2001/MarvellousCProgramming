#include<stdio.h>

int main()
{
  char Arr[50];

  printf("Please enter your full name\n");

  scanf("%[^'\n']s",Arr);
  printf("Your name is : %s\n",Arr);

   return 0;
}