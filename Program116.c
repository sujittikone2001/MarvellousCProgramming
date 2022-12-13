#include<stdio.h>
#include<stdbool.h>

bool Check(char *str,char ch)
{
   int iCnt = 0;
  bool bFlag = false;
   while(*str != '\0')
   {
     if(*str == ch)
     {
       bFlag = true;
       break;
     }
      str++;
   }
}

int main()
{
   char Arr[20];
   char cValue = '\0';
   bool bRet = false;

   printf("Please enter string\n");
   scanf("%[^'\n']s",Arr);

   printf("plaease enter the character\n");
   scanf(" %c",&cValue);

   bRet = Check(Arr,cValue);

   if(bRet == true)
   {
     printf("Character is present in string\n");
   }
   else
   {
     printf("Character is not present in String\n");
   }

   return 0;
}