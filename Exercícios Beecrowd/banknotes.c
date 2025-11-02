#include <stdio.h>
 
int notas100(int m) {
    return m / 100;
}

int notas50(int m) {
    int n = m % 100;
    return n / 50;
}

int notas20(int m) {
    int n = m % 100;
    int o = n % 50;
    return o / 20;
}

int notas10(int m) {
    int n = m % 100;
    int o = n % 50;
    int p = o % 20;
    return p / 10;
}

int notas5(int m) {
    int n = m % 100;
    int o = n % 50;
    int p = o % 20;
    int q = p % 10;
    return q / 5;
}

int notas2(int m) {
    int n = m % 100;
    int o = n % 50;
    int p = o % 20;
    int q = p % 10;
    int r = q % 5;
    return r / 2;
}

int notas1(int m) {
    int n = m % 100;
    int o = n % 50;
    int p = o % 20;
    int q = p % 10;
    int r = q % 5;
    int s = r % 2;
    return s;
}

int main() {
    int money;
    scanf("%d", &money);
    printf("%d\n", money);
    printf("%d nota(s) de R$ 100,00\n", notas100(money));
    printf("%d nota(s) de R$ 50,00\n", notas50(money));
    printf("%d nota(s) de R$ 20,00\n", notas20(money));
    printf("%d nota(s) de R$ 10,00\n", notas10(money));
    printf("%d nota(s) de R$ 5,00\n", notas5(money));
    printf("%d nota(s) de R$ 2,00\n", notas2(money));
    printf("%d nota(s) de R$ 1,00\n", notas1(money));
    return 0;
}