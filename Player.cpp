#include "Player.h"

void Player::Draw()
{
    DrawTextureV(characterSprite, position, RAYWHITE);
}

void Player::Unload()
{
    UnloadTexture(characterSprite);
}

void Player::HandleMovement()
{
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