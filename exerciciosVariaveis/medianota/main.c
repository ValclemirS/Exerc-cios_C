#include <stdio.h>

int main() {
    int n, n2, n3, n4, media;
    printf("Digite quatro notas separadas por espaços:\n");
    scanf("%d %d %d %d", &n, &n2, &n3, &n4);
    media = (n + n2 + n3 + n4) / 4;
    printf("A media e: %d\n", media);
    return 0;
}

  