#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <unistd.h>
using namespace std;
//programa principal
struct pers
{
    string nome;
    int forca;
    int vida;
    int especiais;
    
};
struct monstro
{
    string nome;
    int ataque;
    int vida;
    int especial;
};


int main (){
void linha();
void linha2();
void listaper();
void selecionarr( );
void limpartela ();

void validar();
void linhasqb();
void jogo1();
void tecla();
void monstrosdados();


listaper();
jogo1();










    return 0;
}
//limpartela
void limpartela() {
     system("cls");
}

// jogo parte 1;








//monstros

//Seprar
void linha(){
    cout << "------------------------------------------------------------------------------------------------------------------" << endl;
}
//Indicar dados
void linha2(){
    cout << " ABAIXO " << endl;
}
void linhasqb () {
    cout << endl;
}
//lista de personagem
void listaper(){
cout << " personagens " << endl;
linha2();
cout << " 1- Killua Zaoldyeck "  << " \n " << "forca : 180 " << " \n " << " vida : 400 " << " \n " <<  endl;
linhasqb();

cout << " 2- Spike Spiegel "<< " \n " << "forca : 100 " << " \n " << " vida : 500 " << " \n " << endl;
linhasqb();
cout << " 3- Masato " << " \n " << "forca : 140 " << " \n " << " vida : 370 " << " \n "  << endl;
linhasqb();

cout << " 4- Shanks " << " \n " << "forca : 250 " << " \n " << " vida : 300 " << " \n " << endl;
linha();



}




    


 

    

void tecla()
{
    char enter;
        enter= _getch();
        if (enter== 13)
        {
            limpartela();
        }
        
    
}

