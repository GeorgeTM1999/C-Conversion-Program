#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{
    int celsius = 0;
    int farenheit = 0;
    int kg = 0;
    int lbs = 0;
    int choice = 0;
    while (true)
    {
        printf("1) Celsius to Farenheit\n");
        printf("2) Farenheit to Celsius\n");
        printf("3) KG to LBS\n");
        printf("4) LBS to KG\n");
        printf("5) Quit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Insert Celsius Number ");
                scanf("%d", &celsius);
                return celsius*1.8+32;
                break;

            case 2:
                printf("Insert Farenheit Number ");
                scanf("%d", &farenheit);
                return (farenheit-32) *5 /9;
                break;

            case 3:
                printf("Insert KG Number ");
                scanf("%d", &kg);
                return kg*2.205;
                break;

            case 4:
                printf("Insert LBS Number ");
                scanf("%d", &lbs);
                return lbs/2.205;
                break;

            case 5:
                exit(0);
        }
    }

}
