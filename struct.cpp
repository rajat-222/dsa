#include<iostream>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r;
    // r = {10 ,15};
    r.length = 10;
    r.breadth = 15;
    int area = r.breadth * r.length;
    cout<<"area is"<<" ";
    cout<<area<<endl;
}