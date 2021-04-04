#include <SDL.H>
#pragma once //only include once
class Unit   //parent class for all the actors (i.e. nest, egg, pigeon)
{
protected: //accessable in the child classes only
    SDL_Rect srcRect;
    SDL_Rect moverRect;

public:
    Unit();           //default constructor
    Unit(SDL_Rect m); //overloaded constructors
    Unit(SDL_Rect s, SDL_Rect m);
    virtual bool is_delete() = 0;                               //function for the child class if the object is to be deleted
    SDL_Rect Mover();                                           //returns current position of the object
    virtual void draw(SDL_Renderer *, SDL_Texture *assets) = 0; //function for child class to draw the object
};
