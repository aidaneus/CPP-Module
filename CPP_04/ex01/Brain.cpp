#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain was added" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 != 0)
            ideas[i] = "sleep";
        else
            ideas[i] = "eat";
        // std::cout <<  ideas[i] << std::endl;
    }
}

Brain::Brain(const Brain & brain)
{
    std::cout << "Copy Brain" << std::endl;
    this->operator=(brain);
}

std::string *Brain::getIdeas()
{
    return this->ideas;
}

Brain::~Brain()
{
    std::cout << "Brain was deleted" << std::endl;
}

Brain & Brain::operator=(const Brain & brain)
{
    if (this == &brain)
        return (*this);
        for(int i = 0; i < 100; i++)
            this->ideas[i] = brain.ideas[i];
        return (*this);
}
