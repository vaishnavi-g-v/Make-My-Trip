#include <iostream>
// currently using stl library, will replace with self coded vector
#include <bits/stdc++.h>
#include <string>
#include <ctime>

using namespace std;


vector<string> simple_tokenizer(string s)
{
    stringstream ss(s);
    string word;
    vector<string> words;
    while (ss >> word) {
        words.push_back(string(word));
    }

    // for(auto x : words){
    //     cout << x << endl;
    // }

    return move(words);

}

class Date {
    private:
        string dayOfWeek;
        int day;
        int month;
        int year;

        int getMonth(string m){
            if(m == "Jan") return 1;
            if(m == "Feb") return 2;
            if(m == "Mar") return 3;
            if(m == "Apr") return 4;
            if(m == "May") return 5;
            if(m == "Jun") return 6;
            if(m == "Jul") return 7;
            if(m == "Aug") return 8;
            if(m == "Sep") return 9;
            if(m == "Oct") return 10;
            if(m == "Nov") return 11;
            if(m == "Dec") return 12;

            return 0;
        }

    public:
        Date() {
            time_t now = time(0);
            char* date_time = ctime(&now);
            string d(date_time);
            vector<string> words = simple_tokenizer(d);

            // for(auto x : words){
            //     cout << x << endl;
            // }

            dayOfWeek = words[0];
            month = getMonth(words[1]);
            day = atoi(words[2].c_str());
            year = atoi(words[4].c_str());

        }

        void getDate(){
            cout << "day: " << day << endl;
            cout << "month: " << month << endl;
            cout << "year: " << year << endl;
        }
};

class Booking;

enum Gender {
    Male, Female
};

enum TravellerType {
    adult, child, infant
};


class Traveller {
    private:
        string name;
        Gender g;
        TravellerType t;
        int mobileNumber;

    public:

        Traveller(){}
        // without mobile number, the traveller can be anyone
        Traveller(string name, Gender g, TravellerType t){
            this->name.assign(name);
            this->g = g;
            this->t = t;
        }

        // to have a mobile number, the passenger must be an adult in a flight
        // but, in other transports, all passengers are treated as adults, and phone number is optional
        Traveller(string name, Gender g, int mobileNumber = -1, TravellerType t = adult) : Traveller(name, g, t) {
            this->mobileNumber = mobileNumber;
        }
};

class Transport {
    // protected:
        // vector<string> getFilters(){}
        // vector<Transport> getOptions(){} // we can pass filter functions into get options????
        // vector<string> getDetails(){}
        // void book(){}


    protected:
        string from;
        string to;


        virtual void printType() = 0;
        virtual vector<string> getFields() = 0;
        
    friend class Booking;

};

enum FlightClass {
    economy, premiumEconomy, business
};

class Flight : public Transport {
    private:
        FlightClass flightClass;
    public:
        void printType() override {cout<< "Flight";}
        vector<string> getFields(){
            
        };

};

class Bus : public Transport {
    void printType(){cout << "Bus";}
    vector<string> getFields(){

    };
};

class Train : public Transport {
    void printType(){cout << "Train";}
    vector<string> getFields(){

    };
};

class Cab : public Transport {
    void printType(){cout << "Cab";}
    vector<string> getFields(){

    };
};

enum TripType {
    oneWay, roundAbout, multiCity
};

enum TransportType {
    flight, bus, train, cab
};

TransportType transportConvert(string s){
    if(s == "flight") return flight;
    else if(s == "train") return train;
    else if(s == "cab") return cab;
    else if(s == "bus") return bus;
}

TripType tripConvert(string s){
    if(s == "one way") return oneWay;
    else if(s == "round about") return roundAbout;
    else if(s == "multicity") return multiCity;
}


class Booking {
    private:
        vector<Transport*> path;
        vector<Traveller> passengers;
        string source;
        string destination;
        TripType tripType;


    public:

        Booking(){}

        Booking(string s, string type){
            TransportType transport = transportConvert(s);
            this->tripType = tripConvert(type);
            
            switch(transport){
                case flight:
                    this->path.push_back(new Flight());
                    break;
                case cab:
                    this->path.push_back(new Cab());
                    break;
                case train:
                    this->path.push_back(new Train());
                    break;
                case bus:
                    this->path.push_back(new Bus());
                    break;
            }
            
        }

        void typeOfTransport(){
            //cout <<"in here";
            // (path[0])->printType();
            cout << typeid(*path[0]).name() << endl;
        }

        void fieldsForm(){
            // Need to get the fields required to be filled by the user
            
        }
};



int main(){

    
    string s;
    string t;
    cout << "Type of transport: ";
    cin >> s;
    cout << "Type of trip: ";
    cin >> t;

    Booking b(s, t);
    b.typeOfTransport();
    b.fieldsForm();
    return 0;
}