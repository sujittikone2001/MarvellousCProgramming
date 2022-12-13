// Input : 751
// Output : 3

// Input : 7551
// Output : 4

#include<stdio.h>

int CheckEvenDigits(int iNo)
{
   int iDigit = 0;
   int iEvenCnt = 0;

   while(iNo != 0)
   {
     iDigit = iNo % 10;
     if((iDigit % 2) == 0)
     {
       iEvenCnt++;
     }
     iNo = iNo / 10;
   }
   return iEvenCnt;
}

int main()
{
   int iValue = 0;
   int iRet = 0;
   printf("Enter the Number : \n");
   scanf("%d",&iValue);

   iRet = CheckEvenDigits(iValue);

   printf("EvenDigits of  are : %d\n",iRet);

    return 0;
}