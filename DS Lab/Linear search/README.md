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

