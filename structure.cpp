#include <iostream>

// for self reference, does not contain any code, only to structure and organize different entities and
// see where I can use Generic programming principles

// in place of db, can use hardcoded values




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
        departure
        arrival
        price per seat

    common functionalities:
        fetching details of each instance -- details vary per instance -- create a templatized struct for that?? 
        adding instance to db
        on booking, instance data needs to be updated -- whichever is necessary



*/

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

class Trip {
    // contains a list of hops
    // each hop can be a different transport
    
    // needs to store the searched instances for a particular hop

/*
    functionalities:
        

*/


};

class Booking {
    // contains details about Trip, a trip object and passenger details that can be added to every instance in the Trip Object

};