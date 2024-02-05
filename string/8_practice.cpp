/*8. Write a program in C to count the total number of vowels or consonants in a
string.*/

#include<stdio.h>

int main(){
	int i,Vcount=0,C_count=0;
	char str[100], vowels[5]={'a','e','i','o','u'}, consonants[21]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
	
	printf("String:");
	gets(str);
	
	for(i=0;str[i] != '\0';i++){
		if(str[i]==vowels[5]){
			Vcount++;
		} 
		if(str[i]==consonants[21]){
			C_count++;
		}
	}
	printf("\nTotal Vowels in string is :%d",Vcount);
	
	printf("\nTotal Consonats in string is :%d",C_count);
}
