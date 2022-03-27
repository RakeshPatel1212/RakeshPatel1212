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
	for(int i=0; i<length -1;i++)
	{
		for(int j=0;j<length-i-1;j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
		printArr(arr,length);	
	}

	return;
}

void printArr(int *arr, int length)
{
	printf("====Arr==>");
	for(int i =0; i< length; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");	
}

int main()
{
	int arr[] = {4,32,1,3,2,6};
	
	int length = sizeof(arr)/sizeof(arr[0]);
	
	printf("Length = (%d)\n", length);
	printArr(arr, length);
	sort(arr, length);
	printArr(arr, length);
	
	
	return 0;
}
