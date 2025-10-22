#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include "LIMUGO.h"
int main()
{
	int mg;
	printf("1.矩阵的加减运算\n2.N阶行列式的计算\n请输入 1 或 2 :\n");
	scanf("%d", &mg);
	if (mg == 1)
	{
		int N, X;
		det* p, * q;
		printf("请输入矩阵的阶数:\n");
		scanf("%d", &N);
		printf("请输入矩阵的个数:\n");
		scanf("%d", &X);
		p = CREATE_D(N);
		printf("请依次输入矩阵:\n例:\n\n1 2 3\n4 5 6\n7 8 9\n\n10 11 12\n13 14 15\n16 17 18\n\n");
		SCANF_D(p, N);
		q = ADDITION(p, N, X);
		printf("\n结果为:\n\n");
		PRINTF_D(q, N);
	}
	else
	{
		int N;
		double result;
		det* h;
		printf("请输入行列式的阶数:\n");
		scanf("%d", &N);
		h = CREATE_D(N);
		printf("请输入行列式:\n例:\n\n1 2 3\n4 5 6\n7 8 9\n\n");
		SCANF_D(h, N);
		result = RESULT_D(h, N);
		printf("\n\n结果为:%lf", result);
	}
	return 0;
}