#include<stdio.h>


int Multiplication(int iValue1, int iValue2)
{
   int iAns = 0;

     iAns = iValue1 * iValue2;
     printf("Multiplication is : %d\n", iAns);
      
   return iAns;
}

int main()
{
   int iNo1 = 0;
   int iNo2 = 0;
   int iMult = 0;

   printf("Enter first Number : \n");
   scanf("%d",&iNo1);

   printf("Enter second Number : \n");
   scanf("%d",&iNo2);

   printf("First number is : %d\n",iNo1);
   printf("Second number is : %d\n",iNo2);

   iMult = Multiplication(iNo1,iNo2);
   
    return 0;
}