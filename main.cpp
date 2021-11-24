#include "raylib.h"
#include "Player.h"
#include "Character.h"

#include <iostream>

int main()
{
    InitWindow(1000, 700, "Hello, Raylib");

    Color screenColor = RAYWHITE;
    Texture2D background = LoadTexture("../Content/Images/3.png");

    Player *player = new Player(LoadTexture("../Content/Character/move with FX.png"), 8);
    player->setPosition({500, 200});
    Character *npc = new Character(LoadTexture("../Content/Character/shoot with FX.png"), 4);
    SetTargetFPS(60);

    while(!WindowShouldClose())
    {

        player->HandleMovement();
        npc->HandleMovement();

        BeginDrawing();
            ClearBackground(screenColor);

            DrawTexture(background, 0, 0, RAYWHITE);
            player->Draw();
            npc->Draw();

        EndDrawing();

    }
    UnloadTexture(background);
    player->Unload();
    npc->Unload();
    CloseWindow();
    delete player;
    delete npc;
}