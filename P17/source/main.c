#include<stdio.h>
#include<stdlib.h>
#define max_num 80
main()
{
	FILE *fptr;
	char str[max_num];
	int i, j=0;
	i = fopen_s(&fptr, "D://programming/CH7/P17/output.txt", "r");
	if (fptr != NULL)
	{
		while (!feof(fptr))
		{
			int end = fseek(fptr, 0, SEEK_END);
			int size = ftell(fptr);
			printf("size = %d\n", size);
			fseek(fptr, 0, SEEK_SET);
			j = fread(str, sizeof(char), size , fptr);
			//fgets(str, max_num, fptr);
			str[j] = '\0';
			printf("%s", str);
		}
		
		//printf("%d", j);
	}
	fclose(fptr);
	system("pause");
}
