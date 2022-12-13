

#include<stdio.h>

void CheckEvenOddDigits(int iNo)
{
   int iDigit = 0;
   int iEvenCnt = 0;
   int iOddCnt = 0;
  
   if(iNo == 0)
   {
     printf("Number of Even digits are : 1\n");
     printf("Number of Even digits are : 0\n");
     return;
   }
   while(iNo != 0)
   {
     iDigit = iNo % 10;
     if((iDigit % 2) == 0)
     {
       iEvenCnt++;
     }
     else
     {
       iOddCnt++;
     }
     iNo = iNo / 10;
   }
     printf("Number of Even digits are : %d\n",iEvenCnt);
     printf("Number of Even digits are : %d\n",iOddCnt);
}

int main()
{
   int iValue = 0;

   printf("Enter the Number : \n");
   scanf("%d",&iValue);

   CheckEvenOddDigits(iValue);


    return 0;
}