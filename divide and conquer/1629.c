#include<stdio.h>

long long divide(long long, long long, long long);

int main() {
	long long A = 0, B = 0, C = 0;

	scanf("%lld %lld %lld", &A, &B, &C);

	printf("%lld", divide(A, B, C));
	return 0;
}

long long divide(long long A, long long B, long long C) {
	long long temp = 0;

	if (B == 0)
		return 1;
	temp = divide(A, B / 2, C);
	if (B % 2 == 0)
		return (temp * temp) % C;
	else
		return ((temp * temp) % C * A) % C;
}