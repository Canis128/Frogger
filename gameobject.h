#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H


class GameObject
{
public:
    GameObject(double x, double y, double width, double height);
    ~GameObject();

    void setX(double x);
    double getX();

    void setY(double y);
    double getY();

    void setWidth(double width);
    double getWidth();

    void setHeight(double height);
    double getHeight();

private:
    double x_;
    double y_;
    double width_;
    double height_;
};

#endif // GAMEOBJECT_H
