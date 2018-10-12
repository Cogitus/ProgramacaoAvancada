#include <iostream>

using namespace std;

int main()
{
    int numeroCasas = 50;
     int* const ponteiro_numeroCasas = &numeroCasas; //declaração de um ponteiro constante.

    cout << " numero casas = " << *ponteiro_numeroCasas << endl;
    cout << " endereço numero de casas = " << ponteiro_numeroCasas << endl;

    ponteiro_numeroCasas++; //vai dar erro porque ponteiro_numeroCasas só pode apontar
                            //para um mesmo endereço, apesar de que eu posso modifcar
                            //o que está sendo apontado por ponteiro_numeroCasas. Isto é:
                            //posso modificar o conteúdo do ponteiro, mas não posso
                            //modificar para onde o mesmo aponta!

    cout << " numero casas = " << *ponteiro_numeroCasas << endl;
    cout << " endereço numero de casas = " << ponteiro_numeroCasas << endl;

    return 0;
}

/*
repara na sintaxe de declaração de um ponteiro constante!

<tipo de dado> * consta (<nome do ponteiro>) = &(<nome da variável para onde desejo apontar>);

NOTAS:
- Não posso primerio declarar o ponteiro constante e depois lhe atribuir um endereço,
afinal seu funcionamento é muitíssimo parecido com o funcionamento da atribuição por
referência.

-eu declaro que tenho um ponteiro para uma certa variável, e que esse ponteiro é constante.
Essa é minha ordem de declaração! Caso fizesse "int const* ponteiro = &endereço;" estaria
dizendo basicamente que eu tenho um ponteiro para um tipo inteiro constante, isto é,
eu poderia modificar o meu endereço do ponteiro tranquilamenete, mas não poderia modificar
o tipo de dado para que o meu ponteiro está apontando, afinal, seria, em teoria, para um
tipo constante de dado!


*/
