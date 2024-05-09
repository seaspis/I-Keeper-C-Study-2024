include <stdio.h>
int GetData()
{
	int i=0;
	printf("정수를 입력하세요. : ");
	scanf("%d", &i);
	return i;
}
int GetMax(int a, int b, int c)
{
	int bList[] = { a,b,c };
	int max, i, j;
	max = bList[0];
	for (i = 0; i < 4; i++)
	{
		if (bList[i] > max)
		{
			max = bList[i];
			
		}
	}
	return max;
}
int printData(int a, int b, int c, int d)
{
	printf("%d ,%d ,%d 중 가장 큰 수는 %d 입니다.", a, b, c, d);
}
int main(void)
{
	int aList[3] = { 0 };
	int nMax = -9999, i = 0;

	// 입력
	for (i = 0; i < 3; ++i)
	{
		aList[i] = GetData();
	}

	// 최댓값 계산
	nMax = GetMax(aList[0], aList[1], aList[2]);

	// 출력
	printData(aList[0], aList[1], aList[2], nMax);
	return 0;
}
