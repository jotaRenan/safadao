#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class safaDown {
  private:
    int mes, dia;
    float ano;
    char nome[20];
  public:
    safaDown(int Dia, int Mes, float Ano, char Nome[]) : mes(Mes), dia(Dia), ano(Ano) {
      strcpy(nome, Nome);
    }
    int somatorio(int);
    void wesley_safadao();
};

int safaDown::somatorio(int mes) {
  int soma=0;
  for (int i=mes; i>=1; i--)
    soma+=i;
  return soma;
}


void safaDown::wesley_safadao(){
  float safadeza, anjo;

  safadeza = somatorio(mes)+(ano/100)*(50-dia);
  if (safadeza > 100) {
    float resto = safadeza-100;
    safadeza-= resto*2;
  }
  anjo = (100 - safadeza);

  cout << nome << ", voce eh " << safadeza << "% safadao e " << anjo << "% angelical!" << endl;
}

main(void) {

  safaDown estudantes[] = {
     safaDown(29,  9, 99, "Joao"),
     safaDown(05, 06, 00, "Paula"),
     safaDown(01, 04, 00, "Morato"),
     safaDown(17, 07, 00, "Bruno"),
     safaDown(01, 12, 99, "Erick"),
     safaDown(27, 07, 00, "Gabriel Calouro"),
     safaDown(23, 03, 00, "Haddad"),
     safaDown(10, 06, 99, "Victor"),
     safaDown(24, 11, 00, "Augusto"),
  };


  for (int i=0; i<7; i++)
    estudantes[i].wesley_safadao();

}
