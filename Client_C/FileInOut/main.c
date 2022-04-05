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
	// Chulsu.txt 파일 내용을 변수값 수정
	fscanf(fp4, "%s %d %d %d", name, &korean, &english, &math);
	printf("%s %d %d %d", name, korean, english, math);
	fclose(fp4);

	// 대용량 데이터의 입출력을 빠르게 해야한다면
	// fscanf나 fprintf처럼 서식에 맞게 입출력하는 함수 말고
	// 바이너리 파일 그대로 입출력하는 fread나 fwrite 함수를 사용한다.
	FILE* fp6;
	fp6 = fopen("binary.txt", "wb");
	char a[] = "asdafdfasd3123213ds";
	fwrite(a)
}