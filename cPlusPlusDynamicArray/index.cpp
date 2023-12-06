//
// Created by Lenovo on 2023/12/5.
//

#include "vector"
#include "iostream"

struct VectorX {
    float x,y,z;
    VectorX(int a,int b,int c) : x(a), y(b), z(c) {};
    VectorX(const VectorX& vectorX) {
        std::cout << "copied" << std::endl;
    }
//    friend std::ostream& operator <<(std::ostream& stream, const VectorX& vectorX);
};

std::ostream& operator <<(std::ostream& stream, const VectorX& vectorX) {
    return stream << vectorX.x << ", " << vectorX.y << ", " << vectorX.z;
}

void initVector() {
    std::vector<VectorX> vertices;
    vertices.reserve(3);
    vertices.emplace_back(1,2,3);
    vertices.emplace_back(4,5,6);
    vertices.emplace_back(7,8,9);
    for(int i = 0 ; i < vertices.size(); i ++) {
        std::cout << vertices[i] << std::endl;
    }
}
