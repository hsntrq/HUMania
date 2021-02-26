#include<SDL.h>

class Pigeon{
SDL_Rect srcSprite[3]={{6,6,155,102},{0,154,153,83},{2,278,159,123}}, srcRect, moverRect;
int frame = 0;


public:
    // add the fly function here as well.
    void draw(SDL_Renderer*, SDL_Texture* assets);
    void fly(SDL_Renderer*, SDL_Texture* assets);
    Pigeon(); // may add other overloaded constructors here... 
};
