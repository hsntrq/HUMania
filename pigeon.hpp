#include<SDL.h>

class Pigeon{
SDL_Rect srcSprite[3]={{7,15,155,102},{0,164,153,83},{2,288,159,123}}, srcRect, moverRect;
int frame = 0;
int speed = rand()%50;


public:
    // add the fly function here as well.
    void draw(SDL_Renderer*, SDL_Texture* assets);
    void fly(SDL_Renderer*, SDL_Texture* assets);
    Pigeon(); // may add other overloaded constructors here... 
    Pigeon(int x, int y);
};
