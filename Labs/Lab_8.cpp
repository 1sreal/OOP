#include <iostream>
using namespace std;

class CPolygon {
protected:
    int width, height;
public:
    virtual void set_values(int a, int b) {
        width = a;
        height = b;
    }
    virtual int area() {
        return 0;
    }
};

class CRectangle : public CPolygon {
public:
    void set_values(int a, int b) {
        width = a;
        height = b;
    }
    int area() override {
        return width * height;
    }
};

class CTriangle : public CPolygon {
public:
    void set_values(int a, int b) {
        width = a;
        height = b;
    }
    int area() override {
        return 0.5 * width * height;
    }
};


