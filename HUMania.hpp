#include<SDL.h>
#include "pigeon.hpp"
#include "Egg.hpp"
#include "Nest.hpp"
#include<vector>
class HUMania{
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

    //Right now we're creating one pigeon, you have to create vectors of pigeons, eggs, and nests    
    std::vector<Pigeon> pigeons;
    std::vector<Egg> eggs;
    std::vector<Nest> nests;
    // Pigeon p1;
    // Egg e;
    // Nest n;
    public:
    HUMania(SDL_Renderer *, SDL_Texture *);
    void drawObjects(); 
    void createObject(int, int);
};