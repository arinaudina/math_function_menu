#include "subfunctions_lib.h" // пользовательская библиотека

int function_сase(int result, int *answer)
{
    if (answer == NULL)
        return ERROR;

    int step = 0;
    double x = 0.;

    printf("\nВведите значение 'x':  ");
    x = input(x);
    if (x == ERROR)
        return ERROR;

    do
    {
        printf("\nВведите количество шагов:  ");
        step = input(step);
        if ( step == ERROR)
            return ERROR;
    } while (step <= 0);

    double res = 0.;
    double array_steps_res[step];

    switch(*answer)
    {
        case 1:
        {
            x = range_changes(&x);
            res = res_sin(&x,&step,array_steps_res);
        }
        case 2:
        {
            x = range_changes(&x);
            res = res_cos(&x,&step,array_steps_res);
        }
        case 3:
        {
            res = res_exp(&x,&step,array_steps_res);
        }
    }

    res = print(&x,res,array_steps_res,step);
    return res;
}