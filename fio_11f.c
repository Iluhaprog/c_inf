#include <stdio.h>
#include "includes/fio_09i.h"
#include "includes/fio_11f.h"

int calc_total(int price, int total)
    {
    return price * total;
    }

void main()
    {
    /*
    Упражнение 11 (fio_11f). Фильтр по условию.
    Аналогично упражнению 10 и на базе его исходника, но  вывод на консоль
    только материалов с ценой дольше 50
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

        price_list[i].total = calc_total(price_list[i].price, price_list[i].size);

        i++;
        }

    i = 0;

    while(i < SIZE && price_list[i].name[0] != '*') 
        {
        if (price_list[i].price > MIN_PRICE)
            {
            printf("\n\nНазвание: %s \n", price_list[i].name);
            printf("Цена: %d \n", price_list[i].price);
            printf("Количество: %d \n", price_list[i].size);
            printf("Стоимость: %d \n", price_list[i].total);
            }
        i++;
        }

    printf("\n\nВведи любую цифру: ");
    int x;
    scanf("%d", &x);
    }