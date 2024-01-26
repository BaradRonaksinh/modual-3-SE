/* 17. Calculate 5 numbers from user and calculate number of even and odd using
of while loop.*/

#include<stdio.h>
int main(){
	int n,c=1,on=0,en=0;
	printf("enter the number:");
	scanf("%d", &c);
	
	do{
		printf("Enter the number : %d",c);
		c % 2 == 0 ? en++ : on++;
	}while(c < 6);{
		printf("complete limit of Number");
	}
	//baki hee...
	
}
