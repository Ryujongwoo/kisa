#include <stdio.h>

/*
struct insa {
	char name[10];
	int age;
};
*/

void main() {

//	struct insa a[] = { "Kim", 28, "Lee", 38, "Park", 42, "Choi", 31 };
	struct insa {
		char name[10];
		int age;
	} a[] = { "Kim", 28, "Lee", 38, "Park", 42, "Choi", 31 };
	struct insa* p;

	p = a; // p = &a[0];
	p++;

	printf("%s\n", p->name); // Lee
	printf("%d\n", p->age); // 38

}