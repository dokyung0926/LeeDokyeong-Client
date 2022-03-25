#include <stdio.h>



// 반환형 함수이름 (  매개변수1 자료형 매개변수1 이름, 매개변수2 자료형 매개변수1 이름 )
//{
//		연산내용
//		반환문 ( return 반환값 )
//}

// 전역변수 : 모든 곳에서 접근할수 있는 변수

int globalCount;

int main(void) {
	
	int testNum1 = 3;
	int testNum2 = 5;
	// 함수의 호출 형태
	// 함수이름 ( 인자 1, 인자 2 .... )
	sum(testNum1, testNum2);
	sum(2, 3); // 한번 정의된 함수는 여러번 호출 가능. ( 함수 호출시 정의된 함수를 복사해서 사용 가능 )
	sum(4, 3);
	return 0;
}


int doSomething() {
	// int globalCount = 0; // 지역변수는 해당 중괄호 밖에서 정으된 모든 같은 이름의 변수보다 우선순위다 .

	// static : 정적 키워드, static으로 선언되면 동적으로 메모리할당이 불가능하다. 프로그램이 끝날때까지 지워지지 않도록 데이터 영역에 저장된다
	static int localCount; // 정적 지역변수 : 데이터영역에 저장되어 프로그램이 끝날때까지 지워지지는 앟지만, 해당 중괄호 안에서만 접근 가능하다
	localCount++;
	globalCount++;
	printf("doSomthing has been called : %d times(gloal)\n", globalCount);
	printf("doSomthing has been called : %d times(static local)\n", localCount);

	if (localCount < 10)
	{
		doSomething(); // 재귀함수 : 함수 내에서 동일한 함수 호출
	}
	return 0;
}

// 매개변수도 지역변수 ( 매개변수 ⊂ 지역변수 ) [ 매개변수가 지역변수의 부분집합 ]
int sum(int a, int b) {
 
	int tmpValue = a + b;
	printf("%d\n", tmpValue); // 함수 내에서도 함수 호출 가능
	return tmpValue;
}
int sub(int a, int b) {

	// register 변수
	// 해당 변수를 빠른 연산을 위해서 메모리에 할당하지 말고 register에 직접 할당을 시도하는 키워드
	int tmpValue = a - b;
	printf("%d\n", tmpValue); 
	return tmpValue;
}

//int operationCount;
//
// int main(void) {
//	int num1 = 10;
//	int num2 = 10;
//	char a = "sum";
//	char b = "sub";
//	
//	if (scanf("%s", &a))
//	{
//		sum(num1, num2);
//		operationCount++;
//	} 
//	
//	
//	if (scanf("%s", &b))
//	{
//		sub(num1, num2);
//	}

	//if (scanf("%s", &c))
	//{
	//	div(num1, num2);
	//}

	//if (scanf("%s", &d))
	//{
	//	mul(num1, num2);
	//}

	//if (scanf("%s", &e))
	//{
	//	mod(num1, num2);
	//}
	
	
	
	

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


