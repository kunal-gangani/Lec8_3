#include<stdio.h>
void main(){
		int i,j,sum=0;
		int a[5][5];
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				printf("Enter the Elements of A[%d][%d] : ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
				if(i==0 || j==0 || i==4 || j==4){
						printf("%d ",a[i][j]);
						sum+=a[i][j];	
				}
			}
			printf("\n");
		}
		printf("\nThe Sum of All the Boundary Elements of the Array are : %d ",sum);
}
