/*Exercício 3: Manipulação de variáveis de tipo inteiro, explorando os limites.
● Durante a aula foi apresentado o tipo de dado int e suas variações, que permitem representar um subconjunto dos números inteiros. Sobre estes
tipos de dados crie uma aplicação que: 

a. Sobre o tipo int identifique qual o menor e o maior valor que pode ser representado por uma variável deste tipo. Mostre esta informação na tela.*/

#include <iostream> 
#include <limits>
using namespace std;

int main()
{

    int maiorInteiroComSinal = 0x7FFFFFFF;
    
    cout << "Maior inteiro com sinal : " << maiorInteiroComSinal << endl;
    cout << "Menor inteiro com sinal : " << (maiorInteiroComSinal+1) << endl;

}