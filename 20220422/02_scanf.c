#include <stdio.h>

void main() {

	// scanf("입력서식", &변수);
	// 배열의 이름은 그 배열이 메모리에 생성된 주소를 의미하므로 "&"를 붙이지 않아도 된다.

	// c++, java, python은 변수를 필요할 때 만들어 사용하면 되지만 c는 반드시 변수를 프로그램 상단에서
	// 선언하고 사용해야 한다.

	int i, j, k;
	// &: 이항으로 사용되면 비트간의 and 연산을 실행하고 단항으로 사용되면 기억장소가 메모리에 생성된 주소를
	// 얻어오는 번지 연산자로 사용된다.
	scanf("%d %d", &i, &j);

	printf("%d\n", i);
	printf("%d\n", &i);
	printf("%p\n", &i);

	k = i + j;
	printf("%d\n", k);
	printf("==============d\n");

	printf("%d\n", i);
	printf("%x\n", i);
	printf("%o\n", i);

}