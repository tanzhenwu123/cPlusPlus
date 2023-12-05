//
// Created by Lenovo on 2023/12/5.
//

#include "iostream"
#include "memory"

class Arrow {
public:
    void Print() const {
        std::cout << "hello" << std::endl;
    }
};

void initArrow() {
    Arrow arrow;
    Arrow* arrow1 = &arrow;
    std::unique_ptr<Arrow> arrow2 = std::make_unique<Arrow>();
    arrow2->Print();
    arrow1->Print();
    arrow.Print();
}
