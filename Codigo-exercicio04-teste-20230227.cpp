/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*4) Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

	SP – R$67.836,43
	RJ – R$36.678,66
	MG – R$29.229,88
	ES – R$27.165,48
	Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve dentro do valor total mensal da distribuidora.*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
using std::cout; using std::endl;
using std::setprecision; using std::fixed;
int main()
{
  float SP, RJ, MG, ES, Outros, Total;

SP = 67836,43;
RJ = 36678,66;
MG = 29229,88;
ES = 27165,48;
Outros = 19849,53;
Total = SP + RJ + MG + ES + Outros;
cout<<"\n ";
cout<<"O percentual de representacao de SP dentro do valor total foi de:               ";
cout << setprecision(2) << fixed << (SP/Total)*100 << "%\n ";
cout<<"O percentual de representacao de RJ dentro do valor total foi de:               ";
cout << setprecision(2) << fixed << (RJ/Total)*100 << "%\n ";
cout<<"O percentual de representacao de MG dentro do valor total foi de:               ";
cout << setprecision(2) << fixed << (MG/Total)*100 << "%\n ";
cout<<"O percentual de representacao de ES dentro do valor total foi de:               ";
cout << setprecision(2) << fixed << (ES/Total)*100 << "%\n ";
cout<<"O percentual de representacao dos Outros estados dentro do valor total foi de:  ";
cout << setprecision(2) << fixed << (Outros/Total)*100 << "%\n ";
return 0;
}

