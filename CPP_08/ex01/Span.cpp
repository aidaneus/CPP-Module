#include "Span.hpp"
#include <limits.h>

Span::Span(const uint &n) : _n(n), _lst(0)
{}

Span::Span(const int &range_min, const int &range_max) :
	_n(std::abs(range_max - range_min)),
	_lst(std::list<int>(_n))
{
	if (range_min < range_max)
		std::iota(_lst.begin(), _lst.end(), range_min);
	else
	{
		std::iota(_lst.begin(), _lst.end(), range_max);
		_lst.reverse();
	}
}

Span::Span(Span const &ref)
{
	*this = ref;
}

Span::~Span()
{}

Span &					Span::operator=(Span const &ref)
{
	if (this == &ref)
		return *this;
	
	_n = ref._n;
	_lst = ref._lst;
	return *this;
}

std::list<int> const &	Span::getList(void) const { return _lst; }

void					Span::addNumber(const int &nb)
{
	if (_lst.size() == _n)
		throw Span::TooMuchNumbersStored();
	
	_lst.push_back(nb);
}

int						Span::shortestSpan(void) const
{
	if (_lst.size() <= 1)
		throw Span::NoSpanToFind();

	Span								tmp(*this);
	std::list<int>::const_iterator		it;
	std::list<int>::const_iterator		ite;
	int									span = INT_MAX;
	int									tmp_span;

	tmp._lst.sort();
	tmp._lst.unique();

	for ( it = tmp._lst.begin(), ite = tmp._lst.end() ; it != ite ; ++it)
	{
		tmp_span = std::abs(*it - *std::next(it, 1));
		if (span > tmp_span)
			span = tmp_span;
	}

	return span;
}

int						Span::longestSpan(void) const
{
	if (_lst.size() <= 1)
		throw Span::NoSpanToFind();

	Span		tmp(*this);
	const int	max = *std::max_element(tmp._lst.begin(), tmp._lst.end());
	const int	min = *std::min_element(tmp._lst.begin(), tmp._lst.end());

	return max - min;
}

const char *			Span::NoSpanToFind::what(void) const throw()
{
	return "No Span To Find";
}

const char *			Span::TooMuchNumbersStored::what(void) const throw()
{
	return "Too Much Numbers Stored";
}

std::ostream &	operator<<(std::ostream &os, Span const &ref)
{
	std::list<int>::const_iterator	it = ref.getList().begin();
	std::list<int>::const_iterator	ite = ref.getList().end();

	os << "[";
	for (; it != ite ; ++it)
	{
		os << *it;
		if (std::next(it, 1) != ite)
			os << ", ";
	}
	os << "]";
	
	return os;
}
