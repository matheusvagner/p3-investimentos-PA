#include <iostream>
#include "investimento.h"

using namespace std;

int main() {
  tInvest invest;
  float capital, taxa, tempo;
  
  cout << "Informe o valor inicial da aplicacao: "; 
  cin >> capital;
  cout << "Informe a taxa anula em porcentagem: "; 
  cin >> taxa;
  cout << "Informe por quanto tempo o valor ficara aplicado: "; 
  cin >> tempo;

  invest.jSimples(capital, taxa, tempo);

}