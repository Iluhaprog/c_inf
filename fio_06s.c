#include <stdio.h>

#define NAME_SIZE 50

void main()
    {
    /*
    Упражнение 6 (fio_06s). Объявление структур
    Аналогично упражнению 2 и на  базе его исходника, но переменные объявить
    как элемент структуры.

    tt_ - префикс total
    */
    struct material
        {
        char name[NAME_SIZE];
        int price;
        int size;
        int tt_price;
        };
    
    struct material new_material;
    
    printf("\nВведите название материала: ");
    scanf("%s", new_material.name);

    printf("Введите цену материала: ");
    scanf("%d", &new_material.price);

    printf("Введите количесво: ");
    scanf("%d", &new_material.size);

    new_material.tt_price = new_material.size * new_material.price;

    printf("\n\nНазвание: %s \n", new_material.name);
    printf("Цена: %d \n", new_material.price);
    printf("Количество: %d \n", new_material.size);
    printf("Стоимость: %d \n", new_material.tt_price);

    printf("\n\nВведи любую цифру: ");
    int x;
    scanf("%d", &x);
    }