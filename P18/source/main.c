#include<stdio.h>
#include<stdlib.h>
main()
{
	FILE *in, *out;
	int i, j,cnt;
	char str[100];
	i = fopen_s(&out, "D://programming/CH7/P18/output.txt", "wb");
	j = fopen_s(&in, "D://programming/CH7/P18/input.txt", "r");
	if (in != NULL)
	{
		while (!feof(in))
		{
			cnt = fscanf_s(in, "%s\n", str,100);
			printf("%d", cnt);
			if (cnt > 0)
			{
				fprintf(out, "%s\n", str);
			}
		}
	}
	fclose(in);
	fclose(out);
	system("pause");
}