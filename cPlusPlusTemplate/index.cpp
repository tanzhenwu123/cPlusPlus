//
// Created by Lenovo on 2023/12/6.
//

#include "iostream"

template<typename T>
void PrintTemplate(T value) {
    std::cout << value << std::endl;
}

template<typename T,int N>
class ArrayTemplate {
private:
    T array[N];
public:
    int GetSize() const {
        return N;
    }
};

void initTemplate() {
    PrintTemplate<int>(123);
    PrintTemplate<char*>("Hello");
    ArrayTemplate<int,5> array;
    PrintTemplate<int>(array.GetSize());
    PrintTemplate<bool>(true);
}
