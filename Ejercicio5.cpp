#include <iostream>
 using namespace std;

 int vida = 100;
 int danioEnemigo = 15;
 string nombrePersonaje = "Mimi";

 int danio(int vida, int danioEnemigo)
 {
  return vida - danioEnemigo;
 }

 int main(){
    cout << " " << endl;
    cout << nombrePersonaje << " camina por el bosque..." << endl;
    
    cout << "De repente, un grupo de 5 enemigos sale de las sombras!" << endl;
    cout << " " << endl;

    cout << nombrePersonaje << " se encuentra bajo ataque!" << endl;
    cout << " " << endl;

 for (int i = 1; i < 5; i++)
 {
    cout << "Ataque " << i << endl;
     vida = danio(vida, danioEnemigo);

        if (vida < 0) {
            vida = 0;
        }

    cout << "Vida restante: " << vida << endl;
 }

 
 if (vida = 0)
    {
    cout << nombrePersonaje << " ha sido derrotada!" << endl;
    }else{
        cout << nombrePersonaje << " ha ganado la repentina batalla!" << endl;
    }
 
return 0;
 }



