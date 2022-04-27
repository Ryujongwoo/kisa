#include <stdio.h>

//	������ ����
//	bit => 4bit(nibble) => 8bit(byte) => word(HW(2byte), FW(4byte), DW(8byte)) => field(column) =>
//	record(��, row, �ǹ��ִ� ������ 1�� => ����ü) => block(�������ڵ�, ����� ����) => ���� => �����ͺ��̽�
//	�뷮�� ����
//	bit => 4bit(nibble) => 8bit(byte) => KB(2��10��byte) => MB => GB => TB => PB => EB => ZB => YB

//	���α׷����� ���� ó���� �����ʹ� ���� �ڷ������� �������� �ʴ´�.
//	����ü(struct)�� ���� �⺻ �ڷ����� ��� ���α׷����� ����� ���ο� �ڷ����� ����� ���̴�.
//	=> ����� ���� �ڷ��� => ���ڵ� => ����ü + �޼ҵ� = Ŭ����

//	typedef�� ���� �ݵ�� ����ü ������ �����ؾ� �Ѵ�.
//	struct ����ü�̸� {
//		����ü�� �����ϴ� ��� ���� ����; // �ڹٿ����� �ʵ�� �θ���.
//		...;
//	} [����ü����];

//	���α׷����� Jumsu��� �ڵ��ϸ� typedef���� ������ ��� struct Score�� �������Ѵ�.
typedef struct Score {
	int no;
	char name[11];
	int c, java, python, total;
	double mean;
} Jumsu;

void main() {

	// ����ü ���� ���� ���
	// C++ �����Ϸ��� ��� struct�� �����ص� �ȴ�. => Ȯ����� cpp�� ���
	// struct ����ü�̸� ����ü�����̸�;
	// struct ����ü�̸� ����ü�����̸� = {�ʱ�ġ};
	// struct ����ü�̸� ����ü�迭�̸�[�ε���];
	// struct ����ü�̸�* ����ü�����ͺ����̸�;

	struct Score score1; // ����ü ���� ����

	// ����ü ��� ������ �����ϴ� ���
	// ����ü ������ �迭���� ����ü ��� ������ �����Ϸ��� "."�� �� �����Ѵ�.
	// ����ü ������ �������� ����ü ��� ������ �����Ϸ��� "->"�� �� �����Ѵ�.

	score1.no = 1;
	// score1.name = "ȫ�浿"; // ����
	strcpy(score1.name, "ȫ�浿");
	score1.c = 100;
	score1.java = 100;
	score1.python = 99;
	score1.total = score1.c + score1.java + score1.python;
	// score1.mean = score1.total / 3;
	score1.mean = (double) score1.total / 3.;
	printf("%s���� ��� ������ %5.1f�� �Դϴ�.\n", score1.name, score1.mean);

	struct Score score2 = { 2, "�Ӳ���", 65, 71, 58 };
	score2.total = score2.c + score2.java + score2.python;
	score2.mean = (double)score2.total / 3.;
	printf("%s���� ��� ������ %5.1f�� �Դϴ�.\n", score2.name, score2.mean);

//	Jumsu�� �����Ϸ��� struct Score�� �ٲ㼭 ������ �Ѵ�.
	Jumsu score3 = { 3, "����", 88, 74, 86 };
	score3.total = score3.c + score3.java + score3.python;
	score3.mean = (double)score3.total / 3.;
	printf("%s���� ��� ������ %5.1f�� �Դϴ�.\n", score3.name, score3.mean);

//	struct Score* pScore;
	Jumsu* pScore = &score1;
	printf("%s���� ��� ������ %5.1f�� �Դϴ�.\n", pScore->name, pScore->mean);
	printf("%s���� ��� ������ %5.1f�� �Դϴ�.\n", (*(pScore + 0)).name, (*pScore).mean);

}