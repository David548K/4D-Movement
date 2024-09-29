#include <iostream>
#include <raylib.h>
#include "entidad.h"

int main(){
    // Basic
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    SetTargetFPS(60);

    // Create Object Instance
    Entidad Jugador1(2, 60, 40, 5.6, RED);
    //--------------------------------------------------------------------------------------


    // Main game loop
    while (!WindowShouldClose())
    {
        //  Update
        //  Variables Movimiento
        int moverX = 0;
        int moverY = 0;
        int Velocidad = Jugador1.getVelocidad();

        //  Condicional Movimiento
        if(IsKeyDown(KEY_RIGHT)){
            moverX = Velocidad;
        }
        else if(IsKeyDown(KEY_UP)){
            moverY = -Velocidad;
        }
        else if(IsKeyDown(KEY_LEFT)){
            moverX = -Velocidad;
        }
        else if(IsKeyDown(KEY_DOWN)){
            moverY = Velocidad;
        }

        //  Aplicar Movimiento
        Jugador1.Posicion.x += moverX;
        Jugador1.Posicion.y += moverY;
        //----------------------------------------------------------------------------------


        // Draw
        BeginDrawing();

            ClearBackground(RAYWHITE);
            Jugador1.createPlayerOutput();
                
        EndDrawing();
        //----------------------------------------------------------------------------------
    }


    // De-Initialization
    CloseWindow(); 
    return 0;
}