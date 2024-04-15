#include <iostream>
#include "Date.h"
using namespace std;

class Transport {

    protected:
        string from;
        string to;
        Date departureDate;
        Date arrivalDate;
        Time departureTime;
        Time arrivalTime;
        float pricePerSeat;         // automatically for adult, if any other, discounts can be applied

};

enum FlightClass {economy, premiumEconomy, business};

class Flight : public Transport {

    protected:
        string airline;
        FlightClass c;
   
};


class Bus : Transport {

    protected:
        bool AC;            // true if it is an AC bus
        bool nonStop;       // true if the bus goes non stop
};

enum TrainClass {tierOne, tierTwo, tierThree, sleeper};

class Train : Transport {

    string name;
    int trainNo;

};