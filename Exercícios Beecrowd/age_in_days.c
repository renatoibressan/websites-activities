#include <stdio.h>
 
int main() {
    int x;
    scanf("%d", &x);
    int ano = x / 365;
    int mes = (x - (ano * 365)) / 30;
    int dia = x - (ano * 365) - (mes * 30);
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    return 0;
}