#ifndef SIMPLE_ADVICER_H
#define SIMPLE_ADVICER_H
#include "iadvicer.h"

class SimpleAdvicer : public IAdvicer
{
public:
    virtual void giveAdvice(const std::vector<std::shared_ptr<User>>& users ,
                            const std::vector<std::shared_ptr<Film>>& films) override;
};
#endif // SIMPLE_ADVICER_H
