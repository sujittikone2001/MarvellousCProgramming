
#include<stdio.h>

int SumsDigits(int iNo)
{
   int iDigit = 0;
   int iCnt = 0;
   int iSum = 0;

   while(iNo != 0)
   {
     iDigit = iNo % 10;
     iNo = iNo / 10;
     iCnt++;

     iSum = iSum + iDigit;
   }
   return iSum;
}

int main()
{
   int iValue = 0;
   int iRet = 0;
   printf("Enter the Number : \n");
   scanf("%d",&iValue);

   iRet = SumsDigits(iValue);

   printf("Summation of Digits are : %d\n",iRet);

    return 0;
}