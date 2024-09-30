#include <iostream>
#include <raylib.h>

class Entidad{
    private:
    //  Propiedades ---------------------
        int Velocidad;
        int Tamanho;
        Color aColor;

    public:
    //  Propiedades ---------------------
        Vector2 Posicion;

    //  Construct -----------------------
        Entidad(int velocidad, int tamano, Color bColor, int posicionA, int posicionB){
            Velocidad = velocidad;
            Tamanho = tamano;
            aColor = bColor;
            Posicion.x = posicionA; Posicion.y = posicionB;
        }

    //  Funcion Output Visual
        void createPlayerOutput(){
            DrawCircle(Posicion.x, Posicion.y, Tamanho, aColor);
        }

        int getVelocidad(){
            return Velocidad;
        }
};