#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    int nuum1, a = 1, b = 1, result;
    char pls;
    do
    {
    a = 1;
    b = 1;
    result = 0;
    system("cls");
    printf("Enter the number for which u wanna Find roots: ");
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
    
    
    return 0;
}