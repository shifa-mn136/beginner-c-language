#include<stdio.h>
int main (){
	int a;
	int b;
	for(a=1;a<=4;a++){
		for(b=1;b<=4-a;b++){
			printf(" ");
		}
		for(b=2;b<=a;b++){
			printf(" *");
		}
		printf("\n");
	}
}
