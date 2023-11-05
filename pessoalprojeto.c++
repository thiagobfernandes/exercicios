#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//programa princiapl


int main (){
float metros;
void tinta(float met );
void concreto ( float metross, float espessura);
float metros2, espessuraa;
void massaacrilica (float m, float e);
void linha();
void interacao();
void selecao (int valor);
int selecionar;


cout << setprecision (2) << fixed;
 interacao();
cout << " digite aqui a sua opçao " << endl;
cin >> selecionar;
selecao(selecionar);

system("pause");
return 0;


}

//tinta
void tinta(float met ){
    float mtinta;
    mtinta=met * 66.27;
    float ltinta;
    ltinta= mtinta /1000;
    cout << " e necessario " << mtinta << " ML  \n para pintar " << met << " quadrados " <<endl;
    cout << endl;
    cout << " e necessario " << ltinta <<"L \n para pintar " << met << " quadrados " << endl;


}
//concreto
void concreto ( float metross, float espessura){
    // cada saco de cimento 38 litros
    // cada 10 metrosquadrados 1 saco de cimentos
    //Quantidade de concreto (em litros por metro linear) = 1 metro x 0,1 metro x 1000 = 100 litros por metro linear
    //1 metro x 0,1 metro x 1000 = 100 litros 
    float metr;
    metr= metross * espessura * 1000;
    float converter;
    converter=metr/38;
    cout << " voce precisa de " << converter << " sacos de cimentos para " << metross << " metros" << endl;;

}


//calcular massa
void massaacrilica (float m, float e){
 float densidade;
 float volume;
 float massa;
 densidade=1700.0;
 
 volume=m * e;
 
 massa= volume * densidade;
 cout << " para cobrir um para de " << m << " metros quadrados com espessura de " << e * 100 << "centimetros \n voce precisaria de " << massa << " kg desse material " << endl;
}



//menu
void selecao (int valor){
if (valor==1)
{
    float metros;
 cout << " digite quantos metros quadrado deseja pintar " << endl;
cin >> metros;
 tinta(metros);
}
else if (valor==2)
{
   float metros2;
   float espessuraa;
 cout << " digite o quantos metros deseja concretar " << endl;
cin  >> metros2;
cout << " digite a espessura da onde ira concretar " << endl;
cin >> espessuraa;
concreto(metros2,espessuraa);
}
else if (valor==3)
{
    float m, e;
    float densidade;
 float volume;
 float massa;
 cout << " digite os metros quadrados aqui " << endl;
 cin >> m;

 cout << " digite a espessura aqui " << endl;
 cin >> e;
massaacrilica(m,e);

}






}

void linha (){
    cout << endl;
}

void interacao (){
cout << "1- calcular quantidade de tinta por metro quadrado " << endl;
cout << "2- calcular quantidade de concreto por metro, e espessura " << endl;
cout << "3- calcular quantidade de massa acrilica por metro e densidade " << endl;

}