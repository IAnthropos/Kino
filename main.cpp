#include <iostream>
#include <structures.h>
#include <simple_advicer.h>
#include <vector>
#include <memory>

int main()
{
    using namespace std;

    vector<shared_ptr<User>> users{
        make_shared<User>(0, "Денис"),
        make_shared<User>(1, "Мария"),
    };

    vector<shared_ptr<Film>> films{
        make_shared<Film>(0,"Чужой", "ужасы", "Ридли Скотт"),
        make_shared<Film>(1,"Чужой:Завет", "ужасы", "Ридли Скотт"),
        make_shared<Film>(2,"Сияние", "ужасы", "Стэнли Кубрик"),
        make_shared<Film>(3,"Доктор сон", "ужасы", "Майкл Флэнеган"),
        make_shared<Film>(4,"Красота по-американски", "драма", "Алан Болл"),
        make_shared<Film>(5,"Впусти меня", "драма", "Томас Альфредсон"),
    };

    users[0]->watchFilm(9, films[1]);
    users[1]->watchFilm(10, films[4]);
    users[1]->watchFilm(8, films[0]);

    for(const auto &film : films){
        cout << film->name << ", " << film->ganre << ", " <<  film->producer << endl;
        if(film->user_grade.size() > 0){
          cout << "Оценки:" << endl;
          for(const auto &grade: film->user_grade){
              for(const auto &user: users){
                  if(user->id == grade.first){
                      cout << user->name << " " << grade.second << endl;
                  }
              }
          }
        }
        cout << endl;
    }

    SimpleAdvicer simpleAdvicer;
    simpleAdvicer.giveAdvice(users,films);

    return 0;
}
