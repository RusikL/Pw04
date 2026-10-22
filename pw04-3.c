#include <stdio.h>
int main(void)
{
	int n, i = 0;
	unsigned long long a = 1;
	scanf("%d", &n);
	while (i < n)
	{
		printf("%llu ", a);
		a = a * 1024;
		i++;
	}
	printf("\n");

	return 0;
}