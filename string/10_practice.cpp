/*10. Write a program in C to extract a substring from a given string.*/

#include<stdio.h>

int main(){
	char str[50], subStr[10];
	int i, length=1, choice;
	
	printf("Enter the String:\n");
	gets(str);
	
	printf("Enter your choice:\n");
	scanf("%d", &choice);
	
	
	for(i=0;i<=10;i++){
		subStr[10]=str[i];
		printf(" %s", str[i]);
	}
			
	
	
}
