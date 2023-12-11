/*
Problema 5
Elabore um programa que calcule a área de um trapézio.*/ 
int main() {
    float area, b,B,altura;
    printf("Digite a base maior do trapezio: ");
    scanf("%f", &B);
    printf("Digite a base menor do trapezio ");
    scanf("%f", &b);
    printf("Digite a altura do trapezio ");
    scanf("%f", &altura);
    area=((B+b)*altura)/2;
    printf("O trapezio tem uma area de %.1f m2\n",area);
    return 0;
}