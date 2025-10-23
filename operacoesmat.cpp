#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    int idade;
    double salario, altura;
    char genero;
    string nome;

    idade = 16;
    salario = 5000;
    altura = 1.65;
    genero = 'F';
    nome = "Ana Júlia Damasceno";

    cout << fixed << setprecision(2);
    cout << "IDADE" << idade << endl;
    cout << "SALARIO" << altura << endl;
    cout << "ALTURA" << altura << endl;
    cout << "GENERO" << genero << endl;
    cout << "NOME" << nome << endl;

    return 0; 
    
} 