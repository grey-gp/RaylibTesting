#pragma once

#include "Character.h"

class Player : public Character
{

public:
    void HandleMovement();

    Player(Texture2D texture, int frames) : Character(texture, frames){};

};