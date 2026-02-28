#include <iostream>
using namespace std;
int main(void){
    int a, b;

    cout << "me diga dois numeros: ";
    cin >> a >> b;
    if (a == b){
        cout << a << " é igual a " << b << "\n";
    } else{
        if (a>b){
            cout << a << " é maior que " << b << "\n";
        } else{
            cout << a << " não é maior que " << b << "\n";
        }
    }





    return 0;
}