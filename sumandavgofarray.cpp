#include<stdio.h>
int main()
{
	int x;
	int A[5];
	int sum;
	int avg;
	
	for(int i=0;i<5;i++){
		printf("Enter a value:");
		scanf("%d",&x);
		A[i]=x;
	
	}
	for(int i=0;i<5;i++){
		sum=sum+A[i];
	}
	
	avg=sum/5;
	printf("Sum of all elements in the array is = %d \n", sum);
	printf("Avg of sum of this array is = %d \n", avg);
	
	
}
