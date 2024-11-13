#include <stdio.h>

int main() {
    int n1, n2, d1, d2, u1, u2, c1, c2, m1, m2, mi1, mi2, resultado;

    printf("Insira dois valores positivos entre 1 e 999: \n");
    scanf("%i %i", &n1, &n2);

    if (n1 < 1 || n1 > 999 || n2 < 1 || n2 > 999) {
        printf("Número inválido\n");
        return 1;
    }

    // Separa os algarismos de n1
    d1 = n1 / 100; // dezena
    u1 = (n1 / 10) % 10; // unidade
    c1 = n1 % 10; // centena

    // Separa os algarismos de n2
    d2 = n2 / 100; // dezena
    u2 = (n2 / 10) % 10; // unidade
    c2 = n2 % 10; // centena

    // Ordena os algarismos de n1
    if (d1 > u1 && d1 > c1) {
        m1 = d1;
        if (u1 > c1) {
            mi1 = u1;
            c1 = c1;
        } else {
            mi1 = c1;
            c1 = u1;
        }
    } else if (u1 > d1 && u1 > c1) {
        m1 = u1;
        if (d1 > c1) {
            mi1 = d1;
            c1 = c1;
        } else {
            mi1 = c1;
            c1 = d1;
        }
    } else {
        m1 = c1;
        if (d1 > u1) {
            mi1 = d1;
            c1 = u1;
        } else {
            mi1 = u1;
            c1 = d1;
        }
    }

    // Ordena os algarismos de n2
    if (d2 > u2 && d2 > c2) {
        m2 = d2;
        if (u2 > c2) {
            mi2 = u2;
            c2 = c2;
        } else {
            mi2 = c2;
            c2 = u2;
        }
    } else if (u2 > d2 && u2 > c2) {
        m2 = u2;
        if (d2 > c2) {
            mi2 = d2;
            c2 = c2;
        } else {
            mi2 = c2;
            c2 = d2;
        }
    } else {
        m2 = c2;
        if (d2 > u2) {
            mi2 = d2;
            c2 = u2;
        } else {
            mi2 = u2;
            c2 = d2;
        }
    }

    printf("n1: %i %i %i\n", m1, mi1, c1);
    printf("n2: %i %i %i\n", m2, mi2, c2);

    // Realiza a subtração entre o maior algarismo de n1 e de n2
    resultado = m1 - m2;
    printf("Subtração entre o maior algarismo de n1 e de n2: %i\n", resultado);

    return 0;
}