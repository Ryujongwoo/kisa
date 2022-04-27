#include <stdio.h>

//	정보의 단위
//	bit => 4bit(nibble) => 8bit(byte) => word(HW(2byte), FW(4byte), DW(8byte)) => field(column) =>
//	record(논리, row, 의미있는 데이터 1건 => 구조체) => block(물리레코드, 입출력 단위) => 파일 => 데이터베이스
//	용량의 단위
//	bit => 4bit(nibble) => 8bit(byte) => KB(2의10승byte) => MB => GB => TB => PB => EB => ZB => YB

//	프로그램에서 실제 처리할 데이터는 단일 자료형으로 구성되지 않는다.
//	구조체(struct)란 여러 기본 자료형을 묶어서 프로그램에서 사용할 새로운 자료형을 만드는 것이다.
//	=> 사용자 정의 자료형 => 레코드 => 구조체 + 메소드 = 클래스

//	typedef를 쓰면 반드시 구조체 별명을 지정해야 한다.
//	struct 구조체이름 {
//		구조체를 구성하는 멤버 변수 선언; // 자바에서는 필드라 부른다.
//		...;
//	} [구조체별명];

//	프로그램에서 Jumsu라고 코딩하면 typedef에서 정의한 대로 struct Score로 컴파일한다.
typedef struct Score {
	int no;
	char name[11];
	int c, java, python, total;
	double mean;
} Jumsu;

void main() {

	// 구조체 변수 선언 방법
	// C++ 컴파일러인 경우 struct를 생략해도 된다. => 확장명이 cpp인 경우
	// struct 구조체이름 구조체변수이름;
	// struct 구조체이름 구조체변수이름 = {초기치};
	// struct 구조체이름 구조체배열이름[인덱스];
	// struct 구조체이름* 구조체포인터변수이름;

	struct Score score1; // 구조체 변수 선언

	// 구조체 멤버 변수에 접근하는 방법
	// 구조체 변수나 배열에서 구조체 멤버 변수에 접근하려면 "."을 찍어서 접근한다.
	// 구조체 포인터 변수에서 구조체 멤버 변수에 접근하려면 "->"을 찍어서 접근한다.

	score1.no = 1;
	// score1.name = "홍길동"; // 에러
	strcpy(score1.name, "홍길동");
	score1.c = 100;
	score1.java = 100;
	score1.python = 99;
	score1.total = score1.c + score1.java + score1.python;
	// score1.mean = score1.total / 3;
	score1.mean = (double) score1.total / 3.;
	printf("%s님의 평균 점수는 %5.1f점 입니다.\n", score1.name, score1.mean);

	struct Score score2 = { 2, "임꺽정", 65, 71, 58 };
	score2.total = score2.c + score2.java + score2.python;
	score2.mean = (double)score2.total / 3.;
	printf("%s님의 평균 점수는 %5.1f점 입니다.\n", score2.name, score2.mean);

//	Jumsu를 컴파일러는 struct Score로 바꿔서 컴파일 한다.
	Jumsu score3 = { 3, "장길산", 88, 74, 86 };
	score3.total = score3.c + score3.java + score3.python;
	score3.mean = (double)score3.total / 3.;
	printf("%s님의 평균 점수는 %5.1f점 입니다.\n", score3.name, score3.mean);

//	struct Score* pScore;
	Jumsu* pScore = &score1;
	printf("%s님의 평균 점수는 %5.1f점 입니다.\n", pScore->name, pScore->mean);
	printf("%s님의 평균 점수는 %5.1f점 입니다.\n", (*(pScore + 0)).name, (*pScore).mean);

}