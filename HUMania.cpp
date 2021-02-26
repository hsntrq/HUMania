#include "HUMania.hpp"
#include<iostream>
using namespace std;
void HUMania::drawObjects(){
    for (int k=0; k < nests.size(); k++){
        nests[k].draw(gRenderer, assets);
    };
    for (int i=0; i < pigeons.size(); i++){
        pigeons[i].draw(gRenderer, assets);
    };
    for (int j=0; j < eggs.size(); j++){
        eggs[j].draw(gRenderer, assets);
    };
}

void HUMania::createObject(int x, int y){
    int r = rand()%3;
    std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;
    if (r == 0){
        Pigeon p1(x,y);
        pigeons.push_back(p1);
    }
    else if (r == 1){
        Nest n(x,y);
        nests.push_back(n);
    }
    else{
        Egg e(x,y);
        eggs.push_back(e);
        cout<<eggs.size()<<endl;
    }
}

HUMania::HUMania(SDL_Renderer *renderer, SDL_Texture *asst):gRenderer(renderer), assets(asst){}
