/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
#include <fstream>
#include <jsoncpp/json/json.h>

using namespace std; 
struct Item{ int dia, float valor; }; 

int main() { 
//Coleta dos dados do arquivo JSON
  vector<Item> containeritens;

  ifstream ifs("Arquivo.json");
  Json::Reader reader; 
  Json::Value obj;

  reader.parse(ifs, obj); 

  const Json::Value& itens = obj["Itens"]; 

  for (int i = 0; i < itens.size(); i++).{
    Item item;
    item.id = itens[i]["dia"].asUInt();
   
    item.valor = itens[i]["valor"].asUInt();

    contairnerItens.pushback(item);
  }
  
 
     vetor Item; float maiorValor=0, menorValor=0, media=0 ;  int a, i; 
      
      maiorValor=vetor[0];
      menorValor=vetor[0];
        
  //inicialização do vetor faturamento
    for(i=0;i<31;i++){
        vetor[i]=0;
      }
//carregamento do vetor faturamento com o conteudo vetor Item.valor
    for(i=0;i<31;i++){
        vetor[i] = Item[i].valor;
        media = media + vetor[i];
      }
//busca do maior valor       
      for(i = 0; i < 7; i++){
    if(vetor[i] > maiorValor){
      maiorValor = vetor[i];
    }
//busca do menor valor
    if (vetor[i] < menorValor) {
      menorValor = vetor[i];
    }
  }
//saida de dados  
      cout<<"Maior valor no Mês: ";
      cout<<maiorValor;
      cout<<" \n";  
      cout<<"Menor valor no Mês: ";
      cout<<menorValor;
      cout<<"  \n";
      cout<<"A Fatura Média do Mês foi de : ";
      cout<<media/31:00;
      cout<<" \n";  
        

      }
      
      
      
return 0;
}
