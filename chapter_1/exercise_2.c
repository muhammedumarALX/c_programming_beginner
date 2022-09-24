#include <stdio.h>

void main(void)
{
	int lower, upper, step;
	float cels, fahr;
	
	lower = 0;
	upper = 300;
	step = 20;

	cels = lower;
	while (cels <= upper)
	{
		fahr = cels * (9/5) + 32;
		printf("%6.1f %3.0f\n", cels, fahr);
		cels = cels + 20;
	}
}
