/*5. WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice.*/

#include<stdio.h>
int main(){
	int i, j,num,temp=0, myA1[5], myA2[5], choice;
	//enter Arrays  A & B element..
	printf("Enter element of Array A:\n");
	for(i=0;i<5;i++){
		scanf("%d", &myA1[i]);
	}
	
	printf("Enter element of Array B:\n");
	for(i=0;i<5;i++){
		scanf("%d", &myA2[i]);
	}
	//print arrays...
//	for(i=0;i<5;i++){
//		printf("%d", &myA1[i]);
//	}
//	
//	for(i=0;i<5;i++){
//		printf("%d", &myA2[i]);
//	}
	
	//choices
	
	printf("\nEnter your Chocie:");
	scanf("%d", &choice);
	
	switch(choice){
		//Ascending
		case 1:
			for(i=0;i<5;i++){
				for(j=i;j<5;j++){
					temp=myA1[i];
					myA1[j]=myA1[i];
					myA1[i]=temp;
				}
				printf("%d ", myA1[i]);
			}
			
			for(i=0;i<5;i++){
				for(j=i;j<5;j++){
					temp=myA2[i];
					myA2[i]>myA2[j];
					myA2[i]=myA2[j];
					myA2[j]=temp;
				}
				printf("%d ", myA2[i]);
			}
			
			break;
			
		//Descending
		case 2:
			for(i=0;i<5;i++){
				for(j=i;j<5;j++){
					temp=myA1[j];
					myA1[j]<myA1[i];
					myA1[j]=myA1[i];
					myA1[i]=temp;
				}
				printf("%d ", myA1[j]);
			}
			
			break;
			
	}
	
}// Baki he...
