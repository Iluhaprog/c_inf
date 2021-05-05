#include <stdio.h>
#include "includes/fio_09i.h"
#include "includes/fio_11f.h"

void main()
    {
    /*
    Упражнение 15(fio_15fp). Позиционирование в файле.
     Сделать ввод с консоли символа управления (1 - начало файла, 2 - вперед,
    3 - назад, 4 - в конец файла, 9 - выход из программы) и реализовать
    позиционирование в файле fio_12xx с выводом на консоль полей записи.
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
    int materials_count = 0;
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
            ) != EOF && i < SIZE
        )
        {
        i++;
        }
    
    fclose(file);

    int current_position = 0;
    int action;
    while(action != 9) 
        {
        printf("Введите символ управления 1 - начало файла, 2 - вперед, 3 - назад, 4 - в конец файла, 9 - выход из программы\n");
        scanf("%d", &action);

        if (action == 1)
            {
            current_position = 0;
            }
        if (action == 2 && current_position < i - 1)
            {
            current_position++;
            }
        if (action == 3 && current_position != 0)
            {
            current_position--;
            }
        if (action == 4)
            {
            current_position = i - 1;
            }
        if (action == 9)
            {
            break;
            }
        printf("\n\nНазвание: %s \n", price_list[current_position].name);
        printf("Цена: %d \n", price_list[current_position].price);
        printf("Количество: %d \n", price_list[current_position].size);
        printf("Стоимость: %d \n", price_list[current_position].total);
        }

    printf("\n\nВведи любую цифру: ");
    int x;
    scanf("%d", &x);
    }