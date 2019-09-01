// Coded and Executed on https://repl.it/languages/c by @KogoKing

#include<stdio.h>

int main(void)
{
  int i,j,n,x,key;
  int array[100];

  printf("Total number of elements: \n");
  scanf("%d",&n);
  printf("Enter %d elements: \n",n);
  for(x=0;x<n;x++)
  {
    scanf("%d",&array[x]);
  }

  // Insertion Sort
  for (i = 1; i < n; i++) 
  {  
    key = array[i];  
    j = i - 1;
    while (j >= 0 && array[j] > key) 
    {  
      array[j + 1] = array[j];  
      j = j - 1;
    }
    array[j + 1] = key;
  }

  // Printing array
  for(x=0;x<n;x++)
  {
    printf("%d ",array[x]);
  }
}

/* Explanation: First element is considered to be sorted and the second element is compared with the first and placed before or after accordingly. Same method is used to place other elements by checking its position within sorted elements */