#include<stdio.h>
int main(){
	int a[2][3][3];
	int i;
	int j;
	int k;
	for(i=0;i<1;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
			printf("enter the value of i j k");
			scanf("%d",&a[i][j][k]);
		}
	}
	printf("\n");
	}for(i=0;i<1;i++){
		for(j=0;j<3;j++){
			for(k=0;k<3;k++){
				printf("%d",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
