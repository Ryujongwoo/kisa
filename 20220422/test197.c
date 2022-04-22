#include <stdio.h>

void main() {

	int i = 10, j = 10, k = 30;
	i /= j; // i = i / j와 같은 의미로 사용된다. i = 1
	j -= i; // j = j - i와 같은 의미로 사용된다. j = 9
	k %= j; // k = k % j와 같은 의미로 사용된다. k = 3
	printf("%d, %d, %d\n", i, j, k);
	printf("====================================\n");

	int result, a = 100, b = 200, c = 300;
	result = a > b ? b++ : --c;
	printf("%d %d %d %d\n", result, a, b, c);
	printf("====================================\n");

	int ii, jj;
	scanf("%o#%x", &ii, &jj);
	printf("%d %d\n", ii, jj);
	printf("====================================\n");

	// 숫자 앞에가 "0"으로 시작하면 8진수를 의미하고 "0x"로 시작하면 16진수를 의미한다.
	int jjj = 024, kkk = 24, lll = 0x24, hap;
	hap = jjj + kkk + lll;
	printf("%d, %d, %d, %d\n", jjj, kkk, lll, hap);
	printf("====================================\n");

	int iiii = 5, jjjj = 4, kkkk = 1, llll, mmmm;
	// c는 0은 무조건 거짓을 취급하고 0이 아닌 나머지 모든 숫자는 참으로 취급한다.
	llll = iiii > 5 || jjjj != 0; // 참 => 1
	mmmm = jjjj <= 4 && kkkk < 1; // 거짓 => 0
	printf("%d, %d\n", llll, mmmm);
	printf("====================================\n");

	printf("%d, %d, %d\n", 3, !3, !!3); // 3, 0, 1
	printf("====================================\n");

	int a1 = 5, b1 = 10, c1 = 15, d1 = 30, result1;
	result1 = a1 * 3 + b1 > d1 || c1 - b1 / a1 <= d1 && 1;
	printf("%d\n", result1);

}