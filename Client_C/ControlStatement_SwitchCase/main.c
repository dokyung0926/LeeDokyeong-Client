#include <stdio.h>

// switch - case ���ǹ� : ��쿡 ���� �帧�� ������
// ���� :
// switch ( ���� �Ű����� )
//					case ����1 : ���� �Ű����� == ����1�϶� ������ ���
//					case ����2 : ���� �Ű����� == ����2�϶� ������ ���
//					case ����3 : ���� �Ű����� == ����3�϶� ������ ���
//					default : �� ��

int main() {
	// n���� 10���� ���ϴ� ����
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

	// ���ĺ� ����
	char character = 'B';
	switch (character)
	{
	case 'A':
		printf("%c says : I'm here! \n", character);
		break; // break �б⹮ : ���� ����� �ݺ����� �����Ѵ�
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