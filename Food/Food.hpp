#pragma once
class Food{
public:
    Food():position_x(0),position_y(0){};
    void setNewPosition(int x,int y){position_x=x;position_y=y;};
    int getXcoordinate() const{return position_x;}
    int getYcoordinate() const{return position_y;}
private:
    int position_x;
    int position_y;
};