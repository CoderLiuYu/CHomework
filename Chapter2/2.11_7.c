#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main(int argc, char **argv)
{
	int wordsCount;
	int linesCount;

	wordsCount = 0;
	linesCount = 0;

	printf("%d\n", argc);
	if (argc!=3)
	{
		printf("You need input 2 integers, one is for words, the other is for lines.");
		return 0;
	}

	printf("Your input argv[1] = %s\n", argv[1]);
	printf("Your input argv[2] = %s\n", argv[2]);

	wordsCount = atoi(argv[1]);
	printf("%d", strlen(argv[1]));
	printf("atoi(%s) = %d\n", argv[1], wordsCount);
	if( ((strlen(argv[1]) !=1) || argv[1][0]!='0') && wordsCount==0)
	{
		printf("You input a wrong format wordsCount!");
		return -1;
	}

	linesCount = atoi(argv[2]);
	printf("atoi(%s) =%d\n", argv[2],linesCount);
	
	if( ((strlen(argv[2]) !=1) || argv[2][0]!='0') && linesCount==0)
	{
		printf("You input a wrong format linesCount!");
		return -1;
	}

	printf("There were %d words and %d lines.", wordsCount, linesCount);
	return 0;
}
