/*03. Faça um programa que peça um número inteiro positivo 'n' para o usuário e imprima um quadrado de lado
 'n' preenchido de hashtags. Por exemplo, para n=4, deve aparecer na tela:
####
####
####
####*/

#include <iostream>
using namespace std;
int main () {
void quadrado(int n);

int n;
cout << "digite o valor de n " << endl;
cin >> n;
quadrado(n);

return 0;

}


// funçao;;

void quadrado(int n){
 int i;
 int j;
  string matriz[100][100];
 
 for(i=0; i < n; i++){
    for (j=0; j < n; j++){
       matriz[i][j]= "#";
       cout << matriz[i][j];


    }
    cout << endl;
 }


}


