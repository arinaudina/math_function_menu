#include <stdio.h>

double input(double value)
{
    char check_symbol;

    if((scanf("%lf%c",&value,&check_symbol) != 2) || (check_symbol != '\n'))
    {
        printf("\nERROR:\nПроизошла ошибка при вводе значений. Попробуйте запустить программу снова\n");
        while (getchar() != '\n');
        return -2;
    }

    return value;
}


double range_changes(double *value)
{
    if (value == NULL)
        return -2;

    double PI2 = 2 * 3.14159265358979;

    while ((*value) >= PI2)
    {
        *value -= PI2;
    }

    while ((*value) < 0)
    {
        *value += PI2;
    }

    return *value;
}


double print(double *x, double res, double *array_steps_res, int step)
{
    int answer = 0;

    printf(
        "\nВывод:\n"
        "  1. Значение функции\n"
        "  2. Значение функции с шагом преобразования\n"
    );

    do
    {
        printf("\nВыберите желаемый вариант вывода:  ");
        answer = input(answer);
        if (answer == -2)
            return -2;

        switch (answer)
        {
            case 1:
            {
                printf("\nВаш ответ: %lf\n", res);
                break;
            }
            case 2:
            {
                for (int i = 1; i <= step; i++)
                {
                    printf("Шаг: %d   Значение: %lf \n", i, array_steps_res[i]);
                }
                break;
            }
        }

    } while ((answer !=1) && (answer != 2));
    
    return 0;
    
}
