//referenceAliasTest.cpp -- defining and using a reference.
#include <iostream>

int main () {
    using namespace std;

    int rats = 101;
    int& rodents = rats; //rodents is a reference to rats, i.e, it is another name
                         //to the same adress and content.
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    rodents++;

    cout  << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    //some implementations require casting the following addresses to type
    //unsigned.

    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;


    return 0;
}

/*
NOTAS:
- o operador na dacleração do tipo da variável não se refere ao endereço da variável.
Mas sim declara uma variável chamada rodents do tipo int& (int &). Isto é, uma referência
para uma variável int.

-O uso comum do operador de referência é como o parâmetro de funções, pois assim conseguimos
trabalhar na função sem precisar criar cópias na memória do valor passado como parâmetro da
função!

-NÃO POSSO PRIMEIRO DECLARAR MINHA REFERÊNCIA PARA DEPOIS EU ATRIBUÍ-LA UM VALOR.
Ex.:
int rat;
int& rodent;

rodent = rat; //Não, eu não posso fazer isso.


*/
