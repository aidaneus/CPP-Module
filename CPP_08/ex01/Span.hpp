# include <iostream>
# include <stdint.h>
# include <cstdlib>
# include <algorithm>
# include <map>
# include <list>
# include <stack>
# include <vector>
# include <numeric>

class Span
{
	
	public:
		Span(const uint &);
		Span(const int &, const int &);
		Span(Span const &);
		virtual ~Span();
	
		Span &					operator=(Span const &);

		std::list<int> const &	getList(void) const;

		void					addNumber(const int &);
		int						shortestSpan(void) const;
		int						longestSpan(void) const;

	private:
		Span(void);

		uint				_n;
		std::list<int>		_lst;

	public:
		class NoSpanToFind : public std::exception
		{
			public:
				const char *	what(void) const throw();
		};
		
		class TooMuchNumbersStored : public std::exception
		{
			public:
				const char *	what(void) const throw();
		};
	
};

std::ostream &	operator<<(std::ostream &, Span const &);
