#ifndef INVESTIMENTO_H
#define INVESTIMENTO_H
#include <math.h>

using namespace std;

struct tInvest{
  
  void jSimples(float capital, float taxa, float tempo){
    float montante = capital * (1 + (taxa) * tempo);
    cout << "\n\n  Montante aplicado a juros simples: R$" << montante << endl;
  }
  void jComposto(float capital, float taxa, float tempo){
    float montante = capital * pow(1+(taxa),(tempo));
    cout << "Montante aplicado a juros compostos: R$" << montante << endl;
  }
  void Converte(float taxa){
    float taxaMensal = ((pow((1+(taxa)), 1.0/12)) - 1)*100;
    cout << "\t\tTaxa convertida para mensal: " << taxaMensal  << "%" << endl;
  }
};
#endif