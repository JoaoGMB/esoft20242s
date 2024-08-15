#include <stdio.h>

int par_impar(int num) {
    if (num % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int divisivel(int num, int div) {
    if (div != 0 && num % div == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int num, div;
    printf("Digite 2 nunmeros (num div):\n");
    scanf("%d %d", &num, &div);

    if (divisivel(num, div)) {
        printf("Divisivel\n");
    } else {
        printf("Nao divisivel\n");
    }

    return 0;
}

