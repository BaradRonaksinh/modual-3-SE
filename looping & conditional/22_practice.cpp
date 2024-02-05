/* 22. Accept 3 numbers from user using while loop and check each numbers
palindrome.*/

#include<stdio.h>

int main(){
	int n, rev, digit=0, ans;
	
	printf("Enter the number:");
	scanf("%d", &n);
	
	ans=n;
	while(n != 0){
		digit = n % 10;
		rev = (rev*10) + digit;
		n = n/10;
	}

	if(ans != rev){
		printf(" %d is not a Palindrom number", ans);
	}else 	{
		printf("%d1 is a Palindrom number", ans);
	}
	
}
//	printf("The Reverse Number is : %d\n", n);
//	printf("The Reverse Number is : %d\n", rev);
	
	
//	if(n == ans){
//		printf("%d is a Palindrom number", n);
//	}else{
//		printf("%d is not a Palindrom number",n);
//	}
//baki he...
