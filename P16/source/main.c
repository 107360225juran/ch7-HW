#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define Enter 13
#define max_num 80
main()
{
	FILE *fptr;
	char str[max_num],ch;
	int i,j=0;
	i = fopen_s(&fptr, "D://programming/CH7/P16/output.txt", "a");
	if (fptr != NULL)
	{
		while ((ch = _getche())!= Enter && i < max_num)
		{
			str[j] = ch;
			j++;
		}
		putc('\n', fptr);
		str[j++] = '\0';
		//fwrite(str, sizeof(char), i, fptr);
		fprintf(fptr, "%s", str);
		fclose(fptr);
		printf("\n檔案附加完成\n");
	}

	system("pause");
}