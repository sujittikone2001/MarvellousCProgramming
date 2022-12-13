#include<stdio.h>
int Factorial()
{
   int iCnt = 0;
   int iFactorial = 1;

   for(iCnt=1; iCnt<= 5;iCnt++)
   {
      iFactorial = iFactorial * iCnt;
   }
     return iFactorial;
}
int main()
{
  int iRet = 0;

  iRet = Factorial();

  printf("Factorial is : %d",iRet);

  return 0;
}