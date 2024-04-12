int spaceber(int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf(" ");
	}
}
int main(void) {
	int i, j, line, space = 0;
	scanf("%d",&line);
	space = line - 1;
	for (i = line; i > 0; i--)
	{
		spaceber(space);
		space--;
		for (j = i - 1; j < line; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
