#include <stdio.h>

int main(void)
{
	int num;
	FILE* fp = fopen("test.txt", "r");

	if (fp == NULL)
	{
		printf("파일 열기 실패!\n");
		return 1;
	}

	int ch;

	while ((ch = fgetc(fp)) != EOF)
		putchar(ch, fp);

	fclose(fp);
}
