#include<stdio.h>

// for : Ư�� ���ǿ� ���� �ݺ��ϸ鼭 �ݺ� �Ҷ����� Ư�� �Լ��� ������ �� �ִ� �ݺ���
// ���� : for( ; ; ) { ������ ���϶� ������ ���� }

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