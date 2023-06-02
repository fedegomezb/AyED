#include <iostream>
#include <iomanip>
using namespace std;

int esPar (int numero)
{
    // funcion para potencia de (-1)
    if (numero%2==0)
        return 1;
    else
        return -1;
}

double leibniz (int iteraciones)
{
    double serie = 1.0;
    int i;

    for (i=1; i < iteraciones; i++)
    {
        serie += ((esPar(i)) / ((2.0*i)+(1.0)));
    }

    return 4*serie;
}

int main()
{
    double valor_pi;
    valor_pi = leibniz(1500000);
    cout << "El valor de pi es : " << setprecision(8) << valor_pi << endl; 
    
}