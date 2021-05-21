#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int cont = 0, casos;
    double resultado, x, y;
    cin >> casos;
    while (cont < casos){
        cin >> x;
        cin >> y;
        if (y == 0){
            cout << "divisao impossivel" <<endl;
        }else{
            resultado = x / y;
            cout.precision(1);
            cout << fixed << resultado <<endl;
        }
        cont++;
    }
    return 0;
}
