#include <stdio.h>

//	1 + 1 + 2 + 3 + 5 + 8 + 13 + 21 + 34
int Fibonacci(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return Fibonacci(n - 2) + Fibonacci(n - 1);
	}
}

void main() {

	int i = 0;
	for (i = 0; i < 6; i++) {
		printf("i = %d, %2d\n", i, Fibonacci(i));
	}

//	Fibonacci(0) => 0
//	================================================================================
//	Fibonacci(1) => 1
//	================================================================================
//	Fibonacci(2)
//	Fibonacci(0) + Fibonacci(1) => 0 + 1 => 1
//	================================================================================
//	Fibonacci(3)
//	Fibonacci(1) + Fibonacci(2)
//	1 + Fibonacci(0) + Fibonacci(1) => 1 + 0 + 1 => 2
// 	================================================================================
//	Fibonacci(4)
//	Fibonacci(2) + Fibonacci(3)
//	(Fibonacci(0) + Fibonacci(1)) + (Fibonacci(1) + Fibonacci(2))
//	(0 + 1) + (1 + Fibonacci(0) + Fibonacci(1)) => 0 + 1 + 1 + 0 + 1 => 3
// 	================================================================================
//	Fibonacci(5)
//	Fibonacci(3) + Fibonacci(4)
//	(Fibonacci(1) + Fibonacci(2)) + (Fibonacci(2) + Fibonacci(3))
//	(1 + Fibonacci(0) + Fibonacci(1)) + (Fibonacci(0) + Fibonacci(1) + Fibonacci(1) + Fibonacci(2))
//	(1 + 0 + 1) + (0 + 1 + 1 + Fibonacci(0) + Fibonacci(1)) => 1 + 0 + 1 + 0 + 1 + 1 + 0 + 1 => 5

}