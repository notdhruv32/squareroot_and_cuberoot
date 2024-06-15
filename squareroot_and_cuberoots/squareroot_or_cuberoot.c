#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int wot, nuum1, a = 1, b = 1, c = 1, result, enter, square, cubee;
    char pls, willu;
    system("cls");
    do
    {
    system("cls");
    printf("Enter 1 for calculating square roots/square and 2 for cubes/cuberoots: ");
    scanf("%d", &wot);

    switch (wot)
    {
    case 1:
    do
    {
    system("cls");
    printf("Enter 1 for squares and 2 for square roots: ");
    scanf("%d", &enter);
    if (enter == 1)
    {
        do
        {
        system("cls");
        printf("Enter the number of whome u wanna find square: ");
        scanf("%d", &square);
        system("cls");
        printf("%d X %d = %d", square, square, square * square);
        printf("\n-------------------------------\nDo you wanna continue[y/n]: ");
        scanf(" %c", &willu);
        } while (willu == 'y');//will u daal yaha par do while loop me
        printf("\nEnter to quit....");
        getch();
        exit(0);

    }
    else if(enter == 2) {
        do
    {
    a = 1;
    b = 1;
    result = 0;
    system("cls");
    printf("Enter the number of whome u wanna Find square roots: ");
    scanf("%d", &nuum1);
    while (nuum1 != result && a < 9999999)
    {
        result = a * b;
        a++;
        b++;
    }
    a = a-1;
    b = b-1;
    
    if (nuum1 == result)
    {
    printf("%d = %d X %d", result, a, b);
    printf("\n--------------------------------------------\nDo you wanna continue [y/n]: ");
    scanf(" %c", &pls);
    }
    else{
        printf("The number: %d isnt't a perfect square", nuum1);
        printf("\n--------------------------------------------\nDo you wanna continue [y/n]: ");
        scanf(" %c", &pls);
    }
    } while (pls == 'y');

    printf("Enter to quit");
    getch();
    exit(0);

    }
    } while (enter != 1 || enter != 2);
    break;
    
    
    
    case 2:
    do
    {
    system("cls");
    printf("Enter 1 for cubing and 2 for cube roots: ");
    scanf(" %d", &enter);
    if (enter == 1)
    {
        do
        {
        system("cls");
        printf("Enter the number of whome u wanna find Cube: ");
        scanf("%d", &cubee);
        system("cls");
        printf("%d X %d X %d = %d", cubee, cubee, cubee, cubee * cubee * cubee);
        printf("\n-------------------------------\nDo you wanna continue[y/n]: ");
        scanf(" %c", &willu);
        } while (willu == 'y');//will u daal yaha par do while loop me
        printf("\nEnter to quit....");
        getch();
        exit(0);
    }
    else if (enter == 2) {
        do
    {
    a = 1;
    b = 1;
    c = 1;
    result = 0;
    system("cls");
    printf("Enter the number of whome u wanna Find cube roots: ");
    scanf("%d", &nuum1);
    while (nuum1 != result && a < 9999999)
    {
        result = a * b * c;
        a++;
        b++;
        c++;
    }
    a = a-1;
    b = b-1;
    c = c-1;
    
    if (nuum1 == result)
    {
    printf("%d = %d X %d X %d", result, a, b, c);
    printf("\n--------------------------------------------\nDo you wanna continue [y/n]: ");
    scanf(" %c", &pls);
    }
    else{
        printf("The number: %d isnt't a perfect cube", nuum1);
        printf("\n--------------------------------------------\nDo you wanna continue [y/n]: ");
        scanf(" %c", &pls);
    }
    } while (pls == 'y');

    printf("Enter to quit");
    getch();
    exit(0);
    }
    } while (enter != 1 || enter != 2);
    
    

    }
    } while (enter != 1 || enter != 2);
    
    

    return 0;
}