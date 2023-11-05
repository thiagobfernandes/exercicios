//1. Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. 
//Ao final da leitura o programa deverá imprimir o número da linha que contém o menor dentre todos os números lidos.


#include <iostream>
using namespace std;
void matr (int m[4][4]);
void monstrarmatriz(int m2[4][4]);

int main (){
int i;
int j;
int matriz[4][4];


for ( i = 0; i < 4; i++)
{
    for ( j = 0; j < 4; j++)
    {
        cout << " digite os elementos da linha " << i+1 << " e da coluna  " << j+1 << endl;
        cin >> matriz[i][j];
    }
    
}
matr(matriz);
monstrarmatriz(matriz);
cin.get();

return 0;

}

//funçao menor;
void matr (int m[4][4]){
    int i;
    int j;
    int men;
    int menl;
    men=1000000;
    menl=-1;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (m[i][j] < men)
            {
                men=m[i][j];
                menl=i;
            }
            
        }
        
    }
   cout << " menor numero " <<men ;
   cout << " linha  " << menl + 1 << endl;

}
//mostrar matriz;
void monstrarmatriz(int m2[4][4]){
int i;
int j;
for ( i = 0; i < 4; i++)
{
for ( j = 0; j < 4; j++)
{
    cout << m2[i][j] << " ";
}
cout << endl;
}


}