#include <stdio.h>

#define MAXLINE 	1024

//string reverse





int get_line(char s[], int lim)
{
	int c;
	int i;
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
	{
		s[i] = c;	
	}

	if(c =='\n')
	{
		i++;
		s[i] = c; // if new line encountered, push new line character to the back
	}
	s[i] = '\0';
	return i;
}

void discard_newline(char s[])
{
	int i; 
	for(i = 0; s[i] != '\0'; ++i)
	{
		if(s[i] == '\n');
		s[i] = '\0';
	}	
}


size_t my_strlen(const char *input)
{
	const char *ptr;
	ptr = input;
	while( *ptr != '\0')
	{
		ptr++;//increment the pointer by size of char?	
	}
	return (ptr - input);
}



void reverse(char input[])
{
	//swap the input[0] with input[string length -1], and increment i , decrement j, until i is not smaller than j
	
	char tmp;
		
	size_t i;
//	size_t j;
	/*for(j = 0; input[j] != '\0'; ++j)
	{
		
	}
	--j;*/
//	printf("j now is %zu, and now at %c\n", j, input[j]);
	size_t length = my_strlen(input);
	size_t j = length-1;


	for(i = 0; i < j; i++)
	{
		tmp = input[i];
		input[i] = input[j];
		input[j] = tmp;
		--j;
	}	
		
	

}



int main(void)
{
/*	int c;
	
	c = getchar();
	
	putchar(c);	
*/


	char line[MAXLINE];	
	

	while(get_line(line, sizeof(line) > 0))
	{
		discard_newline(line);
		reverse(line);
		printf("%s\n",line);
	}
	return 0;

}
