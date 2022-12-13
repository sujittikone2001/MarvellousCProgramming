#include<stdio.h>
int Sum(int iValue)
{
   int iCnt = 0;
   int iSum = 0;

   for(iCnt = 0; iCnt <= iValue; iCnt++)
   {
      iSum = iSum + iCnt;
   }
     return iSum;
}
int main()
{
  int iRet = 0;
  int iNo = 0;


  printf("Enter the number\n");
  scanf("%d",&iNo);
  
  iRet = Sum(iNo);

  printf("Sum is : %d",iRet);

  return 0;
}