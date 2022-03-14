#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include <iostream>

# include "Form.hpp"

class	ShrubberyCreationForm: public Form
{
private:
	static const int	gradeSign = 145;
	static const int	executeSign = 137;

	ShrubberyCreationForm();
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const& scf);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& scf);

	virtual void		execute(Bureaucrat const& brcrt) const;
};

#endif
