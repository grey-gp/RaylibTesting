#include "Player.h"

void Player::HandleMovement()
{
    HandleAnim();

    if (IsKeyDown(KEY_RIGHT))
    {
        position.x += 3;
    }
    else if (IsKeyDown(KEY_LEFT))
    {
        position.x -= 3;
    }
    else if (IsKeyDown(KEY_UP))
    {
        position.y -= 3;
    }
    else if (IsKeyDown(KEY_DOWN))
    {
        position.y += 3;
    }

    destRec.x = position.x;
    destRec.y = position.y;
}
