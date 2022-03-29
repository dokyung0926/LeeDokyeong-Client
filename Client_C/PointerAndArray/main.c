#include<stdio.h>

void print_all_elements(int* arr, int len) {

	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}

int main() {

	// �迭�� �����ϰԵǸ�
	// �迭�� �޸𸮿� �Ҵ�ɶ�
	// a ��� �������� ������ �Ҷ� �������� ������ �ٲ�

	int arr[] = { 10,20,30,40,50,80,90 };
	int len = sizeof(arr) / sizeof(int);
	printf("arr size : %d\n", sizeof(arr));

	print_all_elements(arr, len);

	printf("\n");
	printf("%p\n", arr);
	printf("%d\n", arr[0]); // arr[index]�� ���� ����  
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[1]);

	// �迭�� ����
	printf("\n");
	printf("%p\n", arr + 4); // �ǹ� : arr�ּ��� 4byte * sizeof( arr �ڷ��� )
	printf("%d\n", *(arr + 0)); // �ǹ� : arr �ּҿ������� arr �ڷ��� ũ�⸸ŭ ���� ������ .
	printf("%d\n", *(arr + 1));
	printf("%d\n", *(arr + 2));
	printf("%d\n", *(arr + 3));
	printf("%d\n", *(arr + 4));
	printf("%d\n", *(arr + 5));

	// ������ ���� ����

	printf("\n");
	int* p, * q;
	p = &arr[0];
	q = &arr[4];

	// ������ ���� ������ �Ұ�����.
	// prinftf(%d\n", p + q);
	// �����Ͱ��� ���� = �ּҰ��� �ε��� ���̸� ��ȯ��
	// ������ ������� ������, �ش� �ε��� * �ڷ��� byte �� ��ŭ �ּҰ� �ռ��ִ�.
	printf("%d\n", p - q);

	// ������ ���� ���迬��
	printf("%d\n", p < q);

	// �������� ����
	printf("\n");
	printf("%d\n", *p++);
	printf("%d\n", *(++p));
	printf("%d\n", *(p++));
	printf("%d\n", (*p++));
	printf("%d\n", *p);


	return 0;
}