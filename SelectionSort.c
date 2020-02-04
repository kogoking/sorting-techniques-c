// Coded and Executed on https://repl.it/languages/c by @KogoKing
#include<stdio.h>

int main(void)
{
  int i,j,n,x,min,temp;
  int array[100];

  printf("Total number of elements: \n");
  scanf("%d",&n);
  printf("Enter %d elements: \n",n);
  for(x=0;x<n;x++)
  {
    scanf("%d",&array[x]);
  }

  // Selection Sort
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if (array[i] > array[j])
      {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;}
      }
    } 

  // Printing array
  for(x=0;x<n;x++)
  {
    printf("%d ",array[x]);
  }
}

