#include <stdio.h>

int primo(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int prox_primo(int start) {
    start++;
    while (!primo(start)) {
        start++;
    }
    return start;
}

void decomposicao_num(int n) {
    if (n <= 2 || n % 2 != 0) {
        printf("A entrada deve ser um número par maior que 2.\n");
        return;
    }

    int primo1 = 2;
    int primo2 = n - primo1;

    while (!primo(primo2)) {
        prime1 = prox_primo(primo1);
        primo2 = n - primo1;
    }

    printf("%d = %d + %d\n", n, primo1, primo2);
}

int main() {
    int n;
    printf("Digite um número inteiro par maior que 2: ");
    scanf("%d", &n);
    decomposicao_num(n);
    return 0;
}

