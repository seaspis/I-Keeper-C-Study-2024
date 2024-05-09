include <stdio.h>
int GetFee(int age,int m)
{
	int i;
	if (age <= 3)
	{
		i = m - m;
	}
	else if (age > 3, age <= 13)
	{
		i = m - (m * 0.5);
	}
	else if (age > 13, age <= 19)
	{
		i = m - (m * 0.75);
	}
	else if (age > 20)
	{
		i = m;
	}
}
int main(void)
{
	int age, m, n;
	printf("나이 ");
	scanf("%d", &age);
	printf("기본 요금 ");
	scanf("%d", &m);
	n = GetFee(age, m);
	printf("%d 원 입니다.", n);
}
