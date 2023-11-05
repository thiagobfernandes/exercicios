/*Escreva um programa que compile e execute corretamente para cada uma das
questões abaixo. Todos os programas deverão ser comentados (nome, data e um breve
comentário da funcionalidade do programa).

1. Calcular a soma dos 100 primeiros nº naturais.
2. Calcular os divisores de um nº qualquer.
3. Para calcular o fatorial de um número qualquer.
4. Imprimir a tabuada de qualquer número n.
5. Ler um número e escreva se ele "é primo" ou "não é primo".  
*/


#include <iomanip>
#include <iostream>
using namespace std;
int main(){
    int i;
  int  soma=0;
  int qtde=0;
    for ( i = 1; i <= 100; i++)
    {
       qtde+=1;
       soma+=i;
    }
    cout <<"soma dos 100 primeiros numeros naturais  " <<  soma <<endl;

//calcular divisores de um numero qualquer
int n;
int divisor;

cout << "digite um numero qualquer " << endl;
cin >>n;

for ( i = 1; i <= n; i++)
{
    if ( n % i==0)
    {
     divisor=i;
     cout << "os divisores do numero : " << n << "---" << divisor <<endl;
    }
    
}

//fatorial
int fatorial=1;
for ( i = 1; i <= n; i++)
{
    fatorial*=i;    
}
cout << "fatorial do numero " << fatorial << endl;

//tabuada

int tabuada;
int j;
for ( j = 1; j <= n; j++)
{
   tabuada= n * j;
    cout << n << " x " << j << " = " << tabuada << endl;
}

//numero primo
for ( i = 1; i < n; i++)
{
   if (i % 2==0)
   {
    cout << " o numero  " << i << " nao e primo " << endl;
   }
   else{
    cout << " o numero  " << i << " primo " <<endl;
   }
}
system("pause");

return 0;

    }

