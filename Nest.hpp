#include<SDL.h>

class Nest{
SDL_Rect srcRect, moverRect;

public:
    // add the fly function here as well.
    void draw(SDL_Renderer*, SDL_Texture* assets);
    void wiggle(SDL_Renderer*, SDL_Texture* assets);
    Nest(); // may add other overloaded constructors here... 
};
