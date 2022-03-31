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

typedef struct _Student
{
	char name[20]; // 20 byte
	double average; // 8 byte
	int korean, english, math; // 4 byte
};

// 비트필드 
// 메모리 낭비르 줄일 수 있는 방법으로, 첫번째 멤버부터 순차적으로 비트를 할당 할 수 있다.
// 단, 값이 해당 비트수를 넘어가게 되면 오버플로우가 발생하니 유의해서 사용해야 한다 .
struct Time
{
	unsigned int sec : 6; // LSB ~ Bit5
	unsigned int min : 6; // Bit6 ~ Bit11
	unsigned int hour : 5; // Bit12 ~ Bit16 
};

struct StudentList {
	struct Student students[3];
	int num;
} studentList;

void Student SwapStudents(Student* student1, Student* student2);

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

	strcpy(studentA.name, "Luke");
	studentA.english = 80;
	studentA.korean = 60;
	studentA.math = 40;
	studentA.average = (studentA.english + studentA.korean + studentA.math) / 3.0;

	printf("%s\n", studentA.name);
	printf("%lf\n", studentA.average);

	student_P = &studentA;

	// -> 연산자 ( 간접 멤버 연산자 : 구조체 포인터 변수의 멤버에 접근하는 연산자 )

	printf("%s\n", student_P->name);
	student_P->english = 10;
	printf("%d\n", student_P->english);
	printf("%d\n", student_P->english);

	// 구조체 변수의 멤버의 주소에는 접근할 수 있다.
	// 비트필드
	struct Time t1;
	printf("%d\n", sizeof(t1));

	//t1.hour = 5;
	//t1.min = 12;
	//t1.sec = 60;
	//printf("%d : %d : %d\n", t1.hour, t1.min, t1.sec);
	// unsigned int* tmpHour = &t1.hour; 비트필드의 주소에는 접근할 수 없다 .

	struct Student studentB = {
		{"Jerry"},
		{55},
		{65},
		{32},
		{(double)(55 + 65 + 32) / 3.0}
	};
	struct Student studentC = {
	{"Jerry"},
	{85},
	{25},
	{62},
	{(double)(85 + 25 + 62) / 3.0}
	};

	// 구조체를 멤버로 가지는 구조체
	studentList.num = 3;
	studentList.students[0] = studentA;
	studentList.students[1] = studentB;
	studentList.students[2] = studentC;
	printf("Student A ' english grade %d\n", studentList.students[0].english);

}

Student SwapStudents(Student* student1, Student* student2)
{
	Student tmpStudent = *student1;
	*student1 = *student2;
	*student2 = tmpStudent;

	return Student();
}
