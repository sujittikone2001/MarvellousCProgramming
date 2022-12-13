#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

     for( iCnt= 2; iCnt<= (iNo/2); iCnt = iCnt+2)
    {
      if(iCnt% 2 ==  0 )
        printf("%d\n",iCnt);
    }
}


int main()
{
    int iValue = 0;

    printf("Enter numbers\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}