void jogo1(){
       struct pers
{
    string nome;
    int forca;
    int vida;
    int especiais;
    
};
     pers personagem1;
pers personagem2;
pers personagem3;
pers personagem4;
//p1
personagem1.nome="Killua Zaoldyeck";
personagem1.forca=160;
personagem1.vida=500;

//p2
personagem2.nome="Spike Spiegel";
personagem2.forca=180;
personagem2.vida=550;

//p3
personagem3.nome="Masato";
personagem3.forca=100;
personagem3.vida=600;

//p4
personagem4.nome="Shanks ";
personagem4.forca=200;
personagem4.vida=400;


 monstro m1;
    m1.nome=" Ceifador ";
    m1.vida= 380;
    m1.ataque=100;

    int valor;
cout << " Escolha seu personagem de acordo com os numeros  " << endl;
cin >> valor;
int vidaa;
int danoo;

switch(valor){
case 1:
    cout << "Killua Zaoldyeck - selecionado " << endl;
    danoo=personagem1.forca;
    vidaa=personagem3.vida;
    break;
    case 2 :
      cout << "Spike Spiegel - selecionado " << endl;
      danoo=personagem2.forca;
      vidaa=personagem2.vida;
      break;
      case 3:
      cout << "  Masato - selecionado " << endl;
      danoo=personagem3.forca;
      vidaa=personagem4.vida;
      break;
      case 4:
      cout << "  Shanks - selecionado " << endl;
      danoo=personagem4.forca;
      vidaa=personagem4.vida;
      break;
      
      
}
 while (valor < 1 || valor > 4)
      {
        cout << " valor invalido, digite outro valor  " << endl;
        cin >> valor;
      }
      
      linhasqb();
      cout << " Agora ira comecar sua aventura aperte Enter para iniciar " << endl;
      tecla();
      //interaçao usuario;
    
int qtde;
qtde=0;
string ataque;

    cout << " Ola, nesse jogo voce enfrentara monstros, enfrete esses mostros, \n nao fuja e sera recompensado " << endl;
    cout << " nesse jogo a cada monstro que derrotar, voce ira ganhar coins, esses cois serao usados para, \n deixar seu personagem mais forte " << endl;
    cout << " e esse sera seu primeiro desafio enfrente seu primerio monstro \n pressione a tecla Enter " << endl;
    tecla();
    cout << " pressione A  para batalha  "  << endl;
    cin >> ataque;
    

   while (m1.vida > 0 )
   {

  cout << " o personagem ira atacar " << endl;
   cout << " pressione A  para atacar "  << endl;
    cin >> ataque;
    cout << " o monstro ira atacar " << endl;
  if (valor == 1 && ataque=="a" )
  {
    personagem1.vida-=m1.ataque;
    m1.vida-=personagem1.forca;

    if (m1.vida <=0)
    {
    m1.vida=0;
    cout << "monstro foi derrotado " << endl;

    }
    else {
        cout << " vida do monstro "  << m1.vida << endl;
    }
    if (personagem1.vida <= 0)
    {
        cout << " voce foi derrotado.. \n tente novamente abrindo o jogo novamente  " << endl;
    } else {
        cout << "vida do personagem  " << personagem1.vida << endl;
    }
   
    

  }
  //persoangem 2
   if (valor == 2 && ataque=="a" )
  {
    personagem2.vida-=m1.ataque;
    m1.vida-=personagem2.forca;

    if (m1.vida <=0)
    {
    m1.vida=0;
    cout << "monstro foi derrotado " << endl;

    }
    else {
        cout << " vida do monstro "  << m1.vida << endl;
    }
    if (personagem2.vida <= 0)
    {
        cout << " voce foi derrotado.. \n tente novamente abrindo o jogo novamente  " << endl;
    } else {
        cout << "vida do personagem  " << personagem2.vida << endl;
    }

  }
   if (valor == 3 && ataque=="a")
  {
    personagem4.vida-=m1.ataque;
    m1.vida-=personagem4.forca;

    if (m1.vida <=0)
    {
    m1.vida=0;
    cout << "monstro foi derrotado " << endl;

    }
    else {
        cout << " vida do monstro "  << m1.vida << endl;
    }
    if (personagem4.vida <= 0)
    {
        cout << " voce foi derrotado.. \n tente novamente abrindo o jogo novamente  " << endl;
    } else {
        cout << "vida do personagem  " << personagem3.vida << endl;
    }
    

    

  }
   if (valor == 4 &&  ataque=="a")
  {
    personagem4.vida-=m1.ataque;
    m1.vida-=personagem4.forca;

    if (m1.vida <=0)
    {
    m1.vida=0;
    cout << "monstro foi derrotado " << endl;

    }
    else {
        cout << " vida do monstro "  << m1.vida << endl;
    }
    if (personagem4.vida <= 0)
    {
        cout << " voce foi derrotado.. \n tente novamente abrindo o jogo novamente  " << endl;
        sleep(5);
        exit;
    } else {
        cout << "vida do personagem  " << personagem4.vida << endl;
    }
    
  }
  linhasqb();
  
} 
limpartela();
cout << " parabens voce derrotou o seu primeiro monstro \n aqui esta sua recompensa " << endl;
int coins;
struct loja
{
    int coins;
    string items;
};
loja missao1;
loja missao1itens;
missao1.coins=250;
int itens;
int final;
cout << " voce ganhou 250 coins " << endl;
linha2();
cout << " aqui esta suas opçoes de compra " <<endl;
linhasqb();
cout << " 1- armadura = 150 coins  \n voce ganhara mais 100 de vida " << endl;
linhasqb();
cout << " 2- Rapieira- Espada = 200 coins \n voce ganhara mais 150 de dano " << endl;
linhasqb();
cout << "3- adaga =100 coins \n voce  causara mais 75 de dano " << endl;
linhasqb();
cout << "4- colete - 100 coins \n voce ganhara mais 50 de vida " << endl;
linhasqb();
cout << " digite sua opçao aqui " << endl;
cin >> itens;

if (itens==1)
{
   cout << "voce escolheu a armadura - 150 " << endl;
   final=coins - 150;
}



}

    

    

    
  
    
     


