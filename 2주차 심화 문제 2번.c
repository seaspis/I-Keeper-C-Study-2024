include<stdio.h>
int main(void) {
	int a, b, d, e, f;
	b = 1000;
	d = b - b;
	e = b - (b * (0.5));
	f = b - (b * (0.25));
	scanf("%d", &a);
	if (a <4) {
		printf("최종 요금: %d 원", d);
	}
	else if (a < 14) {
		printf("최종 요금:%d원", e);
	}
	else if (a < 20) {
		printf("최종 요금:%d원", f);
	}
	else if (a < 65) {
		printf("최종 요금:%d원", b);
	}
	else if (a >= 65) {
		printf("최종 요금:%d원", d);
	}
	else
		printf("error");
	return 0;
}
