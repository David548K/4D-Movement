#include <iostream>
#include <raylib.h>

class Entidad{
    private:
    //  Propiedades
        int Velocidad;
        double Tamano;
        Color aColor;

    public:
        Vector2 Posicion;

        Entidad(int velocidad, int posicionX, int posicionY, double tamano, Color bcolor){
            // ↓ Set propiedades
            Velocidad = velocidad;
            Posicion.x = posicionX; Posicion.y = posicionY;
            Tamano = tamano;
            aColor = bcolor;
        }

        int getVelocidad(){
            return Velocidad;
        }

        void createPlayerOutput(){
            DrawCircle(Posicion.x, Posicion.y, Tamano, aColor);
        }
};