#include<stdio.h>
int main()
{
	int a[10] = {12,61,33,92,36,3,29,98,54,60};
	int element,i=0,n=9,mid;
	printf("key element:");
	scanf("%d",&element);
	while(i <= n)
	{
		mid = i+n/2;
		if(element < a[mid])
	{
		n = mid - 1;
	}
	else if (element > a[mid])
	{
		i = mid + 1;
    }
    else if (element == a[mid])
	{
		printf("element is found at %d",mid);
		break;
	}}
	if(i>n)
	{
		printf("element is not found");
	}
	return 0;	
}
