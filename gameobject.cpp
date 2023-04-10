#include "gameobject.h"

GameObject::GameObject(double x, double y, double width, double height)
    :x_{x}
    ,y_{y}
    ,width_{width}
    ,height_{height}
{
}

GameObject:: ~GameObject() = default;

double GameObject::getX()
{
    return x_;
}

double GameObject::getY()
{
    return y_;
}

double GameObject::getWidth()
{
    return width_;
}

double GameObject::getHeight()
{
    return height_;
}

void GameObject::setX(double x)
{
    x_ = x;
}

void GameObject::setY(double y)
{
    y_ = y;
}

void GameObject::setWidth(double width)
{
    width_ = width;
}

void GameObject::setHeight(double height)
{
    height_ = height;
}
