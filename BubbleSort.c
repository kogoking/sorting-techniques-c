// Coded and Executed on https://repl.it/languages/c by @KogoKing
#include<stdio.h>

int main(void)
{
  int i,j,n,x,temp;
  int array[100];

  printf("Total number of elements: \n");
  scanf("%d",&n);
  printf("Enter %d elements: \n",n);
  for(x=0;x<n;x++)
  {
    scanf("%d",&array[x]);
  }

  // Bubble Sort
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(array[j]>array[j+1])
      {
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }

  // Printing array
  for(x=0;x<n;x++)
  {
    printf("%d ",array[x]);
  }
}