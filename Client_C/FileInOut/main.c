#pragma warning (disable : 4996)
#include<stdio.h>

int main() {



	FILE* fp4;
	FILE* fp5;

	char name[20] = "Chulsu";
	int korean = 10, english = 20, math = 30;
	double average;

	fp4 = fopen("Chulsu.txt", "r");
	if (fp4 == NULL) {
		printf("failed to open chulsu.txt. exit program");
		exit(0);
	}
	// Chulsu.txt ���� ������ ������ ����
	fscanf(fp4, "%s %d %d %d", name, &korean, &english, &math);
	printf("%s %d %d %d", name, korean, english, math);
	fclose(fp4);

	// ��뷮 �������� ������� ������ �ؾ��Ѵٸ�
	// fscanf�� fprintfó�� ���Ŀ� �°� ������ϴ� �Լ� ����
	// ���̳ʸ� ���� �״�� ������ϴ� fread�� fwrite �Լ��� ����Ѵ�.
	FILE* fp6;
	fp6 = fopen("binary.txt", "wb");
	char a[] = "asdafdfasd3123213ds";
	fwrite(a);
}