#include <stdio.h>
#include "helper.h"

double input(int *step)
{
    if (step == NULL)
        return -2;

    double x = 0.;
    *step = 0;
    
    printf("\nВведите значение 'x':  ");
    if(scanf("%lf",&x) != 1)
    {
        printf("\nERROR:\nПроизошла ошибка при вводе значений. Попробуйте запустить программу снова\n");
        return -2;
    }

    do
    {
         printf("\nВведите количество шагов:  ");
        if(scanf("%d",&*step) != 1)
        {
            printf("\nERROR:\nПроизошла ошибка при вводе значений. Попробуйте запустить программу снова\n");
            return -2;
        }
    } while (*step < 0);

    return x;

}


double print(double sum, double *array, int step)
{
    int answer = 0;

    printf(
        "\nВывод:\n"
        "  1. Значение функции\n"
        "  2. Значение функции с каждым шагом\n"
    );

    do
    {
        printf("\nВыберите желаемый вариант вывода:  ");
        if(scanf("%d",&answer) != 1)
        {
            printf("\nERROR:\nПроизошла ошибка при вводе значений. Попробуйте запустить программу снова\n");
            return -2;
        }

        switch (answer)
        {
            case 1:
            {
                printf("\nОтвет: %lf\n", sum);
                break;
            }
            case 2:
            {
                for (int i = 1; i <= step; i++)
                {
                    printf("Шаг: %d   Значение: %lf \n", i, array[i]);
                }
                break;
            }
        }

    } while ((answer !=1) && (answer != 2));

    return 0;
    
}

