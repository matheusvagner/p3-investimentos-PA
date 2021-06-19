#ifndef INVESTIMENTO_H
#define INVESTIMENTO_H

using namespace std;

struct tInvest{
  void jSimples(float capital, float taxa, float tempo){
    float montante = capital + (capital * (taxa/100) * tempo);
    cout << "Montante aplicado a juros simples: R$" << montante;
  }
};
#endif