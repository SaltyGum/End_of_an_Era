#ifndef INTERN_CLASS
#define INTERN_CLASS


#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern;

typedef AForm *(Intern::*Func)(std::string target);

struct Form
{
    std::string id;
    std::string name;
    Func func;
};

class Intern
{
public:
    // Constructors / Destructors
    Intern();
    Intern(Intern const &cp);
    ~Intern();

    //Operators
    Intern& operator=(Intern const &cp);
    AForm *makeForm(std::string type, std::string target);

private:
    // Features
    AForm *pardon(std::string target);
    AForm *robotomy(std::string target);
    AForm *shrubbery(std::string target);
};

#endif