#include "Bullet.hpp"    
#include <iostream>

    Bullet::Bullet(SDL_Renderer* rend, SDL_Texture* ast, SDL_Rect mov): Unit(rend, ast), mover(mov){
        src = {616, 201, 302, 96};
    }

    void Bullet::draw(){
        if(mover.x<950){
            Unit::draw(src, mover);
            mover.x+=15;
        }
        else{
            frame_check=true;
            blast();
        }
    }

        void Bullet::blast(){
            if(frame==0 && frame_check){
                src={39,394,92,95};
                frame++; frame_check=false;
            }
            if(frame==1 && frame_check){
                src={189,373,133,141};
                frame++; frame_check=false;
            }
            if(frame==2 && frame_check){
                src={339,362,162,165};
                frame++; frame_check=false;
            }
            if(frame==3 && frame_check){
                src={506,362,162,165};
                frame++; frame_check=false;
            }
            if(frame==4 && frame_check){
                src={681,362,154,165};
                frame++; frame_check=false;
            }
            if(frame==5 && frame_check){
                src={847,362,154,165};
                frame++; frame_check=false;
            }
            if(frame==6 && frame_check){
                src={1010,362,158,165};
                frame++; frame_check=false;
                check=false;
            }
            if(check==true){
                Unit::draw(src, {mover.x, mover.y-9, 50, 50});
            }
            
        }

        bool Bullet::out_screen(){
            return check;
        }
    