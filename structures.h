#ifndef STRUCTURES_H
#define STRUCTURES_H
#include <iostream>
#include <vector>
#include <map>
#include <memory>
struct Film{
    int id;
    std::string name;
    std::string ganre;
    std::string producer;
    std::map<int, double>user_grade;
    Film(int id, std::string name, std::string ganre, std::string producer): id(id), name(name), ganre(ganre), producer(producer){};
};

struct User{
    int id;
    std::string name;
    std::vector<int> watched_films;
    User(int id, std::string name): id(id), name(name){}
    void watchFilm(int grade, std::shared_ptr<Film> film){
        watched_films.push_back(film->id);
        film->user_grade[id] = grade;
    }
};

#endif // STRUCTURES_H
