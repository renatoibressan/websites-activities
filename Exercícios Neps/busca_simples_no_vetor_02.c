#include <stdio.h>
#include <stdlib.h>

int main() {
    int v[10], x, i, count = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    scanf("%d", &x);
    for (i = 0; i < 10; i++) {
        if (x == v[i]) count++;
    }
    if (count == 0) {
        printf("Mia x\n");
    } else {
        printf("%d\n", count);
        for (i = 0; i < 10; i++) {
            if (x == v[i]) printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}