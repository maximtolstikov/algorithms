//
//  main.c
//  Homework1
//
//  Created by Maxim Tolstikov on 30/01/2019.
//  Copyright © 2019 Maxim Tolstikov. All rights reserved.
//

#include <stdio.h>
#include "math.h"

void solution1(void);
void solution2(void);
void solution3(void);
void solution4(void);
void menu(void);


//1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.
void solution1(void)
{
    double hight, weight;
    double indexWeightBody;
    
    printf("Enter hight (integer number): ");
    scanf("%lf", &hight);
    printf("Enter weight (integer number): ");
    scanf("%lf", &weight);
    
    indexWeightBody = weight / pow((hight/100), 2);
    
    printf("\n");
    printf("You index wieght body equal: %lf \n", indexWeightBody);
    printf("\n");
}


//2. Найти максимальное из четырех чисел. Массивы не использовать.
void solution2()
{
    int a, b, c, d;
    int i;
    
    printf("Enter four integer number from 1 to 9 without whitespace: \n");
    scanf("%1u%1u%1u%1u", &a, &b, &c, &d);
    
    i = 0;
    while (i < 1) {
        if (a >= b) {
            if (a >= c){
                if (a >= d) {
                    i = a;
                    break;
                } else {
                    i = d;
                    break;
                }
            } else {
                a = c;
                continue;
            }
        } else {
            a = b;
            continue;
        }
    }
    
    printf("\n");
    printf("Max from you number is: %1u \n", i);
    printf("\n");
}


//8. Ввести a и b и вывести квадраты и кубы чисел от a до b.
void solution3()
{
    int a, b, i;
    
    printf("Enter for any two integer number from 1 to 9 without whitespace: \n");
    scanf("%1u%1u", &a, &b);
    
    if (a > b) {
        i = a;
        a = b;
        b = i;
    }
    
    for (i = a; i < b + 1; i++ ) {
        
        a = pow(i, 2);
        printf("Square of %1u: %1u\n", i, a);
        a = pow(i, 3);
        printf("Cube of %1u: %1u\n", i, a);
    }
}


// 4. Программа обмена значениями двух целочисленных переменных без третьей переменной.
void solution4()
{
    int a = 2, b = 5;
    
    printf("A %d: \n", a);
    printf("B %d: \n", b);
    
    a = a ^ b;
    b = b ^ a;
    a = a ^ b;
    
    printf("A %d: \n", a);
    printf("B %d: \n", b);
}



int main(int argc, const char * argv[])
{
    int sel = 0;
    do
    {
        menu();
        scanf("%i", &sel);
        switch (sel) {
            case 1:
                solution1();
                break;
            case 2:
                solution2();
                break;
            case 3:
                solution3();
                break;
            case 4:
                solution4();
                break;
            case 0:
                printf("Bye-bye!");
                break;
            default:
                printf("Wrong selected!");
                break;
        }
    } while (sel != 0);
    return 0;
}

void menu()
{
    printf("1 - task1\n");
    printf("2 - task2\n");
    printf("3 - task3\n");
    printf("4 - task4\n");
    printf("0 - exit\n");
    printf(" \n");
}
