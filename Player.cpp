#include "Player.h"

Player::Player(Texture2D texture, int frames)
{
    characterSprite = texture;
    this->frames = frames;
    frameHeight = (float)characterSprite.height/frames;
    frameRec = Rectangle{0.f, currentFrame * frameHeight, (float)characterSprite.width, frameHeight};
}

void Player::Draw()
{
    DrawTextureRec(characterSprite, frameRec, position, RAYWHITE);
}

void Player::Unload()
{
    UnloadTexture(characterSprite);
}

void Player::HandleMovement()
{

    frameCounter++;

    if (frameCounter > 60/5)
    {
        frameCounter = 0;
        currentFrame++;
        
        if (currentFrame > frames) currentFrame = 0;
        frameRec.y = currentFrame * frameHeight;

    }

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