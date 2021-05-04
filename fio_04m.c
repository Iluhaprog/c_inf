#include <stdio.h>

#define SIZE 100
#define NAME_SIZE 50

void main()
    {
    /*
    Упражнение 4 (fio_04m). Работа с массивами в цикле
    Для вышеуказанных переменных объявить массивы на 100 элементов и отработать
    за один проход ввод с консоли в массив, вычисление стоимости и вывод на консоль
    из массива пока не будет введена в названии материала первая *

    mt_ - префикс материала
    tt_ - префикс total
    */
    int mt_name_SIZE = 50;
    char mt_names[SIZE][NAME_SIZE];
    int mt_prices[SIZE];
    int mt_sizes[SIZE];
    int tt_prices[SIZE];
    int i = 0;

    for(;i < SIZE; i++)
        {
        mt_prices[i] = 0;
        mt_sizes[i] = 0;
        tt_prices[i] = 0;
        }

    i = 0;

    while (i < SIZE)
        {
        printf("\nВведите название материала: ");
        scanf("%s", mt_names[i]);

        if (mt_names[i][0] == '*')
            {
            break;
            }

        printf("Введите цену материала: ");
        scanf("%d", &mt_prices[i]);

        printf("Введите количесво: ");
        scanf("%d", &mt_sizes[i]);

        tt_prices[i] = mt_prices[i] * mt_sizes[i];

        i++;
        }

    i = 0;

    while(i < SIZE && mt_names[i][0] != '*') 
        {
        printf("\n\nНазвание: %s \n", mt_names[i]);
        printf("Цена: %d \n", mt_prices[i]);
        printf("Количество: %d \n", mt_sizes[i]);
        printf("Стоимость: %d \n", tt_prices[i]);
        i++;
        }

    printf("\n\nВведи любую цифру: ");
    int x;
    scanf("%d", &x);
    }