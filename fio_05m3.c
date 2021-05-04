#include <stdio.h>

#define SIZE 100
#define NAME_SIZE 50

void main()
    {
    /*
    Упражнение 5 (fio_05m3). Работа с массивами в нескольких циклах
    Аналогично упражнению 4, но за 3 прохода по массиву (ввести, рассчитать
    стоимость, вывод на консоль).

    mt_ - префикс материала
    tt_ - префикс total
    */

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

        i++;
        }

    i = 0;
    while (i < SIZE && mt_names[i][0] != '*')
        {
        printf("Введите цену материала: ");
        scanf("%d", &mt_prices[i]);

        i++;
        }

    i = 0;
    while (i < SIZE && mt_names[i][0] != '*')
        {
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