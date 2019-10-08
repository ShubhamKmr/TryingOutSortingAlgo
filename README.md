# TryingOutSortingAlgo
Sorting algo are classified on the basis of below categories : 
1 - Time complexity
2 - Space Complexity
3 - Stability
4 - Internal or External Sort 
5 - Recursive or Non recursive
-----------------------------------------------------------------------
1) Selection Sort : - It is an inplace unstable sorting algorithm.It is unstable because of the swap at last which might change the order of relative position of the number.Here the major idea is to select any min no index for first time then in every iteration the min number found is placed in the ith place.The ith place is it original place where the no should belong.
Time Complexity : 
Best - O(n^2)  Worst - O(n^2)  Avg - O(n^2)
Space Complexity :
O(1)

2) Bubble Sort : - It is an inplace stable sorting algorithm in which in every ith iteration the largest element is set in its original place.We can detect whether an array is already sorted in O(n) time complexity.
Time Complexity : 
Best - O(n)(When the input is sorted in increasing order) Worst - O(n^2) ( When array is present in decreasing order ) Avg - O(n^2)
Space Complexity
O(1)

3) Insertion Sort : - It is an inplace stable sorting algo.Here the major idea is to select second element in the array and compare it with the all the element present in it left side.If the element in left of selected element is less.Than make a right shift of the element present of left of select element.Again comparing with left of left element and repeating the same process.Unlike in Selection and Bubble sort in One pass one element is set to its write place , in insertion sort it might or might not happen.Insertion sort has less no of swaps than bubble sort.Insertion sort performs well than other sorting algo for smalll size of array.For bigger value of array size it is inefficient.
Time Complexity :
Best Case : O(n) (When array is already sorted in increasing order) Worst Case : O(n^2) (When array is present in decreasing order ) Avg Case : O(n^2)
Space Complexity :
O(1)

4) Merge Sort : - It is a outplace , stable sorting algo which uses the property of divide and conquor.It uses the concept of recursion. Here the idea is to combine the two Left and Right sorted array of size nearly equal to half of size of given unsorted array to form a sorted array.
Time Complexity : 
Best Case : O(nlogn) Worst Case : O(nlogn) Avg Case : O(nlogn)
Space Complexity :
O(n)

5) Quick Sort :- It is a inplace , unstable sorting algo which uses the property of divide and conquor and recursion.Here the major idea is to select an element in array as pivot and put it in its belonging place ie all element lesser should be left of pivot and all element greater should be right of the pivot further 2 recursive calls divde the problem on the basis of pivot index found.Quick sort perform well when the array is divded in equal half.if the element are already sorted than array can't be further divide in 2 equal half.Hence it is the worst case time complexity scenario.So, to divide the array in equal or nearly equal half a trick is used random no in array is swapped with the pivot to get nearly two equal half in already sorted array.
Time Complexity :
Best Case : O(nlogn) Worst Case : O(n^2) ( which can be minized by Randomized Partitioning ) Avg Case : O(nlogn)
Space Complexity:
Avg Case : O(logn) Worst Case : O(n) ( which can be minimized by Randomized Partitioning )
Hence Randomized Quick Sort is partically used over other algo in bulid-in sorting function in languages.Because of O(nlogn) and O(logn) as their worst case time and space complexity respectively.
