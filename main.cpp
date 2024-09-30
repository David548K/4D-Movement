#include <iostream>
#include <raylib.h>
#include "entidad.h"

int main(){
    //  Basics --------------------------
    const int width = 800;
    const int height = 600;
    InitWindow(width, height, "Prueba movimiento");
    SetTargetFPS(60);

    Entidad Jugador1(3, 20, BLUE, 120, 120); // Inicializar Jugador
    //  ---------------------------------


    //  Main Loop -----------------------
    while(!WindowShouldClose()){

        //  Movimiento ------------------
        bool movimientoDerecha = false;
        bool movimientoArriba = false;
        bool movimientoIzquierda = false;
        bool movimientoAbajo = false;
        int moverX = 0;
        int moverY = 0;

        if(IsKeyDown(KEY_RIGHT) && movimientoDerecha == false){
            movimientoArriba = false;
            movimientoIzquierda = false;
            movimientoAbajo = false;
            movimientoDerecha = true;
            moverX += Jugador1.getVelocidad();
        }
        if(IsKeyDown(KEY_UP) && movimientoArriba == false){
            movimientoDerecha = false;
            movimientoIzquierda = false;
            movimientoAbajo = false;
            movimientoArriba = true;
            moverY -= Jugador1.getVelocidad();
        }
        if(IsKeyDown(KEY_LEFT) && movimientoIzquierda == false){
            movimientoDerecha = false;
            movimientoArriba = false;
            movimientoAbajo = false;
            movimientoIzquierda = true;
            moverX -= Jugador1.getVelocidad();
        }
        if(IsKeyDown(KEY_DOWN) && movimientoAbajo == false){
            movimientoDerecha = false;
            movimientoArriba = false;
            movimientoIzquierda = false;
            movimientoAbajo = true;
            moverY += Jugador1.getVelocidad();
        }

        if(moverX != 0){
            moverY = 0;
        }
        else if(moverY != 0){
            moverX = 0;
        }
        else{
            moverX = 0;
            moverY = 0;
        }
        Jugador1.Posicion.x += moverX;
        Jugador1.Posicion.y += moverY;
        // ------------------------------

        //  Output Visual ---------------
        BeginDrawing();
            ClearBackground(LIGHTGRAY);
            Jugador1.createPlayerOutput();
        EndDrawing();
        // ------------------------------
    }
    // ----------------------------------

    CloseWindow();
    return 0;
}