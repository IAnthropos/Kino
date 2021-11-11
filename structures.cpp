#include <iostream>
#include <vector>
#include <map>

struct Film{
    int id;
    std::string name;
    Film(int id, std::string name): id(id), name(name){};
};

struct User{
    int id;
    std::string name;
};
