#include <stdio.h>
int main(void)
{
	int aList[5] = { 30,40,10,50,20 };
	int i = 0, j = 0, nTmp = 0;

	// 여기 들어갈 코드를 작성하세요
	for (i = 0; i < 5 - 1; ++i)
	{
		for (j = 0; j < 5 - 1 - i; ++j)
		{
			if (aList[j] > aList[j + 1])
			{
				nTmp = aList[j];
				aList[j] = aList[j + 1];
				aList[j + 1] = nTmp;
			}
		}
	}
	// 해당 아래의 코드는 수정하지마세요.
	for (i = 0; i < 5; ++i)
	{
		printf("%d\t", aList[i]);
	}

	putchar('\n');
	return 0;
}
