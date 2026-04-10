#include <iostream>
using namespace std;


//Funcion que se encarga de cambiar el valor de dos punteros
void intercambiar(int *a, int *b){ //Declarcion de los punteros
    int aux = *a; //Usamos un auxiliar para guardar el valor de a
    *a = *b; //Hacemos que a tome el valor de b
    *b = aux; //Hacemos que b tome el valor del auxiliar
}

int main(){
    //Declaramos dos variables y les asignamos valores
    int numero1 = 10;
    int numero2 = 50;

    int numero3 = 80;//Esta variable nos servira despues

    //Asignamos un puntero a cada variable
    int *ppuntero1 = &numero1;
    int *ppuntero2 = &numero2;
    int *pnumero3 = &numero3;
    
    //Llamamos a la funcion "intercambiar" e ingresmos los puntero a cambiar
    intercambiar(ppuntero1, ppuntero2);
    
    //Usamos * y el nombre de la variable para modificar su valor
    *pnumero3 = 60;

    cout<< ppuntero1<< "\n" << *ppuntero1<<endl; //para mostrar la direccion del puntero usamos "ppuntero1" y para mostrar su valor es "*ppuntero1"
    cout<< ppuntero2<< "\n" << *ppuntero2<<endl;
    cout<< pnumero3<< "\n" << *pnumero3;

    //Dentro de este mismo archivo cumpli con todo lo que se pedia en la tarea
    //Declare variables y les asigne un puntero
    //Hice una función que cambiara los valores de dos puntero
    //Y modifique el valor de una variable a traves de un puntero
    }
    