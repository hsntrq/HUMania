#include<SDL.h>
#include "unit.hpp"

class Egg: public Unit{
SDL_Rect srcSprite[2]={{228,24,132,174},{207,244,231,186}}; //The sprite configuration for the eggs(hatched as well)
int hatched = 0;//placeholder for choosing the sprite of the egg

public://function declarations
    void draw(SDL_Renderer*, SDL_Texture* assets);
    void drop(SDL_Renderer*, SDL_Texture* assets);
    Egg(); // constructors (overloaded) 
    Egg(int x, int y);
    bool is_delete();
};
