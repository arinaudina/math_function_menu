#include <stdio.h>
#include "functionlib.h"

double sum_sin(double *x, int *step, double *array)
{
    if ((step == NULL) || (x == NULL) || (array == NULL))
        return -2;

    double sum = 0.;
    double mult = *x;

    for (int i = 1; i <= *step; i++)
    {
        sum += mult;
        mult= -1* (mult * (*x) * (*x)) / ((2*i) * ((2*i)+1));
        array[i] = sum;

    }
    return sum;
}

double sum_cos(double *x, int *step, double *array)
{
    if ((step == NULL) || (x == NULL) || (array == NULL))
        return -2;

    double sum = 0.;
    double mult = 1;

    for (int i = 0; i < *step; i++)
    {
        sum += mult;
        mult = -1 * (mult * (*x) * (*x)) / (((2*i) + 1) * ((2*i) + 2));
        array[i] = sum;
    }
    return sum;
}
