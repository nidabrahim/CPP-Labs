#include "point.hpp"



std::ostream & operator<<(std::ostream & out, const Point & p)
{
	return p.fillStream(out);
}
