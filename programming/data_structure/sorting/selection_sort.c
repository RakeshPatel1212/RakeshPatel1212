#include<stdio.h>

void swap(int *a, int *b)
{	
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int *arr, int length)
{
	int min_index;
	for(int i=0; i<length -1;i++)
	{
		min_index = i;
		for(int j=i;j<length-1;j++)
		{
			if(arr[min_index] > arr[j])
			{
				min_index = j;
			}
		}
		
		swap(&arr[min_index], &arr[i]);
	}

	return;
}

void printArr(int *arr, int length)
{
	printf("====Arr==>");
	for(int i =0; i< length -1; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");	
}

int main()
{
	int arr[] = {4,32,1,3,2};
	
	
	printArr(arr, sizeof(arr)/sizeof(arr[0]));
	sort(arr, sizeof(arr)/sizeof(arr[0]));
	printArr(arr, sizeof(arr)/sizeof(arr[0]));
	
	
	return 0;
}
