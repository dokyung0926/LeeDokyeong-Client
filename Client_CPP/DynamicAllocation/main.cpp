#include<iostream>
#include<stdlib.h>
struct MyStruct
{
	int a;
};
int main() {

	// C 에서 동적할당
	struct MyStruct* a = (MyStruct*)malloc(sizeof(MyStruct));
	free(a);

	// C++ 에서 동적할당
	// new 키워드를 사용
	// 타입* 포인터이름 = new 타임;
	MyStruct* myStruct = new MyStruct;
	double myStruct;

	int* pi = new int;
	*pi = 100;
	std::cout << *pi << std::endl;
	delete pi;

	return 0;
}