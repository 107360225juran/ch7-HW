#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fptr;
	char ch;
	int count = 0,a;
	a = fopen_s(&fptr, "D://programming/CH7/P14/welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}
	else
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	system("pause");
}