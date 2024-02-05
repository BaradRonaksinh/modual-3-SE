/*5. WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice.*/

#include<stdio.h>
int main(){
	int i, j,num, myA1[5], myA2[5], choice;
	//enter Arrays element..
	printf("Enter element of Array A:\n");
	for(i=0;i<5;i++){
		scanf("%d", &myA1[i]);
	}
	
	printf("Enter element of Array B:\n");
	for(i=0;i<5;i++){
		scanf("%d", &myA2[i]);
	}
	//print arrays...
	printf("Array A is:");
	for(i=0;i<5;i++){
		num = myA1[0];
		if(myA1[0] < myA1[i+1]){
			num = myA1[i];
			myA1[i] = num;
		}
		printf(" %d", myA1[i]);	
	}
	printf("\nArray B is:");
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			num = myA2[0];
			if(myA1[j] < myA1[i]){
			num = myA1[i];
			myA1[i] = num;
			myA1[j] = myA1[i];
			}	
		}
		
		printf(" %d", myA1[i]);
	}
	
//	switch(choice){
//		case 1:
//			
//	}
	
}// Baki he...
