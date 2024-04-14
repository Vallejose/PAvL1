#include <string.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "paga.h"

using namespace std;


//Cosntructor de la clase
paga::paga(float monto, Moneda moneda){
    this->monto = monto;
    this->moneda = moneda;
}

//Metodo para obtener el monto y la moneda de la paga.

float paga::getMonto(){
    return monto;
}

Moneda paga::getMoneda(){
    return moneda;
}

//Metodos para la conversion de monedas de la paga
float paga::a_dolar(){
    if(moneda == us)
        return monto / 39.05;
    return monto;
}

float paga::a_pesos(){
    if (moneda == usd)
        return monto * 39.05;
    return monto;
}