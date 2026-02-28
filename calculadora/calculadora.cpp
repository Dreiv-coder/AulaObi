#include <iostream>
using namespace std;

int main(void){
    double a, b;
    int temp, res;
    cout << "Qual a operação que deseja realizar ? soma, subtração, multiplicação, divisão são respectivamente 1, 2, 3, 4 \n";
    cin >> temp;
    cout << "Quais os números?\n";
    cin >> a >> b;
    if (temp == 1){
        cout << a+b << "\n";
    }else if (temp == 2){
        cout << a-b << "\n";
    }else if (temp == 3){
        cout << a*b << "\n";
    }else if (temp == 4){
        cout << a/b << "\n";
    }
}