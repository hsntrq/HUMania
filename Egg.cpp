#include "Egg.hpp"
// pigeon implementation will go here.

void Egg::draw(SDL_Renderer* gRenderer, SDL_Texture* assets){
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
    fly(gRenderer, assets);
}

void Egg::fly(SDL_Renderer*, SDL_Texture* assets){
    if (moverRect.x == 1000) moverRect.x = 0;
    moverRect.x++;
}

Egg::Egg(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {0,0,160,133};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 60};
}