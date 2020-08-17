#AIM : 
To write a program using non recursive functions that perform the linear searching operations for a key value in a given list of integers.

##EXPLANATION:
The linearsearch without recursive should be straightforward.It loops through the array starting from the beginning until it finds an element in the array.If the val argument was 20 the function would return -1.M:To find the position of key element using the linear search
* sequential search is used whenever the list is ordered.
* generally we use techniques only for small lists or lists that are not searched often.
* In the sequential search, we start searching for the target from the beginning of the
list,and we continue until we find the target or untilwe are sure that it is not in the list.
* This gives us two possibilities:
either we find it or
we reach the end of the list
#step by step procedure 
=&gt; we have the array elements[12,61,33,92,36,3,29,98,54,60]
=&gt; for the output 1 the key element we need to search is 36
=&gt; in tne iterative process we check if the element and the key value are same
=&gt; in iteration 1 a[0] = 12 key is not equal to 66,so the case fails
=&gt; in iteration 2 a[1] = 61 key is not equal to 66,so the case fails
=&gt; in iteration 3 a[2] = 33 key is not equal to 66,so the case fails
=&gt; similarly iteration continues until the element and key value are same
=&gt; in iteration 5 a[5] = 36 is equal to 36 so case passed
=&gt; in the function the iteration takes place and the element with index printed to the output
=&gt; if all the iteration cases falis the it returns element not found to the output
  
#include<stdio.h>
int main()
{
	int a[10] = {12,61,33,92,36,3,29,98,54,60};
	int i,element;
	printf("key element:");
	scanf("%d",&element);
	for(i=0;i<10;i++)
	{
		if(element == a[i])
		{
			printf("element is found at %d position",i);
			break;		
		}}
		if(i>9)
		{
			printf("element is not found");
		}
		
return 0;
}
From the above code
ELEMENTS:a[0]=12,a[1]=61,a[2]=33,a[3]=92,a[4]=36,a[5]=3,a[6]=29,a[7]=98,a[8]=54,a[9]=60
KEY ELEMENTS:36,100
case 1: 36
ITERATION 1:
                     a[0] = 12
                     key ! = a[0]
ITERATION 2:
                     a[1] = 61
                     key ! = a[1]
ITERATION 3:
                     a[2] = 33
                     key ! = a[2]
ITERATION 4:
                     a[3] = 92
                     key ! = a[3]
ITERATION 5:
                     a[4] = 36
                     key ! = a[4]
key element is found at index ‘4’
case 2:

ELEMENT 100:
ITERATION 1:
                         a[0] = 12
                         key ! = a[0]
ITERATION 2:
                         a[1] = 61
                         key ! = a[1]
ITERATION 3:
                         a[2] = 33
                         key ! = a[2]
ITERATION 4:
                        a[3] = 92
                        key ! = a[3]
ITERATION 5:
                       a[4] = 36
                     key! = a[4]
ITERATION 6:
                     a[5] = 3
                     key ! = a[5]
ITERATION 7:
                    a[6] = 29
                    key ! = a[6]
ITERATION 8:
                    a[7] = 98
                    key ! = a[7
ITERATION 9:
                    a[8] = 54
                    key ! = a[8]
ITERATION 10:   
                    a[9] = 60
                    key ! = a[9]
key element 100 is not found



