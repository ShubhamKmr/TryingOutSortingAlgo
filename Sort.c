#include <stdio.h>
#include <limits.h>
#define SIZE 11
void SelectionSort(int Array[],int size);
void BubbleSort(int Array[],int size);
int main ()
{
	//int Array[SIZE] = {67,43,90,78,46,46};
	int Array[SIZE] = {-2,0,-10,78,34,4,-56,99,34,12,-70};
	SelectionSort(Array,SIZE);
	BubbleSort(Array,SIZE);
	return 1;
}

void SelectionSort(int Array[],int size)
{
	int i , j , iMin , temp = 0;
	for (i = 0 ; i < size-1 ; i++)
	{
		iMin = i;
		for(j = i+1  ; j < size ; j++)
		{
			if ( Array[j] < Array[iMin] )
			{
				iMin = j;
			}
		}
	temp = Array[i];
        Array[i] = Array[iMin];
        Array[iMin] = temp;	
	}
	printf("** SORTED ARRAY OF SELECTION SORT**\n");	
	for(i = 0 ; i < size ; i++)    
		printf("%d\n",Array[i]);
}

void BubbleSort(int Array[],int size)
{
	int i , j , temp = 0;
	for (i = 0 ; i < size ; i++)
	{
		for(j = 0 ; j < size-i-1 ;j++)
		{
			if (Array[j] > Array[j+1])
			{
				temp = Array[j];
				Array[j] = Array[j+1];
				Array[j+1] = temp;
			}
		}
	}
	printf("** SORTED ARRAY OF BUBBLE SORT**\n");	
	for(i = 0 ; i < size ; i++)    
		printf("%d\n",Array[i]);

}
