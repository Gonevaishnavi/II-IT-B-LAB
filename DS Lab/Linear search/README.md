#AIM:
To write a program using recursive functions that perform the linear search operations for a key value in a given list of integers.

##EXPLANATION:
The linearsearch using recursion method works backwards from the end of the array to the start.Both linear search solutions return the same value and posses the same Big O time complexity of O(n).

###STEP BY STEP PROCEDURE:
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
