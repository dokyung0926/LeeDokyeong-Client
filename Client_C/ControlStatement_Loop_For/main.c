#include<stdio.h>

// for : 특정 조건에 따라 반복하면서 반복 할때마다 특정 함수를 수행할 수 있는 반복문
// 형태 : for( ; ; ) { 조건이 참일때 실행할 내용 }

int main(void) {

	for (int count = 0;  count < 5; count++)
	{
		printf("%d\n", count);
	}

	for (int i = 10; ; i++)
	{
		if (i < 5)
		{
			printf("%d", i);
			continue;
		}
		else
		{
			printf("\n");
		}

		if (i > 10)
		{
			printf("index is bigger than 10, exit for loop");
			break;
		}

		printf("for loop is on going");
	}

	return 0;
}