/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
	a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
	b) Evite usar funções prontas, como, por exemplo, reverse;*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
std::string entrada ="Ola Mundo!";
std::string saida = entrada; 
int i, j, tamanho;
tamanho = entrada.size();
for(i=0, j=tamanho-1;i<tamanho-1,j>=0;i++,j--)
   { saida[j]=entrada[i];}
cout<<saida;
cout<<"\n";
    



return 0;
}

