#include <iostream>
#include <vector>

using namespace std;

// Create a Shape class, inherit two derived class from it
// One should be Circle, and the other one is Triangle
// For each derived class, implement a calc_area() method
// which calculates the area of the shape and stores it inside
// the class (so it is a private field)
//------------------------------------------------------------
// Continue the Shape exercise!
// Create getter methods for each values
// (for example: in a Triangle class you should be able to
// get: Height, Base and Area)

class Shape {
    protected:
        float area;
        virtual void calc_area() = 0;
};

class Circle: public Shape {
    protected:
        void calc_area(){
            this->area = 3.1416 * radius * radius;
        }
    private:
        float radius;
    public:
        void set_radius(float radius){
            this->radius = radius;
            calc_area();
        }
        float get_area(){
            return area;
        }
};

class Triangle: public Shape {
    protected:
       void calc_area(){
            this->area = (height * base) / 2;
        }
    private:
        float height;
        float base;
    public:
        void set_datas(float height, float base) {
            this->height = height;
            this->base = base;
            calc_area();
        }
        float set_datas(){
            return area;
        }
        float get_area(){
            return area;
        }
};

int main(){

    Circle circle_object;
    circle_object.set_radius(5);
    cout << "the area is: " << circle_object.get_area() << endl;

    Triangle triangle_object;
    triangle_object.set_datas(12, 36);
    cout << "the area is: " << triangle_object.get_area() << endl;

    return 0;
}
