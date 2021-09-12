#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void theMost() {
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	printf("The most valuable number is ");
	if (n1 > n2) {
		printf("%d", n1);
	}
	else if (n2 > n1) {
		printf("%d", n2);
	}
	else printf("Equal");
}
int main() {
	printf("Enter number: ");
	theMost();
	return 0;
}