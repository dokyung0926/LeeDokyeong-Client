#include<iostream>
#include<stdlib.h>
struct MyStruct
{
	int a;
};
int main() {

	// C ���� �����Ҵ�
	struct MyStruct* a = (MyStruct*)malloc(sizeof(MyStruct));
	free(a);

	// C++ ���� �����Ҵ�
	// new Ű���带 ���
	// Ÿ��* �������̸� = new Ÿ��;
	MyStruct* myStruct = new MyStruct;
	double myStruct;

	int* pi = new int;
	*pi = 100;
	std::cout << *pi << std::endl;
	delete pi;

	return 0;
}