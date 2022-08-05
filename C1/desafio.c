#include <stdio.h>

int main(){
    int x;
    int y;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);
    printf("%d X %d = %d", x, y, x * y);
}