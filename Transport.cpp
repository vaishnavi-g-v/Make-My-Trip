#include <iostream>
#include "Date.h"
using namespace std;

class Transport {
    // the parent class for defining the main type we will be handling throughouot the application
    // we deal with instances of either Transport objects or its children objects when planning Trip, which is the main aspect of the application
    // main classes we'll be dealing with are Flight, Bus, Train

    // There should also be a provision for creating, deleting, updating details of instances with the database

    // what to do about seat selection -- chuck for now

/*
    common attributes:
        from
        to
        departure date
        arrival date
        departure time
        arrival time
        price per seat

    common functionalities:
        fetching details of each instance -- details vary per instance -- create a templatized struct for that?? 
        adding instance to db
        update values

*/

    protected:
        string from;
        string to;

};

class Flight : Transport {
    /*
        attributes:
            airline
            classes -- static
    
    */

};
class Bus : Transport {
    /*
    attributes:
        AC
        Non-stop

    */
};
class Train : Transport {
    /*
    attributes:
        classes -- static
        name
        train no ??

    
    */
};