#include <stdio.h>

int main() {
    float Notas[] = {6.5, 7.1, 6, 5, 8.1};

    printf("Notas = {");

    for(int i = 0; i < 5; i++) {
        printf("%.1f", Notas[i]);

        if(i < 4) {
            printf(",");
        }
    }

    printf("}");

    return 0;
}