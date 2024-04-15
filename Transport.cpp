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
        Date departureDate;
        Date arrivalDate;
        Time departureTime;
        Time arrivalTime;
        float pricePerSeat;         // automatically for adult, if any other, discounts can be applied

};

// either each flight instance can be further divided by the class it has OR we can keep track of how many seats per class
// maybe present all classes and then ask to choose?? 
enum FlightClass {economy, premiumEconomy, business};

class Flight : public Transport {
    /*
        attributes:
            airline
            classes -- static
    
    */
    protected:
        string airline;
        FlightClass c;
   

};


class Bus : Transport {
    /*
    attributes:
        AC
        Non-stop

    */
    protected:
        bool AC;            // true if it is an AC bus
        bool nonStop;       // true if the bus goes non stop
};

enum TrainClass {tierOne, tierTwo, tierThree, sleeper};

class Train : Transport {
    /*
    attributes:
        classes -- static
        name
        train no ??

    */
    string name;
    int trainNo;


};