#include <stdio.h>

// switch - case 조건문 : 경우에 따라 흐름을 제어함
// 형태 :
// switch ( 조건 매개변수 )
//					case 조건1 : 조건 매개변수 == 조건1일때 실행할 경우
//					case 조건2 : 조건 매개변수 == 조건2일때 실행할 경우
//					case 조건3 : 조건 매개변수 == 조건3일때 실행할 경우
//					default : 그 외

int main() {
	// n부터 10까지 더하는 문장
	int n = 3;
	int sum = 0;
	switch (n)
	{
	case 1:
		sum += 1;
	case 2:
		sum += 2;
	case 3:
		sum += 3;
	case 4:
		sum += 4;
	case 5:
		sum += 5;
	default:
		break;
	}
	printf("%d\n", sum);

	// 알파벳 나열
	char character = 'B';
	switch (character)
	{
	case 'A':
		printf("%c says : I'm here! \n", character);
		break; // break 분기문 : 가장 가까운 반복문을 종료한다
	case 'B':
		printf("%c says : I'm here! \n", character);
		return 0;
	case 'C':
		printf("%c says : I'm here! \n", character);
		return 0;
	case 'D':
		printf("%c says : I'm here! \n", character);
		return 0;
	default:
		printf("Who r u %c ? \n", character);
		return 0;
	}
}