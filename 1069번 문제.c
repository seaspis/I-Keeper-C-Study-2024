#include<stdio.h>
int main(void) {
	char a;
	scanf(" %c", &a);
	switch (a)
	{
	case 'A': //문자 'A'가 정수값 65('A'의 아스키 값)로 저장되기 때문에 가능하다.
		printf("best!!!");
		break;
	case 'B':
		printf("good!!");
		break;
	case 'C':
		printf("run!");
		break;
	case 'D':
		printf("slowly~");
		break;
	default:
		printf("what?");
	}
	return 0;
}
