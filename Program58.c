#include<stdio.h>
#include<stdlib.h>

void DisplayEvenOdd(int Arr[], int iSize)
{
  int iEven = 0, iOdd = 0, iCnt = 0;

  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
     if((Arr[iCnt] % 2) == 0)
     {
       iEven++;
     }
     else
     {
       iOdd++;
     }
  }
   printf("Even elements are :%d\n",iEven);
   printf("Odd elements are :%d\n", iOdd);
}

int main()
{
  int *ptr = NULL;
  int iLength = 0, i = 0, iRet = 0;

  printf("Enter number of elements :\n");
  scanf("%d",&iLength);

  ptr = (int*)malloc(iLength * sizeof(int));

  printf("Enter the elements :\n");

  for(i = 0; i < iLength; i++)
  {
    scanf("%d",&ptr[i]);
  }
  DisplayEvenOdd(ptr,iLength);

  free(ptr);

  return 0;
}