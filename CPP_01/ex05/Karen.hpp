#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string.h>

class Karen
{
    public:
        void complain( std::string level );
        Karen(void);
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        static std::string _slevel[4];
        typedef void (Karen::*fun)(void);
        fun _flevel[4];
};

#endif