/* 12.WAP to find maximum number among 3 numbers using ternary operator. */

#include<stdio.h>

int main(){
	int a, b, c;
	
	printf("enter value of A:");
	scanf("%d", &a);
	
	printf("enter value of B:");
	scanf("%d", &b);
	
	printf("enter value of C:");
	scanf("%d", &c);
	
	a<b<c && b<a<c ?
	printf("\nC is maximum number") :printf("\nC is minimum number");
	
	
	a<c<b && c<a<b ?
	printf("\nB is maximum number"): printf("\nB is minimum number");
	
	c<b<a && b<c<a ?
	printf("\nA is maximum number") : printf("\nA is minimum number"); 
	
	//baki he mere dost.... with Q.13
}
