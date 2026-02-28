#include <iostream>
using namespace std;

int main(void){
    int nota, idade;

    cout << "Qual a sua idade? ";
    cin >> idade;

    cout << "Qual a nota da sua prova? ";
    cin >> nota;

    if (idade>18){
        cout << "Voce é da modalidade Senior";
        return 0;
    }
    if (nota < 0 || nota > 100){
        cout << "Nota incorreta";
        return 0;
    }
    if (idade<=18 && nota >= 80){
        cout << "Voce recebeu uma medalha na OBI";
        return 0;
    }
    cout << "infelizmente você não ganhou uma medalha na OBI";
    return 0;

}