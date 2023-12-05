//
// Created by Lenovo on 2023/12/5.
//

#include "vector"
#include "iostream"

struct VectorX {
    float x,y,z;
};

void initVector() {
    std::vector<VectorX> vertices;
    vertices.push_back({1,2,3});
    for(VectorX v:vertices) {
        std::cout << v << std::endl;
    }
}
