//
// Created by Lenovo on 2023/12/1.
//

#include "string"
#include "iostream"

class Member {
private:
    std::string m_Name;
    int m_Score;
public:
    Member() : m_Name("unKnow"),m_Score(22) {
    }
    Member(const std::string& PropA, const int PropB) : m_Name(PropA),m_Score(PropB) {
    }
    const std::string GETNAME() const {
        return m_Name;
    }
    const int GETSCORE() const {
        return m_Score;
    }
};

void initMember () {
    Member member;
    std::cout << member.GETNAME() << member.GETSCORE() << std::endl;
    Member member2("ZhenWu", 33);
    std::cout << member2.GETNAME() << member2.GETSCORE() << std::endl;
};
