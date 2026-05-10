#include <stdio.h>

double res_sin(double *x, int *step, double *array_steps_res)
{
    if ((step == NULL) || (x == NULL) || (array_steps_res == NULL))
        return -2;

    double res = 0.;
    double step_res = *x;

    for (int i = 1; i <= *step; i++)
    {
        res += step_res;
        step_res= -1* (step_res * (*x) * (*x)) / ((2*i) * ((2*i)+1));
        array_steps_res[i] = res;

    }
    return res;
}


double res_cos(double *x, int *step, double *array_steps_res)
{
    if ((step == NULL) || (x == NULL) || (array_steps_res == NULL))
        return -2;

    double res = 0.;
    double steps_res = 1;

    for (int i = 0; i <= *step; i++)
    {
        res += steps_res;
        steps_res = -1 * (steps_res * (*x) * (*x)) / (((2*i) + 1) * ((2*i) + 2));
        array_steps_res[i] = res;
    }
    return res;
}


double res_exp(double *x, int *step, double *array_steps_res)
{
    if ((step == NULL) || (x == NULL) || (array_steps_res == NULL))
        return -2;

    double res = 0.;
    double steps_res = 1;

    for (int i = 0; i <= *step; i++)
    {
        res += steps_res;
        steps_res = steps_res * ((*x) / i);
        array_steps_res[i] = res;
    }
    return res;
}
