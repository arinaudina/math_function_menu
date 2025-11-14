#include <stdio.h>
#include <locale.h>
#define ERROR -2

int function_сase(int error, int *answer);

int main()
{
    int answer = 0;
    int error = 0;

    do
    {
        printf(
            "\nФункции:\n"
            "  1. f(x) = sin(x)\n"
            "  2. f(x) = cos(x)\n"

            "  0. Выход\n"
                "\nВведите номер функции, которую необходимо вычислить:  "
            );
        
        if(scanf("%d",&answer) != 1)
        {
            printf("\nERROR:\nПроизошла ошибка при вводе значений. Попробуйте запустить программу снова\n");
            answer = ERROR;
        }

        switch(answer)
        {
            case 1:
            {
                error = function_сase(error, &answer);
                break;
            }
            case 2:
            {
                error = function_сase(error, &answer);
                break;
            }
            case 0: 
            {
                printf("\nВыход...\nРабота завершена корректно\n");
                return 0;
            }
        }

    } while ((answer != ERROR) && (error != ERROR));

    return -2;
}