/* Exercício 2: Manipulação de variáveis de tipo caractere e explorando o uso de cout.
● Os caracteres numéricos aparecem na tabela ASCII, e em outras, numa sequência que começa pelo caractere ‘0’ até o caractere ‘9’. 
As variáveis de tipo caractere podem ser tratadas também como valores numéricos. Com base nestas afirmações desenvolva um programa em C++ que:
a. Imprima na tela, utilizando cout, cada um dos caracteres numéricos e seu correspondente código numérico. Como modificar o comportamento do cout para imprimir um objeto de tipo char como caractere e como número?
i. Exemplo: 
           ‘0’ - 48
           ‘1’ - 49
           …
           ‘9’ - 57 */
          
#include <iostream>
using namespace std;

int main(){

    char ch0 = '0';
    char ch1 = '1';
    char ch2 = '2';
    char ch3 = '3';
    char ch4 = '4';
    char ch5 = '5';
    char ch6 = '6';
    char ch7 = '7';
    char ch8 = '8';
    char ch9 = '9';
    
    cout << "'" << ch0 << "' - " << (int)ch0 << endl;
    cout << "'" << ch1 << "' - " << (int)ch1 << endl;
    cout << "'" << ch2 << "' - " << (int)ch2 << endl;
    cout << "'" << ch3 << "' - " << (int)ch3 << endl;
    cout << "'" << ch4 << "' - " << (int)ch4 << endl;
    cout << "'" << ch5 << "' - " << (int)ch5 << endl;
    cout << "'" << ch6 << "' - " << (int)ch6 << endl;
    cout << "'" << ch7 << "' - " << (int)ch7 << endl;
    cout << "'" << ch8 << "' - " << (int)ch8 << endl;
    cout << "'" << ch9 << "' - " << (int)ch9 << endl;

    return 0 ;
}