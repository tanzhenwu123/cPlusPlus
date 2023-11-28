//
// Created by Lenovo on 2023/11/28.
//

#include "iostream"

// 这种微风穿过发隙的感觉 我感觉23岁这关应该没问题
// 为什么学c++？谭某被生活吊起来拷打 感觉人生就不能让我安心的当个fw
// 于是一边拉扯起了生活
// 一边忽有狂徒夜磨刀
// 2023年11月28记 一次性三门全考过了 感觉不错

// 类是对数据和功能组合在一起的方法
class Player {
public:
    int x,y;
    int speed;
    void Move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }
};

void playerLog() {
    Player player = {
            x: 0,
            y: 0,
            speed: 1,
    };
    player.Move(1,1);
    using namespace std;
    cout<<"player PageX:"<<player.x<<", "<<"player PageY:"<<player.y<<endl;
}

// 有种感觉叫边学边拉
// 类和构造体的区别
// 就一句话
// 从技术上讲 class默认属性为private 构造体默认public，而构造体存在不仅仅是为了少那么一句public，c++在考虑对c的向后兼容时保存了构造体的关键字
// 这样在c++的编译器编译时就不会不认得构造体

class logUtil {
public:
    enum level{
        Error = 0,
        Waring = 1,
        Info = 2
    };
private:
    level logLevel;
public:
    void setLevel(level level) {
        logLevel = level;
    };
    void sendLogger(const char* message) {
        char* logList[] = {
                "[ERROR] -> ",
                "[WARNING] -> ",
                "[INFO] -> "
        };
        std::cout<<logList[logLevel]<<message<<std::endl;
    };
};

void achieveLogUtil() {
    logUtil LogUtil;
    LogUtil.setLevel(logUtil::Error);
    LogUtil.sendLogger("code: 1040");
}