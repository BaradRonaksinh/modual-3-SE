/*19. Pattern_ 5.*/

#include<stdio.h>
int main(){
	int i, j, n, a=65;
	scanf("%d", &n);
	
	for(i =1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%c",a);
			a++;
		}
		
		printf("\n");
	}//baki he.........
	
	
}
