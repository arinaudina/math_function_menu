#include "subfunctions_lib.h"

int function_сase(int result, int *answer);

int main()
{
    int answer = 0;
    int result = 0;

    do
    {
        printf(
            "\nФункции:\n"
            "  1. f(x) = sin(x)\n"
            "  2. f(x) = cos(x)\n"
            "  3. f(x) = exp(x)\n"
            "  0. Выход\n"
                "\nВведите номер функции, которую необходимо вычислить:  "
            );
        
        answer =input(answer);
        if (answer == ERROR)
            return ERROR;
      
        switch(answer)
        {
            case 1:
            {
                result = function_сase(result, &answer);
                break;
            }
            case 2:
            {
                result = function_сase(result, &answer);
                break;
            }
            case 3:
            {
                result = function_сase(result, &answer);
            }
            case 0: 
            {
                printf("\nВыход...\nРабота завершена корректно\n");
                return SUCCESS;
            }
        }

    } while (result != ERROR);

    return ERROR;
}