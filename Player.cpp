#include "Player.h"

Player::Player(Texture2D texture, int frames)
{
    characterSprite = texture;
    this->frames = frames;
    frameHeight = (float)characterSprite.height/frames;
}

void Player::Draw()
{
    DrawTextureRec(characterSprite, Rectangle{0.f, currentFrame * frameHeight, (float)characterSprite.width, frameHeight}, position, RAYWHITE);
}

void Player::Unload()
{
    UnloadTexture(characterSprite);
}

void Player::HandleMovement()
{

    if (currentFrame > frames) currentFrame = 1;

    if (IsKeyDown(KEY_RIGHT))
    {
        position.x += 2;
        currentFrame++;
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