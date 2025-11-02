#include <stdio.h>
#include <stdlib.h>

int main() {    	
    int n, v[10000], count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] < 0 || v[i] > 1) return 0;
    }
    for (int i = 0; i < n; i++) {
        if ((i + 2) < n && v[i] == 1 && v[i + 1] == 0 && v[i + 2] == 0) count++;
    }
    printf("%d\n", count);
    return 0;
}
