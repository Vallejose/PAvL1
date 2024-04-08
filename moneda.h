#ifndef MONEDA_H
#define MONEDA_H

//typedef struct _moneda * moneda;

enum moneda = {us, usd};

class paga{
    private:
        float : monto;
        moneda : moneda;
    public:
        pago(float moneda, moneda moneda);
        float getMonto();
        moneda getMoneda();

};

#endif