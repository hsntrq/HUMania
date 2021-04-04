#include "unit.hpp"

Unit::Unit() {}                          //default constructor
Unit::Unit(SDL_Rect m) : moverRect(m) {} //overloaded constructors
Unit::Unit(SDL_Rect s, SDL_Rect m) : moverRect(m), srcRect(s) {}
SDL_Rect Unit::Mover() //returns currents position of the object
{
    return moverRect;
}