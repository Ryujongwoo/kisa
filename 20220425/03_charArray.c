#include <stdio.h>

void main() {

//	c���� ���� �迭�� ���ڿ� �����͸� ó���ϱ� ���� �ַ� ����� ����Ѵ�.
	char name[] = { 't', 'j', 'o', 'e', 'u', 'n', 'i', 't' };
//	sizeof(): �μ��� ������ �����Ұ� �޸𸮿��� �����ϴ� ũ�⸦ byte ������ ���´�.
	printf("name �迭�� ũ��: %d byte\n", sizeof(name));
	for (int i = 0; i < sizeof(name); i++) {
		printf("name[%d] = %c\n", i, name[i]);
	}
	printf("======================================\n");

//	�迭 �̸��� �� �迭 ��ü�� �ǹ��Ѵ�.
//	�迭�� �̸��� �� �迭�� �޸𸮿� ������ ���� �ּҸ� �ǹ��ϴ� ����(�ּ�) ����̴�.
	printf("name �迭�� �޸𸮿� ������ �ּ�: %d\n", name);
	printf("name �迭�� �޸𸮿� ������ �ּ�: %u\n", name); // unsigned => ��ȣ ���� ����
	printf("name �迭�� �޸𸮿� ������ �ּ�: %p\n", name); // �ּҸ� 16������
	printf("======================================\n");

//	"%s"�� ����ؼ� ���� �迭�� ����� �����͸� ����� �� ���ڿ��� ���ۺ��� ���ڿ��� ��(null ����, \0)����
//	����Ѵ�.
//	name �迭���� ���ڿ��� ���� �ǹ��ϴ� null ���ڰ� ���� ������ name �迭�� ����� ���ڿ� ���� ���������
//	���� ��µȴ�.
	printf("%s\n", name); // tjoeunit����?t��?
	printf("======================================\n");

//	���� �迭�� �ʱ�ġ�� ����ؼ� �ʱ�ȭ �� ��� ���ڿ��� ���� �ǹ��ϴ� null ���ڸ� �ݵ�� �� ��������
//	�ٿ��� �Ѵ�.
	char name2[] = { 't', 'j', 'o', 'e', 'u', 'n', 'i', 't', '\0'};
	printf("name2 �迭�� ũ��: %d byte\n", sizeof(name2));
	for (int i = 0; i < sizeof(name2) - 1; i++) {
		printf("name2[%d] = %c\n", i, name2[i]);
	}
	printf("%s\n", name2); // tjoeunit
	printf("======================================\n");

//	�迭 ��ҿ� ����� ���� null ���ڰ� �ƴ� �� ���� ����ϸ� �ȴ�.
	for (int i = 0; name2[i] != '\0'; i++) {
		printf("name2[%d] = %c\n", i, name2[i]);
	}
	printf("======================================\n");

//	{}�� �̿��ؼ� ���� ������ �ʱ�ġ�� �����ϸ� ��û���� �����ϹǷ� ū����ǥ�� �̿��ؼ� ���ڿ���
//	���� �迭�� �ʱ�ġ�� ������ �� �ִ�.
//	���ڿ��� �̿��ؼ� �ʱ�ġ�� �����ϸ� ���ڿ��� ���� �ǹ��ϴ� '\0'�� c�� �ڵ����� �ٿ��ش�.
	char name3[] = "tjoeunit";
	printf("%s\n", name3);
	printf("name3 �迭�� ũ��: %d byte\n", sizeof(name3));

//	name3 = "academy"; // �迭�� ������ ���� �����ϰ� ū����ǥ�� �̿��ؼ� �����͸� ������ ������ �߻��ȴ�.
//	�迭�� ������ ���� �����ϰ� �迭�� ���ڿ��� �Ҵ��Ϸ��� strcpy(�纻, ����) �Լ��� ����ؾ� �Ѵ�.
	strcpy(name3, "academy");
	printf("%s\n", name3);

}