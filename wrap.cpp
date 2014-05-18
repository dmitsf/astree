#include <boost/python.hpp>
#include "some.h"

using namespace boost::python;

BOOST_PYTHON_MODULE( example )
{
    class_<Some>( "Some" )
        .def( init<int,string>( args( "some_id", "name" ) ) )
        .def( "ID", &Some::ID )
        .def( "Name", &Some::Name, return_value_policy<copy_const_reference>() )
        .def( "ResetID", static_cast< void (Some::*)() >( &Some::ResetID ) )
        .def( "ResetID", static_cast< void (Some::*)(int) >( &Some::ResetID ), args( "some_id" ) )
        .def( "ChangeName", &Some::ChangeName, args( "name" ) )
        .def( "SomeChanges", &Some::SomeChanges, args( "some_id", "name" ) )
        .add_static_property( "NOT_AN_IDENTIFIER", make_getter( &Some::NOT_AN_IDENTIFIER ) )
    ;
}
