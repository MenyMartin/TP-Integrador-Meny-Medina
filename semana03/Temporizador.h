#pragma once
class Temporizador{
    private:
        int _horas;
        int _minutos;
        int _segundos;
    public:
        Temporizador();
        Temporizador(int horas, int minutos, int segundos);
        void setHoras(int horas);
        void setMinutos(int minutos);
        void setSegundos(int segundos);
        int getHoras();
        int getMinutos();
        int getSegundos();

        void tic();
        void tac();
};
