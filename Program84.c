/*
    Row = 4
    Col = 4

   $   *   *   *
   *   $   *   *
   *   *   $   *
   *   *   *   $
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
  int i = 0, j = 0;

  for(i = 1; i <=iRow; i++)
  {
    for(j = 1; j <= iCol; j++)
   {
    if(i == j)
    {
      printf("$\t");
    }
    else
    {
      printf("*\t");
    }
  }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of Rows\n");
  scanf("%d",&iValue1);

  printf("Enter number of Columns\n");
  scanf("%d",&iValue2);

  Display(iValue1,iValue2);

  return 0;
}