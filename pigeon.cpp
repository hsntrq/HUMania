#include "pigeon.hpp"
// pigeon implementation will go here.

void Pigeon::draw(SDL_Renderer *gRenderer, SDL_Texture *assets) //alternates the sprite of the pigeons, updates it with fly function and then draws it
{
    srcRect = srcSprite[frame];
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
    fly(gRenderer, assets);
    frame = (frame + 1) % 3;
}

void Pigeon::fly(SDL_Renderer *, SDL_Texture *assets) //increments the x position of the pigeon with a randomized speed and then circulating it when it reaches the borders
{
    moverRect.x = (moverRect.x + 5 + speed); //moves to the right with randomized speed to each object
    if (moverRect.w >= 50 && moverRect.h >= 60) //if the baby pigeon has fully grown change it to an adult pigeon and fix it's size to 50x60
    {
        baby = false;
        moverRect.w = 50; moverRect.h = 60;
    }
    if (baby) //if the pigeon is a baby, increase it's size and make it fly upwards untill it reaches the top of the screen
    {
        moverRect.w += 3; moverRect.h += 4;
        if (moverRect.y > 10)
            moverRect.y = (moverRect.y - 8 - speed % 10); //randomized speed for each pigeon
    }
}
bool Pigeon::is_delete() //checks if the pigeon is out of the frame/window
{
    return moverRect.x >= 1000;
}

Pigeon::Pigeon(int x, int y) //constructor which initiates the pigeon at location (x, y)
{
    // it will display pigeon on (x, y) location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 60};
    baby = false;
}

Pigeon::Pigeon() //default constructor
{
    // it will display pigeon on (x, y) location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 60};
    baby = false;
}
Pigeon::Pigeon(int x, int y, bool check) //checks if the pigeon is newly born
{
    baby = check;
    if (baby) //initiates the pigeon with a small size if the check is true
        moverRect = {x, y, 15, 18};
    else
        moverRect = {x, y, 50, 60};
}