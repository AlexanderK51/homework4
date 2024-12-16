#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
public:
    Ball::Ball();
    Ball::Ball(const Point& center, const Velocity& velocity, const Color& color, double radius);
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;

    void setColor(const Color& color);
    double _radius;
    Color _color;
    Velocity _velocity;
    Point _point_center;
};
