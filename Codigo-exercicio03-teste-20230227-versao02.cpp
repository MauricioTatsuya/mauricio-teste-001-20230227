#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    vector<int> faturamento(31); // vetor para armazenar faturamento diário
    ifstream arquivo("faturamento.txt"); // abre o arquivo "faturamento.txt"
    if (arquivo.is_open()) { // verifica se o arquivo foi aberto com sucesso
        for (int i = 0; i < 31; i++) {
            arquivo >> faturamento[i]; // lê o valor de faturamento do arquivo e armazena no vetor
        }
        arquivo.close(); // fecha o arquivo
        // imprime os valores de faturamento diário armazenados no vetor
        for (int i = 0; i < 31; i++) {
            cout << "Dia " << i+1 << ": " << faturamento[i] << endl;
        }
    }
    else {
        cout << "Não foi possível abrir o arquivo." << endl;
    }
    //busca do maior e do menor valor diferente de 0 e da media de faturamento no mes
    int maior, menor, soma;
    //inicializacao das variaveis auxiliares
    soma = 0;
    for (int i=0;i<31;i++){
        soma = soma + faturamento[i];
      if(i==0){maior=faturamento[i]; menor=faturamento[i];}
      if(faturamento[i]>maior){
        maior=faturamento[i];
      }//maior parcial
      else{
        if(faturamento[i]<menor && faturamento[i] > 0){
            menor=faturamento[i];
        }//menor parcial
      }
    }//impressao final do maior e menor valor (diferente de 0) e da media de Faturamenot do Mês
    cout<<"\n O maior valor faturado é : ";
    cout<<maior;
    cout<<"\n e o menor valor faturado sem ser 0 é : ";
    cout<<menor;
    cout<<"\n E a media do Faturamento do mês foi de : ";
    cout<<soma/31;
    cout<<"\n";
    
    return 0;
}
