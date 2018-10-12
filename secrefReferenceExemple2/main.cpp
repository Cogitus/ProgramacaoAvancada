//screfReferenceExemple2.cpp -- defining and using a reference
#include <iostream>

int main () {
    using namespace std;

    int rats = 101;
    int & rodents = rats;   //rodents is a reference.

    cout << "rats = " << rats;
    cout <<", rodents = " << rodents << endl;

    cout << "rats address = " << &rats;
    cout << ", rodents adress = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;      //can we change the reference?

    //let's dicover!
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "bunnies addres = " << &bunnies;
    cout << ", rodents address = " << &rodents << endl;


    return EXIT_SUCCESS;
}

/*
CONCLUSÃO:
    Eu não posso definir uma referência através de atribuição que não seja no momento
de minha declaração. Caso tente fazer isso depois da declaração da referencia, eu estarei
apenas trabalhando com a variável referenciada de uma forma que eu não manipule ela
explicitamente, mas sim através de um terceiro.
    Na declarção rodents = bunnies; eu não estou modificando a referência para que rodents
inicialmente fazia, mas estou modificando o valor de sua referência através do nome
rodents, isto é, resumidamente estou fazendo a seguinte afirmativa:

rats = bunnies;

    Esse é motivo, por exemplo, de no final do código verificarmos que rats e rodents conti-
nuam compartilhando o mesmo endereço de memória, e não o endereço da variável bunnies!
*/
