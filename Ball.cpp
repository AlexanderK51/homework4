#include "Ball.hpp"
#include <cmath>

Ball::Ball() = default;

Ball::Ball(const Point& center, const Velocity& velocity, const Color& color, double radius)
{   
    setColor(color);
    setVelocity(velocity);
    setCenter(center);
    _radius = radius;
}

/**
 * Задает скорость объекта
 * @param velocity новое значение скорости
 */
void Ball::setColor(const Color& color)
{
    _color = color;
}



void Ball::setVelocity(const Velocity& velocity) {
    // TODO: место для доработки
    _velocity = velocity;
}

/**
 * @return скорость объекта
 */
Velocity Ball::getVelocity() const {
    // TODO: место для доработки
    return {_velocity};
}

/**
 * @brief Выполняет отрисовку объекта
 * @details объект Ball абстрагирован от конкретного
 * способа отображения пикселей на экране. Он "знаком"
 * лишь с интерфейсом, который предоставляет Painter
 * Рисование выполняется путем вызова painter.draw(...)
 * @param painter контекст отрисовки
 */
void Ball::draw(Painter& painter) const {
    // TODO: место для доработки
    //painter.draw(getCenter(), getRadius(), Color (5,5,5));
    painter.draw(_point_center, _radius, _color);
}

/**
 * Задает координаты центра объекта
 * @param center новый центр объекта
 */
void Ball::setCenter(const Point& center) {
    // TODO: место для доработки
    //Point{10,10};
    _point_center = center; 
}

/**
 * @return центр объекта
 */
Point Ball::getCenter() const {
    // TODO: место для доработки
    return {_point_center};
}

/**
 * @brief Возвращает радиус объекта
 * @details обратите внимание, что метод setRadius()
 * не требуется
 */
double Ball::getRadius() const {
    // TODO: место для доработки
    return {_radius};
}

/**
 * @brief Возвращает массу объекта
 * @details В нашем приложении считаем, что все шары
 * состоят из одинакового материала с фиксированной
 * плотностью. В этом случае масса в условных единицах
 * эквивалентна объему: PI * radius^3 * 4. / 3.
 */
double Ball::getMass() const {
    // TODO: место для доработки
    return {(3.14 * _radius *_radius * _radius * 4) / 3};
}
