#include<SDL.h>

class Egg{
SDL_Rect srcRect, moverRect;

public:
    // add the fly function here as well.
    void draw(SDL_Renderer*, SDL_Texture* assets);
    void drop(SDL_Renderer*, SDL_Texture* assets);
    Egg(); // may add other overloaded constructors here... 
};
