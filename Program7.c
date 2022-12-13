//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Problem Statement : Accept number from user and check wheather it is divisible by 5 or not
//Input : 23
//Output : 23 is Not divisible by 5
//
//Input : 25
//Output : 25 is divisible by 5
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Algorithm
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
  START
      Accept number frome user NO
      Divide that NO by 5 and check the value of remainder
      If the value is 0
           Then displey as NO is Divisible by 5
      Otherwise
           display as NO is not divisible by 5
  END
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : DivisibleByFive
// Description : To check wheather it is divisible by 5 or not
// Input : Integer
// Output : Integer
// Author : Sujit Prabhakar Tikone
// Date : 12/10/2022
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int DivisibleByFive(int No)
{
   int iAns = 0;
   iAns = No % 5;

   if(iAns != 0)
   {
      return 1;
   }
   else
   {
      return 0;
   }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Entry Point of the Application
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter the number : \n");
   scanf("%d",&iValue);

   iRet = DivisibleByFive(iValue);
   if(iRet !=0)
   {
     printf("%d is not divisible by 5 :", iValue);
   }
   else
   {
     printf("%d is divisible by 5 :", iValue);
   }
   return 0;
}