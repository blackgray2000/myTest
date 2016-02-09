#include <stdio.h>



void print_bits(unsigned int num)
{
	unsigned int size = sizeof(unsigned int);
	printf("size of unsigned int is %u\n", size);
	printf("->%u\n", (size*8-1));
	unsigned int maxpow = 1<<(size * 8 - 1); // 1 0 0 0 0 ........ 2 ^ 31 = 2147483648
	//unsigned int maxpow = 1<<31;
	printf("max pow value is: %u\n", maxpow<<1);
		

	size_t i;
	for(i = 0; i < size * 8; ++i) //size has value of 4, and size * 8 has value of 32
	{
	//	printf("hi\n");
		if(num & maxpow) //if both bits are 1, print 1. if both bits are diff, print 0;
		{
			printf("%u ", 1);
		}	
		else
		{
			printf("%u ", 0);
		}
		num = num << 1;  //move to right one bit
	//	printf("%u ", 	
	}	
	
	
}

void print_char_bits(unsigned char c)
{
	size_t size = sizeof(unsigned char);
	//printf("the size of char is: %zu\n", size); //show that char has size of 1 byte = 8 bits(maybe)
	
	size_t i;
	int mask = 1<<(size * 8 - 1);  //...0 0 0 0 0 0 0 1 - > ... 1 0 0 0 0 0 0 0
//	printf("mask now is: %d\n", mask);
	for(i = 0; i < size * 8; ++i)
	{
		if(c & mask) //if both bits same, print 1, else print 0;
		{
			printf("%d ", 1);
		}		
		else
		{
			printf("%d ", 0);
		}
		mask = mask >> 1;	
		printf("mask now is: %d\n", mask);
	}
	printf("\n");
}

void htoi()
{

}

int main(void)
{
	//char c = ~1; // 0 1 1 1 1 1 1 0
//	unsigned char c =~1; //1 1 1 1 1 1 1 0 
	//c = c>>1;  //0 1 1 1 1 1 1 1
	    	   //1 0 0 0 0 0 0 0


	/*unsigned char b = ~0; //1 1 1 1 1 1 1 1 
	//b = b>>1; //0 1 1 1 1 1 1 1 
		
	//print_char_bits(-b);  //1 0 0 0 0 0 0 1
	//print_char_bits(-b-1);	//1 0 0 0 0 0 0 0
	*/
	

	printf('\ooo');
	printf("%l\n", 1234L);
		
	return 0;
}








