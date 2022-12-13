

#include<stdio.h>
#include<stdbool.h>

int CheckPalindrome(int iNo)
{
   int iDigit = 0, iRev = 0 , iTemp = iNo;

   if(iNo < 0)
   {
     iNo = -iNo;
   }

   for( ;iNo != 0; )
   {
     iDigit = iNo % 10;
     iRev = (iRev * 10) +iDigit;
     iNo = iNo / 10;
   }
   if (iRev == iTemp)
   {
      return true;
   }
   else
   {
      return false;
   }
}
int main()
{
   int iValue = 0;
   bool bRet = 0;
   printf("Enter the Number : \n");
   scanf("%d",&iValue);

   bRet = CheckPalindrome(iValue);
   if(bRet == true)
   {
     printf("The number is a Palindrome :%d\n",iValue);
   }
   else
   {
     printf("The number is a not Palindrome :%d\n",iValue);
   }
   return 0;
}