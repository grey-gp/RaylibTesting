#pragma once

#include "Character.h"

class Player : public Character
{

public:
    void Draw();
    void Unload();
    void HandleMovement();

    Player(Texture2D texture, int frames);

};