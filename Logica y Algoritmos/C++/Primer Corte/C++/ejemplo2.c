#include <stdlib.h>

int main()
{
    int num1, num2, resp = 0;
    printf("Dime un numero");
    scanf("%d", &num1);
    printf("Dime otro numero");
    scanf("%d", &num2);
    resp = num1 + num2;
    printf("La suma es %d",resp);
    
    return 0;
}
