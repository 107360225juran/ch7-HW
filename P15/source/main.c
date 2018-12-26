#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *fptr1, *fptr2;
	char ch[100];
	int i, j;
	i= fopen_s(&fptr1, "D://programming/CH7/P15/input.txt", "r");
	j = fopen_s(&fptr2, "D://programming/CH7/P15/output.txt", "w");
	if ((fptr1 != NULL) && (fptr2 != NULL))
	{
		while (fgets(ch, 100, fptr1))
		{
			//putc(ch, fptr2);
			fprintf(fptr2,"%s", ch);
		}
		fclose(fptr1);
		fclose(fptr2);
	}
	else
	{
		printf("ÀÉ®×¶}±Ò¥¢±Ñ!!\n");
	}
	system("pause");
}