/*6. Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/

#include<stdio.h>

int main(){
	char sent[100];
	int i, alpha=65,smallAlpha=97, digit=48, spec=91, alphabet=0, Digits=0, Special=0;
	
	printf("Enter your sentences:");
	gets(sent);
	
	for(i=0;sent[i]!='\0';i++){
		if((alpha >=65 && alpha<=90)||(smallAlpha>=97 && smallAlpha<=122)){
			
			alphabet++;
			
		}
		
		if(digit>=48 &&digit<=57){
		
			Digits++;
			
		}
		
		if(spec>=33 && spec<=38){
			
			Special++;
		}
	}
	
	printf("\nTotal alphabets is :%d", alphabet);
	printf("\nTotal Digit is :%d", Digits);
	printf("\nTotal Special charater is :%d", Special);
	
	
}//baki he... 
