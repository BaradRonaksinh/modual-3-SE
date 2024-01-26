/*19. Patterns _ 3*/

#include<stdio.h>
int main(){
	int i, j,k, n;
	printf("Enter No:\n");
	scanf("%d", &n);
	
	for(i =5; i>= n;i--){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		
		for(k = i-k;k>=j;k++){
			printf("*");
		}
		
		printf("\n");
	}
}
