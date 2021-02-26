#include<SDL.h>

class Pigeon{
SDL_Rect srcSprite[3]={{7,15,155,102},{0,164,153,83},{2,288,159,123}}, srcRect, moverRect;//The sprite configuration for the three pigeons, and the other variables
int frame = 0;//placeholder for choosing the sprite of the pigeon
int speed = rand()%50;//randomizing speed of the pigeons


public://function declarations
    void draw(SDL_Renderer*, SDL_Texture* assets);
    void fly(SDL_Renderer*, SDL_Texture* assets);
    Pigeon(); // may add other overloaded constructors here... 
    Pigeon(int x, int y);
};
