//
// Created by Lenovo on 2023/12/7.
//

#include "iostream"

template<typename T,size_t S>
class HappyArray {
public:
    constexpr int Size() const { return S; }
    T& operator[](size_t index) {
        return m_Data[index];
    }
    const T& operator[] (size_t index) const { return m_Data[index]; }
    T* Data() {
        return m_Data;
    }
    const T* Data() const {
        return m_Data;
    }
private:
    T m_Data[S];
};

void initCreateArray() {
    int size = 5;
    HappyArray<int, 5> data;
    static_assert(data.Size() < 10, "Size is too large!");
    for(int i = 0 ; i < data.Size(); i++) {
        std::cout << data[i] << std::endl;
    }
    std:: cout << data.Size() << std::endl;
}
