#include <stdio.h>
#include"OperationFunctions.h"

// static (����) Ű����
// �޸� ���� �Ҵ��� �Ұ����ϰ� ����� Ű����
// �ν��Ͻ�ȭ�� �Ұ����ϰ� ����� Ű����

// ���� ���� ����
// �ٸ� �ҽ����Ͽ��� ������ �� ���� ��������
// static int opCount;
int opCount;

int main() {
	printf("%d\n", sum_int(1, 2));
	printf("%d\n", sum_int(1, 2));
	printf("%d\n", sum_int(1, 2));
	printf("%d\n", sum_int(1, 2));
	printf("%d", opCount);

	return 0;
}

