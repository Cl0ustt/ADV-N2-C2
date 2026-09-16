#include <iostream>
using namespace std;

string nombrePersonaje = "Mimi";
int nivel = 6;
int vidas = 1;
int monedas = 0;
float velocidad = 3.9;
bool espada = true;

int main(){
cout << "Nombre de personaje: " << nombrePersonaje << endl;
cout << "Nivel de personaje: " << nivel << endl;
cout << "Cantidad de vidas: " << vidas << endl;
cout << "Velocidad: " << velocidad << endl;
cout << nombrePersonaje << " tiene una espada mágica? " << espada << endl;

return 0;
} 

int main (){
 if (nivel >= 4)
 {
   cout << "Misión nueva desbloqueada!" << endl;
 }else{
    cout << "Nesecitas de nivel 4 para desbloquear esta misión!" << endl;
 }


 while (monedas < 10){
    cout << nombrePersonaje <<" ha obtenido una moneda!" << endl;
    monedas = monedas + 1;

    return 0;
 }
 
 cout << "Total de monedas: " << monedas << endl;

}


int calcularDanio (int ataqueBase, int bonificador){
    int danioFinal = ataqueBase + bonificador;
    return danioFinal;

    cout << "Ingrese el ataque base:";
    cin >> ataqueBase;

    cout << "Ingrese el bonificador:";
    cin >> bonificador;

    cout << "Ataque final: " << danioFinal << endl;
}

