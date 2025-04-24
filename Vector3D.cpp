#include "Vector3D.hpp"
#include <iostream>
using namespace std;

Vector3D::Vector3D(double ax)
{
    x = ax;
    y = 0.0f;
    z = 0.0f;
}

Vector3D::Vector3D(double ax, double ay)
{
    x = ax;
    y = ay;
    z = 0.0f;
}

Vector3D::Vector3D(double ax, double ay, double az)
{
    x = ax;
    y = ay;
    z = az;
}

void Vector3D::setX(double w){
    x = w;
}

void Vector3D::setY(double w){
    y = w;
}

void Vector3D::setZ(double w){
    z = w;
}

double Vector3D::getX(){
    return x;
}

double Vector3D::getY(){
    return y;
}

double Vector3D::getZ(){
    return z;
}

Vector3D::~Vector3D(){
    cout << "Goodbye!" << endl;
}