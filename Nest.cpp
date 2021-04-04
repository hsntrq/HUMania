#include "Nest.hpp"
// pigeon implementation will go here.

void Nest::draw(SDL_Renderer* gRenderer, SDL_Texture* assets){//updates the nest with wiggle function and then draws it
    wiggle(gRenderer, assets);
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

void Nest::wiggle(SDL_Renderer*, SDL_Texture* assets){//alternates the sprites of the nest
    srcRect = srcSprite[frame];
    frame = (frame + 1)%3;
}

Nest::Nest(int x, int y){//constructor which initiates the egg at location (x, y)
    // it will display pigeon on (x, y) location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 70, 60};
}

Nest::Nest(){//default constructor
    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 70, 60};
}

bool Nest::is_delete(){
    return false;
}