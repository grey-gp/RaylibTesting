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

protected:
    float frameHeight;
    int currentFrame = 1;

};