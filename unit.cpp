#include "unit.hpp"

Unit::Unit(){}
Unit::Unit(SDL_Rect m): moverRect(m) {}
Unit::Unit(SDL_Rect s, SDL_Rect m):moverRect(m), srcRect(s) {}
