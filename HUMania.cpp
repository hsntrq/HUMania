#include "HUMania.hpp"
#include <iostream>
using namespace std;
void HUMania::drawObjects() //iterating through the lists and drawing all of the instances
{
    for (list<Unit *>::iterator pigeon = pigeons.begin(); pigeon != pigeons.end(); ++pigeon)
    {
        if ((*pigeon)->is_delete()) //checks if the pigeon object should be deleted and deletes the object if true draws otherwise
        {
            delete *pigeon;
            pigeons.erase(pigeon--);
        }
        else
            (*pigeon)->draw(gRenderer, assets);
    }
    for (list<Unit *>::iterator egg = eggs.begin(); egg != eggs.end(); ++egg) //traverses and draws all the eggs
    {
        (*egg)->draw(gRenderer, assets);
    }
    for (list<Unit *>::iterator nest = nests.begin(); nest != nests.end(); ++nest) //traverses and draws all the nests, also checks for collisions with eggs
    {
        SDL_Rect pos_nest = (*nest)->Mover();                                     //retrieves the position of the nest
        for (list<Unit *>::iterator egg = eggs.begin(); egg != eggs.end(); ++egg) //traverses all the eggs
        {
            SDL_Rect pos_egg = (*egg)->Mover();                       //retrieves the position of the egg
            if (SDL_HasIntersection(&pos_nest, &pos_egg) == SDL_TRUE) //checks if the egg collides with the nest deletes egg and pushes  a new pegion in pigeons list if true
            {
                delete *egg;
                eggs.erase(egg--);
                pigeons.push_back(new Pigeon(pos_egg.x, pos_egg.y, true));
            }
        }
        (*nest)->draw(gRenderer, assets);
    }
}

void HUMania::createObject(int x, int y)
{
    int r = rand() % 3; //randomly choosing a value from 0, 1 and 2
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    if (r == 0)
    { //create a pigeon at location (x, y) and push it in the vector of pigeons
        pigeons.push_back(new Pigeon(x, y));
    }
    else if (r == 1)
    { //create a nest at location (x, y) and push it in the vector of nests
        nests.push_back(new Nest(x, y));
    }
    else
    { //create a egg at location (x, y) and push it in the vector of eggs
        eggs.push_back(new Egg(x, y));
    }
}

HUMania::HUMania(SDL_Renderer *renderer, SDL_Texture *asst) : gRenderer(renderer), assets(asst) {}
HUMania::~HUMania() //destructor deletes all dynamically created objects traversing them in all the lists
{
    for (list<Unit *>::iterator pigeon = pigeons.begin(); pigeon != pigeons.end(); ++pigeon)
    {
        delete *pigeon;
        pigeons.erase(pigeon--);
    }
    for (list<Unit *>::iterator egg = eggs.begin(); egg != eggs.end(); ++egg)
    {
        delete *egg;
        eggs.erase(egg--);
    }
    for (list<Unit *>::iterator nest = nests.begin(); nest != nests.end(); ++nest)
    {
        delete *nest;
        nests.erase(nest--);
    }
}