#include<stdio.h>
// ����ü
// ���� �������� ����� ���� �� �ִ� ����� ���� �ڷ���

// ���� :
// struct ����ü �ڷ��� �̸� {
//	��� ����
//};

// ����ü�� �� ����
struct Coord {
	int x;
	int y;
};

struct Student
{
	int korean; // 4 bte
	char name[20]; // 20 byte
	int english; // 4 byte
	double average; // 8 byte
	int math; // 4 byte
	char gender; // 1 byte
};

int main() {
	
	struct Coord coord1;
	// . ������ ( ��� ������ )
	coord1.x = 4;
	coord1.y = 8;

	struct Coord coord2;
	coord2 = coord1;

	coord2.x = 1;
	coord2.y = 2;
	printf("��ǥ 1 : (%d,%d)\n", coord1.x, coord1.y);
	printf("��ǥ 2 : (%d,%d)\n", coord2.x, coord2.y);

	// ����ü�� �޸� �Ҵ�
	printf("Coord Size : %d\n", sizeof(struct Coord));

	printf("Student Size : %d\n", sizeof(struct Student));

	struct Student studentA;
	struct Student* student_P;
}