#include<stdio.h>

// if문 : 특정 조건의 참 / 거짓 여부에 따라 흐름을 제어함 .
// 형태 :  if (조건) { 조건이 참일때 실행할 내용 }

// if else문 
// 형태 : if (조건) { 조건이 참일때 실행할 내용 }
//			   else { 조건이 거짓일 때 실행할 내용 }

int main(void) {
	int isTrue = 0;

	if (isTrue)
	{
		printf("this is true");
	}
	else
	{
		printf("this is false");
	}

	int num = 0;

	if (num == 0)
	{
		printf("this is 0");
	}
	else if (num == 1)
	{
		printf("this is 1");
	}
	else
	{
		printf("I don't know this number");
	}
}