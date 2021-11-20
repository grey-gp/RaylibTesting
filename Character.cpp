#include "Character.h"

Character::Character(Texture2D texture, int animFrames)
{
    position = {100.f, 100.f};
    characterSprite = texture;
    this->frames = animFrames;
    frameHeight = (float)characterSprite.height/frames;
    frameRec = {0.f, currentFrame * frameHeight, (float)characterSprite.width, frameHeight};
    destRec = {position.x, position.y, characterSprite.width * scale, frameHeight * scale};
    origin = {(float)characterSprite.width, frameHeight};
}

void Character::Draw()
{
    DrawTexturePro(characterSprite, frameRec, destRec, origin, rotation, RAYWHITE);
}

void Character::Unload()
{
    UnloadTexture(characterSprite);
}

void Character::HandleMovement()
{
    HandleAnim();
}

void Character::HandleAnim()
{
    frameCounter++;

    if (frameCounter > 60/5)
    {
        frameCounter = 0;
        currentFrame++;
        
        if (currentFrame > frames) currentFrame = 0;
        frameRec.y = currentFrame * frameHeight;

    }
}