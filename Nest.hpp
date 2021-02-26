#include<SDL.h>

class Nest{
SDL_Rect srcSprite[3]={{484,0,156,150},{484,150,156,120},{494,298,144,117}}, srcRect, moverRect;//The sprite configuration for the three nests, and the other variables
int frame = 0;//placeholder for choosing the sprite of the nests

public://function declarations
    void draw(SDL_Renderer*, SDL_Texture* assets);
    void wiggle(SDL_Renderer*, SDL_Texture* assets);
    Nest(); // may add other overloaded constructors here... 
    Nest(int x, int y);
};
