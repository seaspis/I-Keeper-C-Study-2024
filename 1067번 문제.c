#incldue <stdio.h>
int main(void)
{
	int a;
	scanf("%d", &a);
	if (a > 0){
		printf("plus\n");
	}
	else{
		printf("minus\n");
	}
	if (a % 2 == 0){
		printf("even");
	}
	else {
		printf("odd");
	}
	return 0;
}
