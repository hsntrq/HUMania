#include "HUMania.hpp"
#include<iostream>
using namespace std;
void HUMania::drawObjects(){//iterating through the vectors and drawing all of the instances
    for (list<Unit*>::iterator it = pigeons.begin(); it != pigeons.end(); ++it){
        if ((*it)->is_delete()){
            delete *it;
            pigeons.erase(it--);
        }
        else (*it)->draw(gRenderer, assets);
    }
    for (list<Unit*>::iterator it = eggs.begin(); it != eggs.end(); ++it){
        (*it)->draw(gRenderer, assets);
    }
    for (list<Unit*>::iterator it = nests.begin(); it != nests.end(); ++it){
        SDL_Rect A = (*it)->Mover();
        for (list<Unit*>::iterator i = eggs.begin(); i != eggs.end(); ++it){
            SDL_Rect B = (*i)->Mover();
            if (SDL_HasIntersection(&A, &B)){
                delete *i;
                eggs.erase(i--);
                pigeons.push_back(new Pigeon(B.x,B.y,true));
            }
        }
        (*it)->draw(gRenderer, assets);
    }
}

void HUMania::createObject(int x, int y){
    int r = rand()%3;//randomly choosing a value from 0, 1 and 2
    std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;
    if (r == 0){//create a pigeon at location (x, y) and push it in the vector of pigeons
        pigeons.push_back(new Pigeon(x,y));
    }
    else if (r == 1){//create a nest at location (x, y) and push it in the vector of nests
        nests.push_back(new Nest(x,y));
    }
    else{//create a egg at location (x, y) and push it in the vector of eggs
        eggs.push_back(new Egg(x,y));
    }
}

HUMania::HUMania(SDL_Renderer *renderer, SDL_Texture *asst):gRenderer(renderer), assets(asst){}
HUMania::~HUMania(){
    for (list<Unit*>::iterator it = pigeons.begin(); it != pigeons.end(); ++it){
        delete *it;
        pigeons.erase(it--);
    }
    for (list<Unit*>::iterator it = eggs.begin(); it != eggs.end(); ++it){
        delete *it;
        eggs.erase(it--);
    }
    for (list<Unit*>::iterator it = nests.begin(); it != nests.end(); ++it){
        delete *it;
        nests.erase(it--);
    }
}