#include <stdio.h>
double byte_to_kb(double byte)
{
	const double KB = 1024.0;
	return byte / KB;
}
int main(void)
{
	double value;
	while (scanf("%lf", &value) == 1)
	{
		printf("%.2f KB\n", byte_to_kb(value));
	}

	return 0;
}