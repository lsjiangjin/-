#include <stdio.h>
#include <stdlib.h>
int main(int argc,char*argv[])
{
	float a;
	int c, d, f;
	printf_s("请输入三位整数：");
	scanf_s("%f", &a);
	if (a<0)
	{
		printf_s("error");
	}
	else
	{
		if (a / 100 > 0 && a / 1000 == 0 &&(int)a==a)
		{
			c = (int)a / 100;
			d = (int)(a - c * 100) / 10;
			f = a - c * 100 - d * 10;
			printf_s("%d", f * 100 + d * 10 + c);
		}
		else
		{
			printf_s("error");
		}
	}
	system("pause");
	return 0;
}
