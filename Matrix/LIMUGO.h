#pragma once 
#ifndef LIMUGO 
#define LIMUGO 
#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 
typedef struct DET
{
	double* num;
	struct DET* next;
}det;
det* CREATE_D(int N);
void SCANF_D(det* D, int N);
void PRINTF_D(det* D, int N);
det* CREATE_M(det* D, int N, int C);
double RESULT_D(det* D, int N);
det* ADDITION(det* D, int N, int X);
#endif