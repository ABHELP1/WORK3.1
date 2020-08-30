#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int n, n2,n3,s,s2,s3;
int max = 3;
int DV;
int main() {
	printf("Enter first number :");
	scanf("%d", &s);
	printf("Enter secound number :");
	scanf("%d", &s2);
	printf("Enter Third number :");
	scanf("%d", &s3);
	n = abs(s);
	n2 = abs(s2);
	n3 = abs(s3);

	if (n > n2 && n > n3) {
		DV = n;
	}
	else if (n2 > n && n > n3) {
		DV = n2;
	}
	else if (n3 > n && n3 > n2) {
		DV = n3;
	}
	else {
		printf("Greatest common divisor = %d", n);
	}
	while (max == 3) {
		if (n % DV == 0 && n2 % DV == 0 && n3 % DV == 0) {
			max = DV;

		}
		else {

			DV = DV - 1;
		}
	}
	printf("Greatest common divisor = %d", max);
}