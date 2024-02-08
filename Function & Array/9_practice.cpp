/*9. WAP to show difference between Structure and Union.*/

#include<stdio.h>

struct student{
	int rollno;
	char grade;
	float per;
}s[3];

int main(){
	struct student s1,s2,s3;
	int i;
	for(i=0;i<3;i++){
		printf("\n roll no:");
		scanf("%d", &s[i].rollno);
		printf("\n per:");
		scanf("%f", &s[i].per);
		printf("\n grade :");
		scanf(" %c",&s[i].grade);	
	}
	
}
