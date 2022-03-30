#include<stdio.h>
// 구조체
// 여러 변수들을 멤버로 가질 수 있는 사용자 정의 자료형

// 형태 :
// struct 구조체 자료형 이름 {
//	멤버 선언
//};

// 구조체는 값 참조
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
	// . 연산자 ( 멤버 연산자 )
	coord1.x = 4;
	coord1.y = 8;

	struct Coord coord2;
	coord2 = coord1;

	coord2.x = 1;
	coord2.y = 2;
	printf("좌표 1 : (%d,%d)\n", coord1.x, coord1.y);
	printf("좌표 2 : (%d,%d)\n", coord2.x, coord2.y);

	// 구조체의 메모리 할당
	printf("Coord Size : %d\n", sizeof(struct Coord));

	printf("Student Size : %d\n", sizeof(struct Student));

	struct Student studentA;
	struct Student* student_P;
}