#include "../include/Authentication.h"
#include <iostream>
using namespace std;

Authentication::Authentication() {
    adminUser = "admin";
    adminPass = "1234";
}

bool Authentication::login() {
    string u, p;
    cout << "\nUsername: ";
    cin >> u;
    cout << "Password: ";
    cin >> p;

    return (u == adminUser && p == adminPass);
}
