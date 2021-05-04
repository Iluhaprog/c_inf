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
    Упражнение 12 (fio_12fw). Вывод в файл.
    Аналогично упражнению 11 и на базе его исходника, но  вывод на консоль 
    заменяется на вывод в последовательный файл fio_12xx.
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

    FILE *file = fopen("fio_12xx", "w");
    i = 0;

    while(i < SIZE && price_list[i].name[0] != '*') 
        {
        if (price_list[i].price > MIN_PRICE)
            {
            fprintf(file, "%s ", price_list[i].name);
            fprintf(file, "%d ", price_list[i].price);
            fprintf(file, "%d ", price_list[i].size);
            fprintf(file, "%d\n", price_list[i].total);
            }
        i++;
        }
    
    fclose(file);

    printf("\n\nВведи любую цифру: ");
    int x;
    scanf("%d", &x);
    }