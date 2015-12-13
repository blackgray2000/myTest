#include <stdio.h>

extern int GCount;  //prefix extern let compiler knows GCount exists in your project somewhere. c linker binds object files and assures references are made correctly.

int GetCount(void); //declare the function GetCount


int main(void)
{	
	printf("Count now is %d\n", GCount);
	GCount = 1000;
	printf("Count now is %d\n", GetCount());
	return 0;
}
