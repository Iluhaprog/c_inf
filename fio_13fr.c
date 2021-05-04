#include <stdio.h>
#include "includes/fio_09i.h"
#include "includes/fio_11f.h"

void main()
    {
    /*
    Упражнение 13(fio_13fr). Чтение файла.
    На базе исходника упражнения 11 реализовать чтение  ранее полученного
    файла fio_12xx c выводом записей на консоль.
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

    FILE *file = fopen("fio_12xx", "r");

    while
        (
        fscanf
            (
            file, 
            "%s%d%d%d",
            price_list[i].name,
            &(price_list[i].price),
            &(price_list[i].size),
            &(price_list[i].total)
            ) != EOF
        )
        {
        printf("\n\nНазвание: %s \n", price_list[i].name);
        printf("Цена: %d \n", price_list[i].price);
        printf("Количество: %d \n", price_list[i].size);
        printf("Стоимость: %d \n", price_list[i].total);
        i++;
        }
        
    
    fclose(file);

    printf("\n\nВведи любую цифру: ");
    int x;
    scanf("%d", &x);
    }