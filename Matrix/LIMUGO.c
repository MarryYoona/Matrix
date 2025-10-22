#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
#include "LIMUGO.h" 
det* CREATE_D(int N)
{
    det* h, * p, * q;
    h = (det*)malloc(sizeof(det));
    h->num = (double*)malloc(N * sizeof(double));
    q = h;
    for (int R = 1; R < N; R++)
    {
        p = (det*)malloc(sizeof(det));
        p->num = (double*)malloc(N * sizeof(double));
        q->next = p;
        q = p;
    }
    q->next = NULL;
    return h;
}
void SCANF_D(det* D, int N)
{
    while (D)
    {
        for (int C = 0; C < N; C++)
        {
            scanf("%lf", &D->num[C]);
        }
        D = D->next;
    }
}
void PRINTF_D(det* D, int N)
{
    while (D)
    {
        for (int C = 0; C < N; C++)
        {
            printf("%lf ", D->num[C]);
        }
        printf("\n");
        D = D->next;
    }
}
det* CREATE_M(det* D, int N, int C)
{
    D = D->next;
    N--;
    det* h, * p;
    h = CREATE_D(N);
    p = h;
    while (p)
    {
        for (int C_D = 0, C_M = 0; C_D <= N; C_D++)
        {
            if (C_D != C)
            {
                p->num[C_M++] = D->num[C_D];
            }
        }
        p = p->next;
        D = D->next;
    }
    return h;
}
double RESULT_D(det* D, int N)
{
    double result = 0;
    if (N == 1)
    {
        result = D->num[0];
    }
    else
    {
        for (int C = 0; C < N; C++)
        {
            result += pow(-1, C) * D->num[C] * RESULT_D(CREATE_M(D, N, C), N - 1);
        }
    }
    return result;
}
det* ADDITION(det* D, int N, int X)
{
    det* p, * q;
    if (X == 2)
    {
        p = D;
        q = CREATE_D(N);
        SCANF_D(q, N);
        while (q)
        {
            for (int C = 0; C < N; C++)
            {
                p->num[C] += q->num[C];
            }
            p = p->next;
            q = q->next;
        }
    }
    else
    {
        p = ADDITION(D, N, X - 1);
        q = CREATE_D(N);
        SCANF_D(q, N);
        while (q)
        {
            for (int C = 0; C < N; C++)
            {
                p->num[C] += q->num[C];
            }
            p = p->next;
            q = q->next;
        }
    }
    return D;
}