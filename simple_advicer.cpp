#include "simple_advicer.h"
#include <algorithm>
void SimpleAdvicer::giveAdvice(const std::vector<std::shared_ptr<User>> &users,
                               const std::vector<std::shared_ptr<Film>> &films){
    std::shared_ptr<Film> film_for_user;
    for(const auto& user: users){
        if(user->watched_films.size() > 0)
        {
            double max_grade = 0;
            int best_film_id = 0;
            for(auto const& id_film: user->watched_films){
                if(films[id_film]->user_grade[user->id] > max_grade){
                    best_film_id = id_film;
                    max_grade = films[id_film]->user_grade[user->id];
                }

            }
            for(auto const& film: films){
                if(film->ganre == films[best_film_id]->ganre &&
                std::find(user->watched_films.begin(),user->watched_films.end(), film->id) == user->watched_films.end()){
                    std::cout << user->name << ", возможно вас заинтересует фильм \"" << film->name
                              << "\", режиссер " << film->producer << std::endl;
                }
            }

        }
        else
        {
            std::cout << user->name <<", возможно вас заинтересует фильм \"" << films[0]->name
                      << "\", режиссер " << films[0]->producer << std::endl;
        }
    }
}
