#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int x[3], sum=0;
	for (int i = 0; i < 3; i++) {
		printf("number %d : ", i+1);
		scanf("%d", &x[i]);
		sum += x[i];
		for (int j = 1; j <= x[i]; j++) {
			printf("|");
		}
		printf("\n");
	}
	printf("result is %d\n", sum);
	for (int z = 1; z <= sum; z++) {
		printf("|");
	}
	return 0;
} 

