#include <iostream>
#include <iomanip>
#include "investimento.h"

using namespace std;

int main() {
  cout << fixed << setprecision(2);
  tInvest invest;
  float capital, taxa, tempo;
  int opcao;
  
  cout << "Informe o valor inicial da aplicacao: "; 
  cin >> capital;
  cout << "Informe a taxa anula em porcentagem: "; 
  cin >> taxa;
  cout << "Informe por quanto tempo o valor ficara aplicado: "; 
  cin >> tempo;
  cout << "Digite 1 para juro simples e 2 para juro composto: ";
  cin >> opcao;

  if (opcao == 1){
    invest.jSimples(capital, taxa, tempo);
  }
  else if (opcao == 2){
    invest.jComposto(capital, taxa, tempo);
  }

  

  
}
