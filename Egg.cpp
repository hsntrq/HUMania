#include "Egg.hpp"
// pigeon implementation will go here.

void Egg::draw(SDL_Renderer* gRenderer, SDL_Texture* assets){
    srcRect = srcSprite[frame];
    drop(gRenderer, assets);
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

void Egg::drop(SDL_Renderer*, SDL_Texture* assets){
    if (moverRect.y >= 500) frame = 1;
    else moverRect.y+=20;
}

Egg::Egg(int x, int y){
    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 60};
}

Egg::Egg(){
    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 60};
}