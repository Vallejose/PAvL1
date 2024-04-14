#ifndef PAGA_H
#define PAGA_H

//typedef struct _moneda * moneda;

enum Moneda {us, usd};

class paga{
    private:
        float monto;
        Moneda moneda;
    public:
        //constructor de la clase
        paga(float monto, Moneda moneda); 


        //Métodos para obtener el monto y la moneda de la paga
        float getMonto();
        Moneda getMoneda();
        
        //Métodos públicos para convertir los montos a dolares y a pesos
        float a_dolar();
        float a_pesos();
};

#endif