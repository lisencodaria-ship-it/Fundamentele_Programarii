Exercitiul 1: Conversie de temperatură
Scrieți un program care citește de la tastatură o temperatură exprimată în grade Celsius și afișează valoarea corespunzătoare în grade Fahrenheit, după formula F=C9/5+32.
Cerințe:
Declarați variabilele cu tipul potrivit pentru valori reale.
Citiți valoarea folosind scanf și specificatorul de format corect.
Afișați rezultatul cu exact două zecimale.
Afișați suplimentar dimensiunea în octeți a tipurilor int, float și double, obținută cu operatorul sizeof.
#include <stdio.h>

int main(void)
{
    double c, f;

    printf("Introduceti temperatura (C): ");
    scanf("%lf", &c);

    f = c * 9.0 / 5.0 + 32.0;

    printf("%.2f C = %.2f F\n", c, f);
    printf("int    = %zu octeti\n", sizeof(int));
    printf("float  = %zu octeti\n", sizeof(float));
    printf("double = %zu octeti\n", sizeof(double));

    return 0;
}
