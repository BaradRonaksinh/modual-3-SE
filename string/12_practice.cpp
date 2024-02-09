/*12.Write a program in C to find the number of times a given word 'is' appears in
the given string.*/

#include<stdio.h>
#include<string.h>

int main(){
	char str[50], find[2]={'is'};
	int i,count=0;
	
	printf("Enter the String \n :");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[]=find[2]){
			count++;
		}
	}
	
	printf("total use of 'is' :%d", count);
	
}//baki he...
