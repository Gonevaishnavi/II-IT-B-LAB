#AIM:To write a program to search an element in an array by using binary search recursive method.

##DESCRIPTION:Binary search is used to find the position of an element in a sorted array.The array should be sorted prior to applying a binary search.
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
step by step procedure
 explaining each ouput
=&gt; first we have to sort the array, after sorting we have array
=&gt; array= [3,12,29,33,36,54,60,61,92,98]
=&gt; for output 1 the keyvalue we need to search is 12
=&gt; for output 2 the keyvalue we need to search is 92
=&gt; for output 3 the keyvalue we need to search is 33
=&gt; by using loops and conditions we can obtain the output
=&gt; first we find the mid value ,ie; mid= low+high/2
=&gt; if keyvalue is less then mid value ,we use mid-1
=&gt; if keyvalue is greater then mid value ,we use mid+1
=&gt; at last in output we enter the element it to be found it gives its index or array value
=&gt; if the element is not in the list of the array its gives notfound or error
1.Elements:a[0]=3,a[1]=12,a[2]=24,a[3]=33,a[4]=36,a[5]=54,a[6]=60,a[7]=61,a[8]=92,a[9]=98
2.key elements= 12,92,33
3. 1st key element = 12
4.Iteration 1:
       Low =  0,High = 9,Mid = 4

###STEP BY STEP PROCEDURE:
1.Elements:a[0]=3,a[1]=12,a[2]=24,a[3]=33,a[4]=36,a[5]=54,a[6]=60,a[7]=61,a[8]=92,a[9]=98
2.key elements= 12,92,33
 
#include<stdio.h>
int BinarySearch(int [],int,int,int);
int main()
{
	int i,key,position;
	int a[10] = {3,12,29,33,36,54,60,61,92,98};
	scanf("%d",&key);
	position = BinarySearch(a,0,10,key);
	if (position == -1){
		printf("search is unsucessfull");	
	}
	else{
		printf("search is sucessfull at index %d\n",position);
	}
	return 0;
}
int BinarySearch(int a[],int first,int last,int key)
{
	int mid;
	while(first <= last)
	{
		mid = (first + last) / 2;
		if (a[mid] == key)
		    return mid;
		else if (key > a[mid])
		    first = mid + 1;
		else
			last = mid  - 1;    
	}
    return -1;
}
from the above procedure
1.Elements:a[0]=3,a[1]=12,a[2]=24,a[3]=33,a[4]=36,a[5]=54,a[6]=60,a[7]=61,a[8]=92,a[9]=98
2.key elements= 12,92,33
3. 1st key element = 12
4.Iteration 1:
       Low =  0,High = 9,Mid = 4
       a[4] = 36
       12 < a[4]
 Iteration 2:
       Low = 0,High = 4,Mid = 2
       a[2] = 29
       12< a[2]
 Iteration 3:
       Low = 0,High = 2,Mid = 1
       a[1] = 12
       12 = a[1]
Key element found at position ‘1’
5.Keyelement:92
Iteration 1:
  Low=0,High=9,Mid=4
a[4]=36
92>a[4]

Iteration 2:

Low=4,High=9,Low=6
a[6]=60
92>a[6]

Iteration 3:

Low=6,High=9,Mid-7
a[7]=61
key>a[7]

Iteration 4:

Low=7,High=9,Mid=8
a[8]=92
92=a[8]
Keyelement is at 8
6.key element = 33
Iteration 1
  Low=0,High=9,Mid=4
  a[4]=36
  33<a[4]
Iteration 2
  Low=0,High=4,Mid=2
  a[2]=29
  33>a[2]
Iteration 3
  Low=2,High=4,Mid=3
  a[3]=33
  key ==a[3]
element found at position 3
 
 
 


