#Aim of the experiment:
To perform selection  sort of an unsorted  array. 
Array: (1,2,6,8,4,3,5,9,7,10)
##Brief description of selection sort:
Selection sort is a simple sorting algorithm. This sorting algorithm is an in-place comparison-based algorithm in which the list is divided into two parts, the sorted part at the left end and the unsorted part at the right end. Initially, the sorted part is empty and the unsorted part is the entire list.
The smallest element is selected from the unsorted array and swapped with the leftmost element, and that element becomes a part of the sorted array. This process continues moving unsorted array boundary by one element to the right
###Step-by-step-procedure:
The selection sort algorithm is performed using the following steps...
 Select the first element of the list (i.e., Element at first position in the list).
 Compare the selected element with all the other elements in the list.
In every comparision, if any element is found smaller than the selected element (for Ascending order), then both are swapped.
             Repeat the same procedure with element in the next position in the list till the entire list is sorted.
Program:
#include <stdio.h>
void selection_sort(int* a);
int main()
{
    int i;
    int a[10];
    printf("pass 10 integers:\n");
    for(i=0; i<10;i++)
    scanf("%d",&a[i]);
    selection_sort(a);
    printf("Integers in sorted order:\n");
    for(i=0;i<10;i++)
    printf("%d  ", a[i]);
    return 0;
}
void selection_sort(int* a)
{
    int i, j, temp;
    for(i=1;i<=9;i++)
    {
       for(j=i+1; j<9; j++){
           if(a[i] > a[j]){
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
       } 
    }
    return;
}
 
Given input
  1	  2	  6	  8	  4	   3	  5	  9 	  7	 10


ITERATION 1:
Select the first position element in the list, compare it with all other elements in the list and whenever we found smaller element than the element at first position then swap these two elements
1, 2,6,8,4, 3,5,9,7,10
Here 1>2 
So its false so it does not swap
1, 2,6, 8, 4, 3, 5, 9, 7, 10
Here 1>6
So its false so it does not swap
1, 2, 6, 8, 4, 3, 5, 9, 7, 10
Here 1>8 
So it false so it does not swap
After the iteration 1 the array is
1, 2, 6, 8, 4, 3, 5, 9, 7, 10
ITERATION 2:
Select the first position element in the list, compare it with all other elements in the list and whenever we found smaller element than the element at first position then swap these two elements
1, 2,  6, 8, 4,3, 5, 9, 7, 10
Here  6>8 
So its true so it swaps 
After the iteration 2 the array
1, 2, 3, 8, 4, 6, 5, 9, 7, 10
ITERATION 3:
1, 2, 3, 8, 4, 6, 5, 9, 7, 10
Here 8>4
It is true so it swaps
After iteration 3 the array is 
1, 2, 3, 4, 8, 6, 5, 9, 7, 10
ITERATION 4:
1, 2, 3 ,4, 8, 6, 5, 9, 7, 10
Here 8>5
Its true so it swaps 
After  the iteration 4 the array is 
1, 2, 3, 4, 5, 6, 8, 9, 7, 10
ITERATION 5:
1, 2, 3, 4, 5, 6, 8, 9, 7, 10
Here 6>8
It is false so it does not swap
After the iteration 5 the array is
1, 2, 3, 4, 5, 6, 8, 9, 7, 10
ITERATION 6:
1, 2, 3, 4, 5, 6, 8, 9, 7, 10
Here 8>7
It is true so it swaps
After the iteration 6 the array is 
1, 2, 3, 4, 5, 6, 7, 9, 8, 10
ITERATION 7:
1, 2, 3, 4, 5, 6, 7, 9, 8, 10
Here 9>8
Its true so it swaps
After the iteration 7 the array is
1, 2, 3, 4, 5, 6, 7, 8, 9, 10
ITERATION 8:
1, 2, 3, 4, 5, 6, 7, 8, 9, 10
Here 9>10 is false 
So it does not swap
After the iteration 8 the array is 
1, 2, 3, 4, 5, 6, 7, 8, 9, 10
ITERATION 9:
1, 2, 3, 4, 5, 6, 7, 8, 9, 10

Expected output:
1, 2, 3, 4, 5, 6, 7, 8, 9, 10



