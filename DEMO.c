#include <stdio.h>
#include <math.h>


int main()
{
	int num1, num2;
	printf("请输入判断的素数范围：\n");
	scanf_s("%d,%d", &num1, &num2);
	int i, j, count=0, sq, isPrimer;
	printf("%d和%d之间的素数为:\n", num1, num2);
	for (i = num1; i <= num2; i++) {
		sq = sqrt(i);
		for (j = 2; j <= sq; j++) {
			if (i % j == 0) {
				isPrimer = 0;
				break;
			}
			isPrimer = 1;
		}
		if (isPrimer == 1) {
			printf("%d\t", i);
			count++;
			if (count % 5 == 0) {
				printf("\n");
			}
		}
	}
	return 0;
}