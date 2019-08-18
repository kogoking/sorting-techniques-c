// Coded and Exectued on https://repl.it/languages/c by @KogoKing

#include<stdio.h>

// Function Definition
void mergeSort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);

// Main function
int main(void)
{
  int n,x;
  int array[100];

  printf("Total number of elements: \n");
  scanf("%d",&n);
  printf("Enter %d elements: \n",n);
  for(x=0;x<n;x++)
  {
    scanf("%d",&array[x]);
  }

  // Sorting
  mergeSort(array,0,n-1);

  // Printing array
  for(x=0;x<n;x++)
  {
    printf("%d ",array[x]);
  }
}

// Merge Sort
void mergeSort(int a[],int i,int j)
{
	int mid;
	if(i<j)
	{
		mid=(i+j)/2;
		mergeSort(a,i,mid);		// Left half recursion
		mergeSort(a,mid+1,j);	// Right half recursion
		merge(a,i,mid,mid+1,j);	// Merging of two sorted sub-arrays
	}
}

// Merging of sub-arrays. Indexes compared and lowest is added first in new array.

// MERGE Function
void merge(int a[],int i1,int j1,int i2,int j2)
{
	int temp[50];	// array used for merging
	int i,j,k;
	i=i1;	// First index of left half
	j=i2;	// First index of right half
	k=0;
	
	while(i<=j1 && j<=j2)	// Elements compared using indexes and lowest one is added to new array
	{
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}
	
	while(i<=j1)	// Copying remaining elements of left half, if any.
		temp[k++]=a[i++];
		
	while(j<=j2)	// Copying remaining elements of right half, if any.
		temp[k++]=a[j++];
		
	// Transfer elements from temp[] back to a[]
	for(i=i1,j=0;i<=j2;i++,j++)
		a[i]=temp[j];
}