#include <boost/python.hpp>
#include "main.cpp"

BOOST_PYTHON_MODULE(decision)
{
    using namespace boost::python;
    def("SomeCalculation",SomeCalculation );
}
