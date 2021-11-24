#pragma once

#include "Character.h"
#include "raylib.h"
#include "raymath.h"


class Player : public Character
{

public:
    void HandleMovement();

    Player(Texture2D texture, int frames) : Character(texture, frames){};
    void move(Vector2 offset);
    Vector2 moveDir = Vector2Zero();
    Vector2 lastMove = {0.f, 0.f};

    void setPosition(Vector2 newPos);


};