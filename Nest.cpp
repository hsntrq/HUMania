#include "Nest.hpp"
// pigeon implementation will go here.

void Nest::draw(SDL_Renderer* gRenderer, SDL_Texture* assets){
    wiggle(gRenderer, assets);
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

void Nest::wiggle(SDL_Renderer*, SDL_Texture* assets){
    srcRect = srcSprite[frame];
    frame = (frame + 1)%3;
}

Nest::Nest(int x, int y){
    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 60};
}

Nest::Nest(){
    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 60};
}