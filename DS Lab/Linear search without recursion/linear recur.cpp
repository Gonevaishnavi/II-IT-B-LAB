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


