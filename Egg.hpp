#include<SDL.h>

class Egg{
SDL_Rect srcSprite[2]={{228,24,132,174},{207,244,231,186}}, srcRect, moverRect; //The sprite configuration for the two eggs, and the other variables
int frame = 0;//placeholder for choosing the sprite of the egg

public://function declarations
    void draw(SDL_Renderer*, SDL_Texture* assets);
    void drop(SDL_Renderer*, SDL_Texture* assets);
    Egg(); // may add other overloaded constructors here... 
    Egg(int x, int y);
};
