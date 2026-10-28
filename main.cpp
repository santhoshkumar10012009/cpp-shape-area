#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float area() = 0;
};

class Circle : public Shape
{
    float radius;

public:
    void getData()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    float area() override
    {
        return 3.14f * radius * radius;
    }
};

class Rectangle : public Shape
{
    float length, breadth;

public:
    void getData()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    float area() override
    {
        return length * breadth;
    }
};

class Triangle : public Shape
{
    float base, height;

public:
    void getData()
    {
        cout << "Enter base: ";
        cin >> base;

        cout << "Enter height: ";
        cin >> height;
    }

    float area() override
    {
        return 0.5f * base * height;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    Triangle t;

    Shape *ptr;

    // Get all inputs first
    c.getData();
    r.getData();
    t.getData();

    // Display all results
    cout << "\n--- Area Results ---\n";

    ptr = &c;
    cout << "Area of Circle: " << ptr->area() << endl;

    ptr = &r;
    cout << "Area of Rectangle: " << ptr->area() << endl;

    ptr = &t;
    cout << "Area of Triangle: " << ptr->area() << endl;

    return 0;
}