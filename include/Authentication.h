#ifndef AUTHENTICATION_H
#define AUTHENTICATION_H

#include <string>
using namespace std;

class Authentication {
private:
    string adminUser;
    string adminPass;

public:
    Authentication();
    bool login();
};

#endif
