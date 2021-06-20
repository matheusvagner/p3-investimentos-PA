#include <iostream>
#include <iomanip>
#include "investimento.h"

using namespace std;

int main() {
  
  tInvest invest;
  float capital, taxa, tempo;
  int opcao;
  
  cout << "Informe o valor inicial da aplicacao: "; 
  cin >> capital;
  cout << "Informe a taxa anual em porcentagem: "; 
  cin >> taxa;
  cout << "Informe por quanto tempo o valor ficara aplicado: "; 
  cin >> tempo;
  cout << "Digite 1 para juros simples e 2 para juros compostos ou 0 para converter a taxa: ";
  cin >> opcao;

  cout << fixed << setprecision(2);
  taxa = taxa/100;
  if (opcao == 1){
    invest.jSimples(capital, taxa, tempo);
  }
  else if (opcao == 2){
    invest.jComposto(capital, taxa, tempo);
  }
  else if (opcao == 0){
    cout << fixed << setprecision(4);
    invest.Converte(taxa);
  }
  else{
    cout << "OPCAO INCORRETA. PROGRAMA ENCESSADO." << endl;
  }
}
