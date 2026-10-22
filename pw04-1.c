#include <stdio.h>
#define MINUTES 60

int main(void)
{
	int min;
	while (scanf("%d", &min) == 1 && min > 0)
	{
		printf("%d ч. %d мин.\n", min / MINUTES, min % MINUTES);
	}
	return 0;
}