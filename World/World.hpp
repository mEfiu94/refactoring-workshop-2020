#pragma once

class World{
public:
    World(int x, int y):width(x),height(y){};
    int getWidth()const{return width;}
    int getHeight()const{return height;}
    void setWorldSize(int newWidth,int newHeight){
        width=newWidth;
        height=newHeight;
    }
    bool isPositionOutsideMap(int x, int y)const{
        return x < 0 or y < 0 or x >= width or y >= height;
    }
private:
    int width=0;
    int height=0;
};