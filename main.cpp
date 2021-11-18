#include "raylib.h"
#include "Player.h"

int main()
{
    InitWindow(1000, 700, "Hello, Raylib");

    Color screenColor = RAYWHITE;
    Texture2D background = LoadTexture("../Content/Images/3.png");

    Player player;
    player.characterSprite = LoadTexture("../Content/Character/static idle.png");

    SetTargetFPS(60);

    while(!WindowShouldClose())
    {

        player.HandleMovement();

        BeginDrawing();
            ClearBackground(screenColor);

            DrawTexture(background, 0, 0, RAYWHITE);
            player.Draw();

        EndDrawing();

    }
    UnloadTexture(background);
    player.Unload();
    CloseWindow();
}