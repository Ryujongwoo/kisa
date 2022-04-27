#include <stdio.h>

struct jsu {
	char nae[12];
	int os, db, hap, hhap;
};

void main() {

	struct jsu st[3] = {
		{"데이터1", 95, 88}, // &st[0] => p + 0, st[0] => *(p + 0)
		{"데이터2", 84, 91}, // &st[1] => p + 1, st[1] => *(p + 1)
		{"데이터3", 86, 75}  // &st[2] => p + 2, st[2] => *(p + 2)
	};
	struct jsu* p;
	// p = &st[0];
	p = st + 1;

	(p + 1)->hap = (p + 1)->os + (p + 2)->db;
	// printf("%d\n", (p + 1)->hap); // 159
	(p + 1)->hhap = (p + 1)->hap + p->os + p->db;
	// printf("%d\n", (p + 1)->hhap); // 342
	printf("%d", (p + 1)->hap + (p + 1)->hhap); // 501

}