#include "Player.h"

void Player::HandleMovement()
{
    HandleAnim();

    if (IsKeyDown(KEY_RIGHT))
    {
        position.x += 2;
    }
    else if (IsKeyDown(KEY_LEFT))
    {
        position.x -= 2;
    }
    else if (IsKeyDown(KEY_UP))
    {
        position.y -= 2;
    }
    else if (IsKeyDown(KEY_DOWN))
    {
        position.y += 2;
    }
}
