#include<stdio.h>

#define DEBUG printf
void swap(int *a, int *b)
{	
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void insertAndMove(int *arr, int i, int j)
{
	int temp = arr[i];
	for(int count=i-1; count >=j; count--)
	{
		arr[count+1] = arr[count];
	}
	
	arr[j] = temp;
	return;
}
void sort(int *arr, int length)
{
	int min_index;
	for(int i=1; i<length;i++)
	{
		DEBUG("Processing for index = (%u)\n", i);
		for(int j=0;j<i;j++)
		{
			if(arr[i] < arr[j]) 
			{
				DEBUG("DEBUG: Need to move i=(%d) to j=(%d) \n", j,i);
				insertAndMove(arr, i,j);
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
	int arr[] = {4,32,1,3,2};

	int length = sizeof(arr)/sizeof(arr[0]);

	printArr(arr, sizeof(arr)/sizeof(arr[0]));
	sort(arr, sizeof(arr)/sizeof(arr[0]));
	printArr(arr, sizeof(arr)/sizeof(arr[0]));
	
	return 0;
}
