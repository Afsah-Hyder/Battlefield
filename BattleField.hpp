#include<SDL.h>
#include "Bullet.hpp"
#include "Tank.hpp"
#include<list>
#pragma once
using namespace std;
class BattleField{
    list<Bullet*> bullets;
    list<Tank*> tanks;
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

    public:
    BattleField(SDL_Renderer *, SDL_Texture *);
    void drawObjects(); 
    void createObject(int, int);
    void fire();
    ~BattleField();
};