#include "pigeon.hpp"
// pigeon implementation will go here.

void Pigeon::draw(SDL_Renderer* gRenderer, SDL_Texture* assets){
    srcRect = srcSprite[frame];
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
    fly(gRenderer, assets);
    frame = (frame + 1)%3;
}

void Pigeon::fly(SDL_Renderer*, SDL_Texture* assets){
    moverRect.x = (moverRect.x + 5 + speed)%1000;
}

Pigeon::Pigeon(int x, int y){
    moverRect = {x, y, 50, 60};
}

Pigeon::Pigeon(){
    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 60};
}