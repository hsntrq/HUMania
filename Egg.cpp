#include "Egg.hpp"
// pigeon implementation will go here.

void Egg::draw(SDL_Renderer* gRenderer, SDL_Texture* assets){//selects  the sprite of the egg, updates it with drop function and then draws it
    srcRect = srcSprite[frame];
    drop(gRenderer, assets);
    SDL_RenderCopy(gRenderer, assets, &srcRect, &moverRect);
}

void Egg::drop(SDL_Renderer*, SDL_Texture* assets){//decrements the height of the egg until the egg reaches the bottom (y=500)
    if (moverRect.y >= 500) frame = 1;
    else moverRect.y+=20;
}

Egg::Egg(int x, int y){//constructor which initiates the egg at location (x, y)
    // it will display egg on (x, y) location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 25, 35};
}

Egg::Egg(){//default constructor
    // it will display egg on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 25, 35};
}
bool Egg::is_delete(){
    return false;
}