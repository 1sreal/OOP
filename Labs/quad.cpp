#include <iostream>
using namespace std;

class quadrilateral{
    private:
        int area1;
        int x;
        int y;
    public:
    void set_values(int a, int b){
        x =  a;
        y =  b;
    }
    int area(){
        area1 = x * y;
        return area1;
    }
};

int main(){
    quadrilateral square;
    quadrilateral rectangle;

    square.set_values(10,10);
    rectangle.set_values(5,10);

    cout << "Area of square: " << square.area() << endl;
    cout << "Area of rectangle: " << rectangle.area() << endl;

    return 0;
}
