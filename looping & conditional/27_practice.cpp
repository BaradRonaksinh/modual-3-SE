/* 27. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n.*/

#include<stdio.h>
int main()
{
    double i, n,sum=0;
    n=5;
    for(i=1;i<=n;i++)
    {
        if ((int)i%2==1){
        	sum+=i/(i+1);
		}else{
        	sum-=i/(i+1);
		}     
    }
    printf("Sum: %lf",sum);
    return 0;
}


//#include<stdio.h>
//
//int main(){
//	int i, j=1, n, div=0, sum=0,a=0,totalSum=0;
//	
//	printf("Enter N number:");
//	scanf("%d", &n);
//	
//	for(i=1;i<=n;i++){
//		j++,j<=n;
//		div = i/j;
//		a++;
//		if(a % 2 == 0){
//			sum += div; 
//			totalSum = sum;
//		}else{
//			sum -= div;
//			totalSum = sum;
//		}
//	}
//	
//	printf("total value of sum is :%d", totalSum);
//}
