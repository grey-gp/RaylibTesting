#pragma once

#include "raylib.h"

class Character
{
public:
    Texture2D characterSprite;
    Vector2 position;
    // float rotation = 0.f;
    // float scale = 1.f;
    int frames = 0;

    Character();
    Character(Texture2D texture, int animFrames);
    void Draw();
    void Unload();
    void HandleMovement();

protected:
    float frameHeight = 0.f;
    int currentFrame = 0;
    int frameCounter = 0;

    Rectangle frameRec;

    void HandleAnim();

};