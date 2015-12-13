// implementation of module accum
//

#include "accum.h"

static unsigned int GTotal;

void AccumClear(void)
{
	GTotal = 0;
}

void AccumAdd(unsigned int val)
{
	GTotal += val;
}

unsigned int AccumGet(void)
{
	return GTotal;
}
