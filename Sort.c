#include <stdio.h>
#include <limits.h>
#define SIZE 11
#include <stdbool.h>
void SelectionSort(int Array[],int size);
void BubbleSort(int Array[],int size);
void InsertionSort(int Array[],int size);
void MergeSort(int Array[],int size);
void Merge(int LeftArray[] , int LeftArraySize ,int RightArray[] ,int RightArraySize, int Array[]);
int Partition(int Array[],int left , int right);
void QuickSort(int Array[],int left,int right);
int BinarySearch(int Array[],int left,int right,int no);
int main ()
{
	int  i = 0;
	int Array1[SIZE] = {-2,0,-10,78,34,4,-56,99,34,12,-70};
	SelectionSort(Array1,SIZE);
	int Array2[SIZE] = {1,-3,10,-3,36,8,-56,100,-1,12,8};
	BubbleSort(Array2,SIZE);
	int Array3[SIZE] = {-7,0,-67,7,90,-99,-5,-99,3,100,-100};
	InsertionSort(Array3,SIZE);
	int Array4[SIZE] = {8,0,-10,-10,34,64,-6,0,-94,2,23};
	MergeSort(Array4,SIZE);
	printf("\n** SORTED ARRAY OF MERGE SORT**\n");	
	for(i = 0 ; i < SIZE ; i++)    
		printf("%d\t",Array4[i]);
	int Array5[SIZE] = {-100,99,-10,0,0,64,1,9,-94,2,11};
	QuickSort(Array5,0,SIZE-1);
	printf("\n** SORTED ARRAY OF QUICK SORT **\n");	
	for(i = 0 ; i < SIZE ; i++)    
		printf("%d\t",Array5[i]);
	int index = BinarySearch(Array5,0,SIZE-1,0);
	if (index != -1 )printf("Number found in Array is at index %d\n",index);
	else printf("Number Not found :-(\n"); 
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
		printf("%d\t",Array[i]);
}

void BubbleSort(int Array[],int size)
{
	int i , j , temp = 0;
	int noSwap = true;/** To detect if the array is already sorted **/
	for (i = 0 ; i < size ; i++)
	{
		for(j = 0 ; j < size-i-1 ;j++)
		{
			if (Array[j] > Array[j+1])
			{
				temp = Array[j];
				Array[j] = Array[j+1];
				Array[j+1] = temp;
				noSwap = false;
			}
		}
		
		if (noSwap)
		{ 
			printf("Array is already sorted!!");
			break;
		}
		
	}
	printf("\n** SORTED ARRAY OF BUBBLE SORT**\n");	
	for(i = 0 ; i < size ; i++)    
		printf("%d\t",Array[i]);

}


void InsertionSort(int Array[] , int size)
{
	int i , j ,place , key = 0;
	for (i = 1 ; i < size ; i++)
	{
		key = Array[i];
		place = i;
		j = i-1;
		while(key < Array[j] && j >= 0)
		{

			Array[j+1] = Array[j];
			place = j;
                        j--;
		}
		Array[place] = key;
	}

	printf("\n** SORTED ARRAY OF INSERTION SORT**\n");	
	for(i = 0 ; i < size ; i++)    
		printf("%d\t",Array[i]);
}

void MergeSort(int Array[],int size)
{	
	int i , j , mid = 0;
	if (size < 2)return;
	else
	{
		mid = size/2;
		
		int LArray[mid];int RArray[size - mid];
		for (i = 0 ; i < mid ; i++)LArray[i] = Array[i];
		for (j = mid ; j < size ;j++)RArray[j-mid] = Array[j]; 
		MergeSort(LArray,mid);
		MergeSort(RArray,size-mid);
		Merge(LArray,mid,RArray,size-mid,Array);         
	}
}

void Merge(int LSortedArray[] ,int LeftArraySize ,int RSortedArray[] ,int RightArraySize , int Array[])
{
	int i , j , k;
	i = j = k = 0;
	while (LeftArraySize > i && RightArraySize > j)
	{
		if (LSortedArray[i] < RSortedArray[j] )
		{
			Array[k++] = LSortedArray[i++];
		}
		else
		{
			Array[k++]  = RSortedArray[j++];
		}
	}
	while (i != LeftArraySize)
	{
		Array[k++] = LSortedArray[i++];
	}
	while (j != RightArraySize)
	{
		Array[k++] = RSortedArray[j++];
	}
}

int Partition(int Array[],int left , int right)
{
	int i , pivot, temp ,pindex;
	pivot = Array[right];
	pindex = left;
	for (i = left ; i < right ; i++)
	{
		if (Array[i] <= pivot)
		{
			temp = Array[i];
			Array[i] = Array[pindex];
			Array[pindex] = temp;
			pindex++;	
		}
	}
	temp = Array[right];
	Array[right] = Array[pindex];
	Array[pindex] = temp;

	return pindex; 
}

void QuickSort(int Array[],int left,int right)
{

	if (left < right)
	{
		int pindex = Partition(Array,left,right);
		QuickSort(Array,left,pindex -1);
		QuickSort(Array,pindex + 1,right);
	}			
}

int BinarySearch(int Array[],int left,int right,int no)
{
	if (left <= right)
	{
		int mid =  left + (right - left)/2;
		if (Array[mid] == no) return mid;
		else if (no < Array[mid])BinarySearch(Array,left,mid-1,no);
		else if (no > Array[mid])BinarySearch(Array,mid+1,right,no); 
	}
	else return -1;
}
