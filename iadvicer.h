#ifndef IADVICER_H
#define IADVICER_H
#include "structures.h"
#include <memory>
#include <vector>
class IAdvicer{
public:
    ~IAdvicer() = default;
    virtual void giveAdvice(const std::vector<std::shared_ptr<User>>& users ,
                            const std::vector<std::shared_ptr<Film>>& films) = 0;
};
#endif // IADVICER_H
