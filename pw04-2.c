#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint16_t m, v;
	float e;
	
	scanf("%hu %hu", &m, &v);
	e = (float)main * value * value / 2;

	printf("E = %.2f\n", e);
	printf("uint16_t: %llu bytes\n", (unsigned long long)sizeof(m));
	printf("float: %llu bytes\n", (unsigned long long)sizeof(e));

	return 0;
}