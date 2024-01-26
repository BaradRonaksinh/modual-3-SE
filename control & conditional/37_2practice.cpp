/* 37. WAP to show
ii. Vowel or Consonant using switch case*/

#include<stdio.h>
int main(){
	int i;
	printf("enter alphabet to check:");
	scanf("%d", &i);
	
	switch(i){
		case 1:
			i == 'a';
			printf("a is a Vowel");
			break;
		case 2:
			i == 'e';
			printf("e is a Vowel");
			break;
		case 3:
			i == 'i';
			printf("i is a Vowel");
			break;
		case 4:
			i == 'o';
			printf("o is a Vowel");
			break;
		case 5:
			i == 'u';
			printf("u is a Vowel");
			break;
		default:
			printf("%d is a Consonant", i);
	}
}// baki he...
