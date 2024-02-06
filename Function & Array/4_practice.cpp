/* 4. WAP to find factorial using recursion.*/

#include<stdio.h>
int factorial(int n);
int main(){
	int i, n, sum =1;
	
	printf("Which Factorical do you count:");
	scanf("%d", &n);
	
	return factorial(n);
}

int factorial(int n){
	int i , sum=1;
	
	for(i=n;i>=1;i--){
		
		sum = sum * i;
	}
	
	
	printf("factoral num is :%d",sum);
}

