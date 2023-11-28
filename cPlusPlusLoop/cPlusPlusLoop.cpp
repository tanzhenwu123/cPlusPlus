//
// Created by Lenovo on 2023/11/28.
//

#include "cPlusPlusLoop.h"

void Loop() {
    int loopList[] = {8,2,4,9,3,6};
    for(int i = 1; i < sizeof(loopList)/sizeof(loopList[0]); i++) {
        int keyWord = loopList[i];
        int index = i - 1;
        while (i >=0 && loopList[index] > keyWord) {
            loopList[index + 1] = loopList[index];
            index = index - 1;
        }
        loopList[index + 1] = keyWord;
    }
    using namespace std;
    cout << loopList << endl;
}
