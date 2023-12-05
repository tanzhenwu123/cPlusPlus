//
// Created by Lenovo on 2023/12/5.
//

#include <cstring>
#include "iostream"
#include "string"

class String {
private:
    char* m_Buffer;
    unsigned int m_Size;
public:
    String(const char* buffer) {
        m_Size = strlen(buffer);
        m_Buffer = new char[m_Size+1];
        memcpy(m_Buffer,buffer,m_Size);
        m_Buffer[m_Size] = 0;
    }
    String(const String& other): m_Buffer(other.m_Buffer), m_Size(other.m_Size) {
        m_Buffer = new char[m_Size+1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }
    ~String() {
        delete[] m_Buffer;
    }

    char& operator[](unsigned int index) {
        return m_Buffer[index];
    }

    friend std::ostream& operator <<(std::ostream& stream, const String& string);
};

std::ostream& operator <<(std::ostream& stream, const String& string) {
    stream << string.m_Buffer;
    return stream;
}

void initCopy() {
    String string1("zhenwu");
    String string2 = string1;
    string2[0] = 's';
    std::cout << string1 << std::endl;
    std::cout << string2 << std::endl;
}
