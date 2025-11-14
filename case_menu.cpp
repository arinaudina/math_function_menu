#include <stdio.h>
#include "subfunctions_case_lib.h"

int function_сase(int error, int *answer)
{
    if (answer == NULL)
        return -2;

    int step = 0;
    double x = 0.;
    x = input(&step);

    if (x != -2)
    {
        double sum = 0.;
        double array[step];
        if (*answer == 1)
        {
            sum = sum_sin(&x,&step,array);
        }
        else if (*answer == 2)
        {
            sum = sum_cos(&x,&step,array);
        }
        
        int res = 0;
        res = print(sum,array,step);
        if (res != 0)
        {
            return -2;
        }

    }
    else
    {
        return -2;
    }
    
    return 0;
}