#include<stdio.h>
void main(){
	int i,j,r,c,sum=0;
	printf("Enter the Array's Row: ");
	scanf("%d",&r);
	printf("\nEnter the Array's Column: ");
	scanf("%d",&c);
	int a[r][c];
	printf("\nEnter A's elements\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Element A[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		sum+=a[i][i];
	}
	printf("\nThe Sum of The Diagonal Elements of Array is :%d",sum);
	
}
