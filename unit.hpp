#include<SDL.H>
#pragma once
class Unit
{
protected:
    SDL_Rect srcRect;
    SDL_Rect moverRect;

public:
    Unit();
    Unit(SDL_Rect m);
    Unit(SDL_Rect s, SDL_Rect m);
    virtual void draw(SDL_Renderer *, SDL_Texture* assets) = 0;
};
