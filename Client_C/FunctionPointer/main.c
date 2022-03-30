#include <stdio.h>

int GetFactorial(int n);
double sum(double a, double b); double sub(double a, double b); double div(double a, double b); double mul(double a, double b);

int main() {
	// 함수 포인터의 형태
	// 반환형 (*함수 포인터 변수 이름) ( 파라미터 1 자료형 ) ( 파라미터 1 ) ... )
	int (*pf)(int) = GetFactorial;

	printf("%d\n", GetFactorial(5));
	printf("%d\n", pf(5));
	
	// 예제
	double (*pOP)(double, double) = NULL;
	char op[20]; // 명령어 입력을 받을 문자열
	printf("연산 명령어를 입력하세요 ( sum, sub, div, mul ) :");
	scanf("%s", op);
	if (!strcmp("sum", op))pOP = sum;
	else if (!strcmp("sub", op))pOP = sub;
	else if (!strcmp("div", op)) pOP = div;
	else if (!strcmp("mul", op))pOP = mul;

	if (pOP != NULL)
		printf(" 3과 7의 연산 결과는  : %lf\n", pOP(3, 7));

}
double sum(double a, double b) {
	return a + b;
}
double sub(double a, double b) {
	return a - b;
}
double div(double a, double b) {
	return a / b;
}
double mul(double a, double b) {
	return a * b;
}
int GetFactorial(int n) {
	int fact = 1;
	
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
		fact = fact * i;
	}
	return fact;
}
