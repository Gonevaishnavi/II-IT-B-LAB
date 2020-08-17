#AIM:
To write a program using recursive functions that perform the linear search operations for a key value in a given list of integers.

##EXPLANATION:
The linearsearch using recursion method works backwards from the end of the array to the start.Both linear search solutions return the same value and posses the same Big O time complexity of O(n).
 • If the array is not sorted ,linear search is the only solution.
• If the list is sorted , we can use a more efficient algorithm called
the binary search.
• We should use a binary search whenever the list starts to become large.
• The binary search starts by testing the data in the element at the middle of the list.
• This determines if the target is in first half or second half of the list.
• If it is in first half , we do not need to check the second half.
• If it is in second half , we do not need to check the first half.
• In other words ,either way we eliminate half the list from further
consideration.
• We repeat this process until we find the target or satisfy ourselves
that it is not in the list.
• To find the middle of the list we three variables,
one to identify the beginning of the list(first)
one to identify the beginning of the list(mid)
one to identify the beginning of the list(last)
mid=( first + last )/2
1
# step by step procedure
=&gt; first we have to sort the array, after sorting we have array
=&gt; array[12,61,33,92,36,3,29,98,54,60]
=&gt; for output 1 the keyvalue we need to search is 12
=&gt; for output 2 the keyvalue we need to search is 92
=&gt; for output 3 the keyvalue we need to search is 33
=&gt; by using loops and conditions we can obtain the output
=&gt; first we find the mid value ,ie; mid= low+high/2
=&gt; if keyvalue is less then mid value ,we use mid-1
=&gt; if keyvalue is greater then mid value ,we use mid+1
=&gt; at last in output we enter the element it to be found it gives its index or array value
=&gt; if the element is not in the list of the array its gives notfound or error
#include<stdio.h>
int ReLinearSearch(int [],int,int);
int main()
{
	int i,position,key;
	int a[10]= {12,61,33,92,36,3,29,98,54,60};
	scanf("%d",&key);
	position = ReLinearSearch(a,10,key);
	if (position == -1){
		printf("search is unsucessful");
	}
	else{
		printf("search is sucessful at index %d\n", position);
	}
	return 0;
}
int ReLinearSearch(int a[],int n,int key)
{
	if (n > 0){
		if(a[n - 1] == key){
			return n-1;
		}
		else{
			return ReLinearSearch(a,n-1,key);
		}
		
	}	
	return -1;
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
