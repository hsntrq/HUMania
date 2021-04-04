#include "HUMania.hpp"
#include<iostream>
using namespace std;
void HUMania::drawObjects(){//iterating through the vectors and drawing all of the instances
    for (list<Unit*>::iterator it = pigeons.begin(); it != pigeons.end(); ++it){
        (*it)->draw(gRenderer, assets);
    }
    for (list<Unit*>::iterator it = eggs.begin(); it != eggs.end(); ++it){
        (*it)->draw(gRenderer, assets);
    }
    for (list<Unit*>::iterator it = nests.begin(); it != nests.end(); ++it){
        (*it)->draw(gRenderer, assets);
    }
    // for (int i = 0; i < nests.size(); i++){//drawing all the nests
    //     nests[i].draw(gRenderer, assets);
    // };
    // for (int j = 0; j < pigeons.size(); j++){//drawing all the pigeons
    //     pigeons[j].draw(gRenderer, assets);
    // };
    // for (int k = 0; k < eggs.size(); k++){//drawing all the eggs
    //     eggs[k].draw(gRenderer, assets);
    // };
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
