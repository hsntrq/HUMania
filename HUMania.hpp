#include<SDL.h>
#include "pigeon.hpp"
#include "Egg.hpp"
#include "Nest.hpp"
#include "unit.hpp"
#include<list>
#include <iostream>
using namespace std;
class HUMania{
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

    //Creating the vectors to store instances of pigeons, eggs and nests
    // std::vector<Unit> unit;
    list<Unit*> pigeons;
    list<Unit*> eggs;
    list<Unit*> nests;
    // Pigeon p1;
    // Egg e;
    // Nest n;
    public:
    HUMania(SDL_Renderer *, SDL_Texture *);
    void drawObjects(); 
    void createObject(int, int);
};