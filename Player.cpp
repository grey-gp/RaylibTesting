#include "Player.h"
#include <iostream>

void Player::HandleMovement()
{
    HandleAnim();

    if (IsKeyDown(KEY_RIGHT))
    {
        moveDir.x = 3;
    }
    else if (IsKeyDown(KEY_LEFT))
    {
        moveDir.x = -3;
    }
    else if (IsKeyDown(KEY_UP))
    {
        moveDir.y = -3;
    }
    else if (IsKeyDown(KEY_DOWN))
    {
        moveDir.y = 3;
    }

    position = Vector2Add(position, moveDir);
    move(moveDir);
    
}

void Player::move(Vector2 offset)
{

    if(moveDir.x * lastMove.x < 0.f)
    {
        frameRec.width *= -1.f;
    }
    destRec.x = position.x;
    destRec.y = position.y;

    lastMove = moveDir;
    //moveDir = Vector2Zero();
}

void Player::setPosition(Vector2 newPos)
{
    position = newPos;
    destRec.x = position.x;
    destRec.y = position.y;

}