#include "pigeon.hpp"
// pigeon implementation will go here.

void Pigeon::draw(SDL_Renderer* gRenderer, SDL_Texture* assets){//alternates the sprite of the pigeons, updates it with fly function and then draws it
    srcRect = srcSprite[frame];
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
    fly(gRenderer, assets);
    frame = (frame + 1)%3;
}

void Pigeon::fly(SDL_Renderer*, SDL_Texture* assets){//increments the x position of the pigeon with a randomized speed and then circulating it when it reaches the borders
    moverRect.x = (moverRect.x + 5 + speed);
    if (moverRect.w >= 50 && moverRect.h >= 60){
        baby = false;
        moverRect.w = 50;
        moverRect.h = 60;
    }
    if (baby){
        
        moverRect.w += 3;
        moverRect.h += 4;
        if (moverRect.y > 10) moverRect.y = (moverRect.y - 8 - speed%10);
    }
}
bool Pigeon::is_delete(){
    return moverRect.x >= 1000;
}

Pigeon::Pigeon(int x, int y){//constructor which initiates the pigeon at location (x, y)
    // it will display pigeon on (x, y) location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 60};
}

Pigeon::Pigeon(){//default constructor
    // it will display pigeon on (x, y) location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 60};
}
Pigeon::Pigeon(int x, int y, bool check){
    baby = check;
    if (baby) moverRect = {x, y, 15, 18};
    else moverRect = {x, y, 50, 60};
}