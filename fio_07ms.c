#include <stdio.h>

#define SIZE 100
#define NAME_SIZE 50

void main()
    {
    /*
    Упражнение 7 (fio_07ms). Работа с массивом структур в цикле.
    На базе исходника упражнения 6 Объявить массив структур  и отработать
    аналогично упражнению 4 за один проход ввод с консоли в массив, вычисление
    стоимости и вывод на консоль из массива пока не будет введена в названии
    материала первая *

    */    
    struct material
        {
        char name[NAME_SIZE];
        int price;
        int size;
        int total;
        };

    int i = 0;

    struct material price_list[SIZE];

    while (i < SIZE)
        {
        printf("\nВведите название материала: ");
        scanf("%s", price_list[i].name);

        if (price_list[i].name[0] == '*')
            {
            break;
            }

        printf("Введите цену материала: ");
        scanf("%d", &price_list[i].price);

        printf("Введите количесво: ");
        scanf("%d", &price_list[i].size);

        price_list[i].total = price_list[i].price * price_list[i].size;

        i++;
        }

    i = 0;

    while(i < SIZE && price_list[i].name[0] != '*') 
        {
        printf("\n\nНазвание: %s \n", price_list[i].name);
        printf("Цена: %d \n", price_list[i].price);
        printf("Количество: %d \n", price_list[i].size);
        printf("Стоимость: %d \n", price_list[i].total);
        i++;
        }

    printf("\n\nВведи любую цифру: ");
    int x;
    scanf("%d", &x);
    }