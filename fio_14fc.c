#include <stdio.h>
#include "includes/fio_09i.h"
#include "includes/fio_11f.h"

void main()
    {
    /*
    Упражнение 14(fio_14fc). Копирование файла.
    На базе исходных текстов упражнений 13 и 12 реализовать Чтение ранее
    полученного файла fio_12xx c выводом в файл fio_14xx.
    w_ write
    r_ read
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

    FILE *r_file = fopen("fio_12xx", "r");
    FILE *w_file = fopen("fio_14xx", "w");


    while
        (
        fscanf
            (
            r_file, 
            "%s%d%d%d",
            price_list[i].name,
            &(price_list[i].price),
            &(price_list[i].size),
            &(price_list[i].total)
            ) != EOF
        )
        {
        fprintf(w_file, "%s ", price_list[i].name);
        fprintf(w_file, "%d ", price_list[i].price);
        fprintf(w_file, "%d ", price_list[i].size);
        fprintf(w_file, "%d\n", price_list[i].total);
        i++;
        }
        
    
    fclose(r_file);
    fclose(w_file);

    printf("\n\nВведи любую цифру: ");
    int x;
    scanf("%d", &x);
    }