/**/

#include<stdio.h>

int main(){
	int i, j, a=65, c;
	printf("Enter Line no:");
	scanf("%d", &c);
	
	for(i=1;i<=c;i++){
		for(j=1;j<=i;j++,a++){
			printf(" %c",a);
		}
		printf("\n");
	}
}


