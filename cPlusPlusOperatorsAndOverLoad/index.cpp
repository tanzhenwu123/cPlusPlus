//
// Created by Lenovo on 2023/12/5.
//

#include "iostream"

struct Vector2{
    float x,y;
    Vector2(float x,float y): x(x),y(y) {};

    Vector2 operator+(const Vector2& vector) const {
        return Vector2(x+vector.x,y+vector.y);
    }

    Vector2 operator*(const Vector2& vector) const {
        return Vector2(x*vector.x,y*vector.y);
    }
};

std::ostream& operator<<(std::ostream& stream, const Vector2& vector) {
    return stream << vector.x << "," << vector.y << std::endl;
}

void initOperatorsAndOverLoad(){
    Vector2 Position(1.12f,2.24f);
    Vector2 Speed(3.36f,4.48f);
    Vector2 PowerUp(5.6f,6.72f);
    Vector2 result = Position + Speed * PowerUp;
    std::cout << result << std::endl;
};
