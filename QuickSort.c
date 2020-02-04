// Coded and Executed on https://repl.it/languages/c by @KogoKing

#include<stdio.h>

void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int low, int high)
{
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot)
    {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

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

  // Quick Sort
  quickSort(array, 0, n - 1);

  // Printing array
  for(x=0;x<n;x++)
  {
    printf("%d ",array[x]);
  }
}

