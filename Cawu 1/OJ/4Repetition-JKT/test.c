#include <stdio.h>

int main(){
	int n,i,j,k;
	
	scanf("%d", &n);
	for(i = 1;i <= n;i++){
		for(j = i;j < n;j++){
			printf(" ");
		}
		for (k = 1;k <= i*2-1;k++){
			printf("*");
		}
		printf("\n");
	}
}
