#AIM : 
To write a program using non recursive functions that perform the linear searching operations for a key value in a given list of integers.

##EXPLANATION:
The linearsearch without recursive should be straightforward.It loops through the array starting from the beginning until it finds an element in the array.If the val argument was 20 the function would return -1.

###STEP BY STEP PROCEDURE
  
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



