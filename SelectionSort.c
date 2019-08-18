// Coded and Executed on https://repl.it/languages/c by @KogoKing
#include<stdio.h>

int main(void)
{
  int i,j,e,x,temp;
  int array[100];

  printf("Total number of elements: \n");
  scanf("%d",&e);
  printf("Enter %d elements: \n",e);
  for(x=0;x<e;x++)
  {
    scanf("%d",&array[x]);
  }

  // Selection Sort
  for(i=0;i<e;i++) // Use condition i<e-1 instead of i<e for optimization
  {
    for(j=i+1;j<e;j++)
    {
      if(array[i]>array[j])
      {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }

  // Printing array
  for(x=0;x<e;x++)
  {
    printf("%d ",array[x]);
  }
}