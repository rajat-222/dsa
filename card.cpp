#include<iostream>
#include<stdio.h>

using namespace std;

struct card{
    int face;
    int shape;
    int color;
};

int main(){
    // struct card c;
    // c.face = 1;
    // c.shape = 3;
    // c.color = 0;

    struct card deck[52] = {{1,0, 0}, {2,0,0}, {3,0,0}, {4,0,0},
                            {1,1,0}, {2,1,0}, {3,1,0}, {4,1,0},
                            {1,2,0}, {2,2,0}, {3,2,0}, {4,2,0},
                            {1,3,0}, {2,3,0}, {3,3,0}, {4,3,0},
                            {1,4,0}, {2,4,0}, {3,4,0}, {4,4,0},
                            {1,1,1}, {2,1,1}, {3,1,1}, {4,1,1}};
    printf("%d", deck[0].shape);

}
