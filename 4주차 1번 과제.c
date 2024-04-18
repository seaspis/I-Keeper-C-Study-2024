#include<stdio.h>
int main(void)
{
	int n = 0;
	scanf("%d", &n);
	int max = -1000000;
	int min = 1000000;
	for (int i = 0; i < n; i++) {
		int temp = 0;
		scanf("%d", &temp);

		if (max < temp) max = temp;
		if (min > temp) min = temp;
	}
	printf("%d %d", min, max);
}
