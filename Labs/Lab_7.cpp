#include <iostream>
using namespace std;

class CPolygon {
    protected:
    int width, height;
    public:
    void set_values(int a , int b){
        width = a;
        height = b;
    }
};

class CRectangle : public CPolygon{
    public:
    int r_area(int a, int b){
        int area1 = width * height;
        return area1;
    }
};

class CSquare : public CPolygon{
    public:
    int s_area (int a, int b){
        int area2 = width * height;
        return area2;
    }
};

int main(){
    CSquare go;
    go.set_values(4,4);
    go.s_area(4,4);
    int square_area = go.s_area(4,4);
    cout << "Square area: " << square_area << endl;

    CRectangle come;
    come.set_values(12,5);
    come.r_area(12,5);
    int rect_area = come.r_area(12,5);
    cout << "Rectangle area: " << rect_area << endl;
    return 0;  
}