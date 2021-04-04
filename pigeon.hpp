#include <SDL.h>
#include "unit.hpp"
class Pigeon : public Unit
{
    SDL_Rect srcSprite[3] = {{7, 15, 155, 102}, {0, 164, 153, 83}, {2, 288, 159, 123}}; //The sprite configuration for the three pigeons
    int frame = 0;                                                                      //placeholder for choosing the sprite of the pigeon
    int speed = rand() % 50;                                                            //randomizing speed of the pigeons
    bool baby;                                                                          //to check if the pigeon object is a baby

public: //function declarations
    void draw(SDL_Renderer *, SDL_Texture *assets);
    void fly(SDL_Renderer *, SDL_Texture *assets);
    Pigeon(); // constructors (overloaded)
    Pigeon(int x, int y);
    Pigeon(int x, int y, bool check);
    bool is_delete(); //checks wheather the object should be deleted
};
