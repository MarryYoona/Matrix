#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include "LIMUGO.h"
int main()
{
	int mg;
	printf("1.����ļӼ�����\n2.N������ʽ�ļ���\n������ 1 �� 2 :\n");
	scanf("%d", &mg);
	if (mg == 1)
	{
		int N, X;
		det* p, * q;
		printf("���������Ľ���:\n");
		scanf("%d", &N);
		printf("���������ĸ���:\n");
		scanf("%d", &X);
		p = CREATE_D(N);
		printf("�������������:\n��:\n\n1 2 3\n4 5 6\n7 8 9\n\n10 11 12\n13 14 15\n16 17 18\n\n");
		SCANF_D(p, N);
		q = ADDITION(p, N, X);
		printf("\n���Ϊ:\n\n");
		PRINTF_D(q, N);
	}
	else
	{
		int N;
		double result;
		det* h;
		printf("����������ʽ�Ľ���:\n");
		scanf("%d", &N);
		h = CREATE_D(N);
		printf("����������ʽ:\n��:\n\n1 2 3\n4 5 6\n7 8 9\n\n");
		SCANF_D(h, N);
		result = RESULT_D(h, N);
		printf("\n\n���Ϊ:%lf", result);
	}
	return 0;
}