#include <stdio.h>

// ��ȯ�� �Լ��̸� (  �Ű�����1 �ڷ��� �Ű�����1 �̸�, �Ű�����2 �ڷ��� �Ű�����1 �̸� )
//{
//		���곻��
//		��ȯ�� ( return ��ȯ�� )
//}

// �������� : ��� ������ �����Ҽ� �ִ� ����

//int globalCount;
//
//int main(void) {
//	
//	int testNum1 = 3;
//	int testNum2 = 5;
//	// �Լ��� ȣ�� ����
//	// �Լ��̸� ( ���� 1, ���� 2 .... )
//	sum(testNum1, testNum2);
//	sum(2, 3); // �ѹ� ���ǵ� �Լ��� ������ ȣ�� ����. ( �Լ� ȣ��� ���ǵ� �Լ��� �����ؼ� ��� ���� )
//	sum(4, 3);
//	return 0;
//}
//
//
//int doSomething() {
//	// int globalCount = 0; // ���������� �ش� �߰�ȣ �ۿ��� ������ ��� ���� �̸��� �������� �켱������ .
//
//	// static : ���� Ű����, static���� ����Ǹ� �������� �޸��Ҵ��� �Ұ����ϴ�. ���α׷��� ���������� �������� �ʵ��� ������ ������ ����ȴ�
//	static int localCount; // ���� �������� : �����Ϳ����� ����Ǿ� ���α׷��� ���������� ���������� ������, �ش� �߰�ȣ �ȿ����� ���� �����ϴ�
//	localCount++;
//	globalCount++;
//	printf("doSomthing has been called : %d times(gloal)\n", globalCount);
//	printf("doSomthing has been called : %d times(static local)\n", localCount);
//
//	if (localCount < 10)
//	{
//		doSomething(); // ����Լ� : �Լ� ������ ������ �Լ� ȣ��
//	}
//	return 0;
//}
//
//// �Ű������� �������� ( �Ű����� �� �������� ) [ �Ű������� ���������� �κ����� ]
//int sum(int a, int b) {
// 
//	int tmpValue = a + b;
//	printf("%d\n", tmpValue); // �Լ� �������� �Լ� ȣ�� ����
//	return tmpValue;
//}
//int sub(int a, int b) {
//
//	// register ����
//	// �ش� ������ ���� ������ ���ؼ� �޸𸮿� �Ҵ����� ���� register�� ���� �Ҵ��� �õ��ϴ� Ű����
//	int tmpValue = a - b;
//	printf("%d\n", tmpValue); 
//	return tmpValue;
//}

int operationCount;

int main(void) {
	int num1 = 10;
	int num2 = 10;
	char a = "sum";
	
	if (scanf("%c", &a))
	{
		sum(num1, num2);
	} 
	
	
	/*if (scanf("%c", &c))
	{
		sub(num1, num2);
	}

	if (scanf("%c", &c))
	{
		div(num1, num2);
	}

	if (scanf("%c", &c))
	{
		mul(num1, num2);
	}

	if (scanf("%c", &c))
	{
		mod(num1, num2);
	}*/
	
	
	
	

	/*if (scanf("sum")) {
		sum(num1, num2);
		return 0;
	}
	
	if (scanf("sub")) {
		sub(num1, num2);
		printf("%d + %d = %d\n", num1, num2, sum);
		return 0;
	}
	if (scanf("div")) {
		div(num1, num2);
		printf("%d + %d = %d\n", num1, num2, sum);
		return 0;
	}
	if (scanf("mul")) {
		mul(num1, num2);
		printf("%d + %d = %d\n", num1, num2, sum);
		return 0;
	}
	if (scanf("mod")) {
		mod(num1, num2);
		printf("%d + %d = %d\n", num1, num2, sum);
		return 0;
	}*/
}

int sum(int a, int b) {

	int sumVal = a + b;
	printf("%d\n", sumVal);
	return sumVal;
}
int sub(int a, int b) {

	int sumVal = a - b;
	printf("%d\n", sumVal);
}
int div(int a, int b) {

	int sumVal = a / b;
	printf("%d\n", sumVal);
}
int mul(int a, int b) {

	int sumVal = a * b;
	printf("%d\n", sumVal);
}
int mod(int a, int b) {

	int sumVal = a & b;
	printf("%d\n", sumVal);
}
