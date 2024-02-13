#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect* a,Rect* b){
    double x_long,y_long;
    if(a->x+a->w>=b->x+b->w and a->y>=b->y and a->h>=(a->y-b->y)+b->h){
            return b->w*b->h;  
        }
        if(b->x+b->w>=a->x+a->w and b->y>=a->y and b->h>=(b->y-a->y)+a->h){
            return a->w*a->h;  
        }
    if(a->x<=b->x){
        if(a->y<=b->y){
            x_long=a->w-(b->x-a->x);
            y_long=a->h-(b->y-a->y);
            if(x_long*y_long<=0){
                return 0;}
            return x_long*y_long;
        }
        else{
            x_long=a->w-(b->x-a->x);
            y_long=a->h-(a->y-b->y);
            if(x_long*y_long<=0){
                return 0;}
            return x_long*y_long;
        }
    }
    else{
        if(a->y<=b->y){
            x_long=b->w-(b->x-a->x);
            y_long=b->h-(b->y-a->y);
            if(x_long*y_long<=0){
                return 0;}
            return x_long*y_long;
        }
        else{
            x_long=b->w-(b->x-a->x);
            y_long=b->h-(a->y-b->y);
            if(x_long*y_long<=0){
                return 0;}
            return x_long*y_long;
        }
    
    }

}