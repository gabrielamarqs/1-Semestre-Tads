#include <stdio.h>
int main () {
    float a,b,c,notFin;
    printf ("Informe a primeira nota=");
    scanf ("%f",&a);
    printf ("Informe a segunda nota=");
    scanf ("%f",&b);
    printf ("Informe a terceira nota=");
    scanf ("%f",&c);
    notFin=(a+b+c)/3;
    printf ("A media aritmetica das notas do aluno é de= %.1f", notFin);
    return 0;
}
