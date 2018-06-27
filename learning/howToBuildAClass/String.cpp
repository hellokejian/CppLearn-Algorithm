//
// Created by andy on 6/18/18.
//

#include <iostream>
#include <cstring>

using namespace std;

class String {
public:
    String(const char *data);

    String(const String &str);

    String &operator=(const String &str);

    char *get_c_char() const { return m_data; }

    ~String();

private:
    char *m_data;
};

String::String(const char *data = 0) {
    if (data) {
        printf("constructing with not 0\n");
        m_data = (char *) malloc(strlen(data) + 1);
        strcpy(m_data, data);
    } else {
        printf("constructing with 0\n");
        m_data = new char[1];
        *m_data = '\0';
    }
}

// copy constructor
String::String(const String &str) {
//    char *data = str.get_c_char();
    m_data = (char *) malloc(strlen(str.m_data) + 1);
    strcpy(m_data, str.m_data);
}

// copy assignment constructor
String &String::operator=(const String &str) {
    if (this == &str) {
        return *this;
    }
    delete (m_data);
    // char *data = str.get_c_char();
    m_data = (char *) malloc(strlen(str.m_data) + 1);
    strcpy(m_data, str.m_data);
    return *this;
}

inline
String::~String() {
    delete (m_data);
}

/****************************non menber function*************************/
inline ostream &
operator<<(ostream &os, const String &str) {
    return os << str.get_c_char() << endl;
}

int main() {
    String s1("hello");
    const String &s2(s1);
    String s3("kejian");
    s3 = s1;
    cout << s1;
    cout << s2;
    cout << s3;
    String *p = new String("hnust");
    delete (p);
//    char *c = new char[10];
//    c[0] = 'g';
//    printf("%c\n", c[0]);
//    cout << sizeof(c[0]) / sizeof(char) << endl;
    String *pp = new String[3];
    cout << sizeof(pp) / sizeof(String) << endl;
    delete []pp;
}