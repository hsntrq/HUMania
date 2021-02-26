#include<SDL.h>

class Nest{
SDL_Rect srcSprite[3]={{484,0,156,150},{484,150,156,120},{494,298,144,117}}, srcRect, moverRect;

public:
    // add the fly function here as well.
    void draw(SDL_Renderer*, SDL_Texture* assets);
    void wiggle(SDL_Renderer*, SDL_Texture* assets);
    Nest(); // may add other overloaded constructors here... 
};
