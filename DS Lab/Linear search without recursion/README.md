#AIM : 
To write a program using non recursive functions that perform the linear searching operations for a key value in a given list of integers.

##EXPLANATION:
The linearsearch without recursive should be straightforward.It loops through the array starting from the beginning until it finds an element in the array.If the val argument was 20 the function would return -1.

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
		printf("search is sucessful at position %d",position + 1);
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


