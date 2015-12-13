#include <stdio.h>
#include "accum.h"

int main(void)
{
	int i;
	AccumClear();
	for(i = 0; i < 100; i++)
	{
		AccumAdd(i); //add value of current i to static GTotal	
	}

	printf("now the value is: %d.\n", AccumGet());

	return 0;

}
