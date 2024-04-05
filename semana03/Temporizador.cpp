#include "Temporizador.h"
Temporizador::Temporizador(){
}
Temporizador::Temporizador(int horas, int minutos, int segundos){
    if(horas<0 || minutos>59 || minutos<0 || segundos>59 || segundos<0){
        _horas=0;
        _minutos=0;
        _segundos=0;
    }
    else{
    _horas=horas;
    _minutos=minutos;
    _segundos=segundos;
    }
}


void Temporizador::setHoras(int horas){
    _horas=horas;
}

void Temporizador::setMinutos(int minutos){
    _minutos=minutos;
}

void Temporizador::setSegundos(int segundos){
    _segundos=segundos;
}

void Temporizador::tic(){
    if(_segundos<59){_segundos++;}
    else if(_minutos<59){
        _segundos=0;
        _minutos++;
    }
    else{
        _segundos=0;
        _minutos=0;
        _horas++;
    }
}

void Temporizador::tac(){
    _segundos++;
}
