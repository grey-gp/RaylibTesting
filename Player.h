#pragma once

#include "Character.h"

class Player : public Character
{

public:
    void Draw();
    void Unload();
    void HandleMovement();

};