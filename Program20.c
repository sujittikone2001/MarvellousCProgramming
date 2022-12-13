#include<stdio.h>
int Sum()
{
   int iCnt = 0;
   int iSum = 0;

   for(iCnt=0;iCnt<=5;iCnt++)
   {
      iSum = iSum + iCnt;
   }
     return iSum;
}
int main()
{
  int iRet = 0;

  iRet = Sum();

  printf("Sum is : %d",iRet);

  return 0;
}