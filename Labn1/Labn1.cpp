#include <stdio.h>

int main()
{
    float d, x, y; //Переменные
    do
    {
        printf("Input d : "); //Запрос и ввод координат квадрата
        scanf_s("%f", &d);
        if (d==0)
        {
            printf("Wrong\n");
        }
        else
        {
            ;
        }
    } while (d == 0); 

        printf("Input x and y : \n"); // Запрос и ввод координат точки
        scanf_s("%f%f", &x, &y);
        if (d > 0) // проверка координат d
        {
           if (0 < x && x < d && 0 < y && y < d && x < y) // условие при котором точка в зоне А
            {
                printf("\n Dot in A zone");

            }
           else if (0 < x && x < d && 0 > y && y > -d) // Условие при котором точка в зоне В
           {
               printf("\n Dot in B zone");
           }
           else 
            {
                printf("\n Dot in no zone");
            }
        }
        
        else
        {
            if (0 < x && x < -d && 0 < y && y < -d && x < y) // условие при котором точка в зоне А
            {
                printf("\n Dot in A zone");

            }
            else if (0 < x && x < -d && 0 > y&& y > d) // Условие при котором точка в зоне В
            
            {
                printf("\n Dot in B zone");
            }
            else
            {
                printf("\n Dot in no zone");
            }
        }
    
    return 0;
}