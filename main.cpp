#include "raylib.h"
#include "Player.h"

int main()
{
    InitWindow(1000, 700, "Hello, Raylib");

    Color screenColor = RAYWHITE;
    Texture2D background = LoadTexture("../Content/Images/3.png");

    Player *player = new Player;
    player->frames = 8;
    player->characterSprite = LoadTexture("../Content/Character/move with FX.png");
    player->scale = 2.5f;

    SetTargetFPS(60);

    while(!WindowShouldClose())
    {

        player->HandleMovement();

        BeginDrawing();
            ClearBackground(screenColor);

            DrawTexture(background, 0, 0, RAYWHITE);
            player->Draw();

        EndDrawing();

    }
    UnloadTexture(background);
    player->Unload();
    CloseWindow();
    delete player;
}