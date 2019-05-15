#include <cstdlib> // for abs(long long int)

#include "rational.h"
#include "dividebyzeroerror.h"
#include "gcd.h"

namespace ExactArithmetic
{

////////////  Default constructor, creates an Integer with value 0. ////////////

Integer::Integer()
{

}


//////////////////////////// Converting constructor ////////////////////////////

Integer(unsigned long long int)
{

}

////////////////////////////////////////////////////////////////////////////////

// Accepts a sequence of digits.
// For any other input, throws a std::invalid_argument exception.
// (For full integers, it should also allow an optional initial  '+' or '-' character.)
explicit Integer(const std::string &)
{

}

///////////////////////////// Arithmetic Operators /////////////////////////////

// Add
Integer operator+(const Integer &) const
{

}

// Subtract
Integer operator-(const Integer &) const
{

}

// Multiply
Integer operator*(const Integer &) const
{

}

// Divide
Integer operator/(const Integer &) const
{

}

// Modulo
Integer operator%(const Integer &) const
{

}

///////////////////////////// Comparison Operators /////////////////////////////

// Less than
bool operator<(const Integer &) const
{

}

// More than
bool operator>(const Integer &) const
{

}

// Less than or equal to
bool operator<=(const Integer &) const
{

}

// More than or equal to
bool operator>=(const Integer &) const
{

}

// Equal to
bool operator==(const Integer &) const
{

}

// Not equal to
bool operator!=(const Integer &) const
{

}

//////////////////////// Compound Assignment Operators /////////////////////////

Integer & operator+=(const Integer &)
{

}

Integer & operator-=(const Integer &)
{

}

Integer & operator*=(const Integer &)
{

}

Integer & operator/=(const Integer &)
{

}

Integer & operator%=(const Integer &)
{

}

///////////////////// Increment and Decrement Operators ////////////////////////

Integer & operator++() // pre-increment
{

}

Integer operator++(int) // post-increment
{

}

Integer & operator--() // pre-decrement
{

}

Integer operator--(int) // post-decrement
{

}

///////////////////////////// Friend Declarations //////////////////////////////

friend std::ostream & operator<<(std::ostream &, const Integer &)
{

}

friend std::istream & operator>>(std::istream &, Integer &)
{

}

} // End of namespace ExactArithmetic
