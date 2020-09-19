# AIM OF THE EXPERIMENT:  Write a program that uses functions to perform the insertion sort.
##Brief description about insertion sort:
Insertion sort is a sorting algorithm in which the elements are transferred one at a time to the right position. In other words, an insertion sort helps in building the final sorted list, one item at a time, with the movement of higher-ranked elements. An insertion sort has the benefits of simplicity and low overhead.
In an insertion sort, the first element in the array is considered as sorted, even if it is an unsorted array. In an insertion sort, each element in the array is checked with the previous elements, resulting in a growing sorted output list. With each iteration, the sorting algorithm removes one element at a time and finds the appropriate location within the sorted array and inserts it there. The iteration continues until the whole list is sorted.
##Step-by-step procedure for the program:
#include<stdio.h>
int main()
{
int i, j, k, count, temp, a[100];

 

   printf("How many numbers u are going to enter?: ");
   scanf("%d",&count);

 

   printf("Enter %d elements: ", count);
   // This loop would store the input numbers in array
   for(i=0;i<count;i++)
      scanf("%d",&a[i]);

 

   // Implementation of insertion sort algorithm
   for(i=1;i<count;i++){
       for(k=0;k<count;k++)
      printf(" %d",a[k]);
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0)){
         a[j+1]=a[j];
         j=j-1;
      }
      a[j+1]=temp;
      printf("\n");
   }

 

   printf("Order of Sorted elements: ");
   for(i=0;i<count;i++)
      printf(" %d",a[i]);
     

 

   return 0;
}
 
Step 1 − If the element is the first one, it is already sorted.
Step 2 – Move to next element
Step 3 − Compare the current element with all elements in the sorted array
Step 4 – If the element in the sorted array is smaller than the current element, iterate to the next element. Otherwise, shift all the greater element in the array by one position towards the right
Step 5 − Insert the value at the correct position
Step 6 − Repeat until the complete list is sorted.
the given array is :1,7,3,4,9
for i = 7(2nd element) to 9 (last element)
i = 1. Since 7 is smaller than 9 it remains same
1,7,3,4,9
i = 2. Since 3 is smaller than 7, move 7 and insert 3 before 7
then the array is
1, 3,7,4,9
i = 3. 7 is greater than the 4 than the element 4 move and insert 4 before7 and then the four will compare with all the other elements
 then the array will be the 
1,3,4,7,9
Then final array elements after sorting the all elements 
1,3,4,7,9


