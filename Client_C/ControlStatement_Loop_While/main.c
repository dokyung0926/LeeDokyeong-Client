#include<stdio.h>

// while : Ư�� ���ǿ� ���� ������ �ݺ� ����
// ���� : while( ���� ) { ������ ���϶� �ݺ��� ���� }

// do while : ������ �ϴ� �ѹ� �����ϰ� Ư�� ���ǿ� ���� ������ �ݺ�����
// ���� : do { ������ ���϶� �ݺ��� ���� } while ( ���� )

int main(void) {

	 // ������ �׻� ���� �ݺ����� "���ѷ���" ��� ��
	while (1)
	{
		printf("ahahahahahha11111");
		continue; // �б⹮ , ���� ����� �ݺ����� ã�Ƽ� �ش� �ݺ����� ���� ���ٷ� ���ư�
		printf("ahahahahahha222222");
	}
	printf("while statement is over");

	int count = 0;
	while (count < 5)
	{
		printf("while count : %d\n", count);
		count++;
	}
	printf("while statement is over\n");

	// do while
	do
	{
		printf("/)
	} while (1);

	return 0;

}