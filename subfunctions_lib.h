#ifndef SUBFUNCTIONS_LIB_H
#define SUBFUNCTIONS_LIB_H

// стандартные библиотеки
#include <stdio.h>
#include <locale.h>

// переменная для обозначения результатов прошграммы в основной программе
#define ERROR -2
#define SUCCESS 0

// пользовательские функции для подсчета математических задач
double res_cos(double *x, int *step, double *array_steps_res);
double res_sin(double *x, int *step, double *array_steps_res);
double res_exp(double *x, int *step, double *array_steps_res);

// пользовательские функции-помощники для базовых задач
double input(double value);
double print(double *x,double res, double *array_steps_res, int step);
double range_changes(double *x);

#endif