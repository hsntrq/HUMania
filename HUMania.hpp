#include <SDL.h>
#include "pigeon.hpp"
#include "Egg.hpp"
#include "Nest.hpp"
#include "unit.hpp"
#include <list>
#include <iostream>
using namespace std;
class HUMania
{
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

    //Creating the lists to store instances of pigeons, eggs and nests
    list<Unit *> pigeons;
    list<Unit *> eggs;
    list<Unit *> nests;

public:
    HUMania(SDL_Renderer *, SDL_Texture *); //constructor
    void drawObjects();
    void createObject(int, int);
    ~HUMania(); //destructor
};