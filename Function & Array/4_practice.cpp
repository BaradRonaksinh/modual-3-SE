/* 4. WAP to find factorial using recursion.*/

#include<stdio.h>
int factorial(int x);
int main(){
	int i, n, sum =1;
	
	printf("Which Factorical do you count:");
	scanf("%d", &n);
	
	for(i=n;i>=1;i--){
		
		sum = sum * i;
	}
	printf("%d", sum);
}


