#include <stdio.h>

void main() {

	int i = 10, j = 10, k = 30;
	i /= j; // i = i / j�� ���� �ǹ̷� ���ȴ�. i = 1
	j -= i; // j = j - i�� ���� �ǹ̷� ���ȴ�. j = 9
	k %= j; // k = k % j�� ���� �ǹ̷� ���ȴ�. k = 3
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

	// ���� �տ��� "0"���� �����ϸ� 8������ �ǹ��ϰ� "0x"�� �����ϸ� 16������ �ǹ��Ѵ�.
	int jjj = 024, kkk = 24, lll = 0x24, hap;
	hap = jjj + kkk + lll;
	printf("%d, %d, %d, %d\n", jjj, kkk, lll, hap);
	printf("====================================\n");

	int iiii = 5, jjjj = 4, kkkk = 1, llll, mmmm;
	// c�� 0�� ������ ������ ����ϰ� 0�� �ƴ� ������ ��� ���ڴ� ������ ����Ѵ�.
	llll = iiii > 5 || jjjj != 0; // �� => 1
	mmmm = jjjj <= 4 && kkkk < 1; // ���� => 0
	printf("%d, %d\n", llll, mmmm);
	printf("====================================\n");

	printf("%d, %d, %d\n", 3, !3, !!3); // 3, 0, 1
	printf("====================================\n");

	int a1 = 5, b1 = 10, c1 = 15, d1 = 30, result1;
	result1 = a1 * 3 + b1 > d1 || c1 - b1 / a1 <= d1 && 1;
	printf("%d\n", result1);

}