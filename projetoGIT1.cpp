#include <iostream>
#include <string>
using namespace std;

/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
    int cont, i;
    for(i=0;i<texto.length();i++)
        if(texto[i]==letra)
            cont++;
    return cont;
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
void substituirLetra(char letra1,char letra2, string texto)
{
    int i;
    for(i=0;i<texto.length();i++)
        if(texto[i]==letra1)
            texto[i]==letra2;
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
    int cont, i;
    for(i=0;i<texto.length();i++)
        if(texto[i]==palavra)
            cont++;
    return cont;
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
    int i;
    for(i=0;i<texto.length();i++)
        if(texto[i]==palavra1)
            texto[i]==palavra2;
}

int main(){
    int contP, contL;
    char letra, letra1, letra2;
    string texto, palavra, palavra1, palavra2;
	cout << "Entre com o texto para fazer o teste:";
    cin>>texto;
    contP=contaPalavras(palavra, texto);
    contL=contaLetras(letra, texto);
    substituirLetra(letra1, letra2, texto);
    substituirPalavras( palavra1, palavra2, texto);



	return 0;
}
