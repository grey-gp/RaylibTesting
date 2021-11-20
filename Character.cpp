#include "Character.h"

Character::Character()
{
    position = Vector2{500, 200};
}

Character::Character(Texture2D texture, int animFrames)
{
    characterSprite = texture;
    this->frames = animFrames;
    frameHeight = (float)characterSprite.height/frames;
    frameRec = Rectangle{0.f, currentFrame * frameHeight, (float)characterSprite.width, frameHeight};
}

void Character::Draw()
{
    DrawTextureRec(characterSprite, frameRec, position, RAYWHITE);
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