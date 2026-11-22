#ifndef TOURBOOKING_H
#define TOURBOOKING_H

#include <iostream>
#include <string>

using namespace std;

class TourBooking {
public:
    void setBooking(string name, string tour, int guests, double price) {
        guestName = name;
        tourName = tour;
        partySize = guests;
        totalCost = guests * price;
    }

    string getName() {
        return guestName;
    }

    int getGuests() {
        return partySize;
    }

    double getCost() {
        return totalCost;
    }

    void display() {
        cout << "Guest: " << guestName << " | Tour: " << tourName 
             << " | Guests: " << partySize << " | Total: $" << totalCost << " BZD" << endl;
    }

private:
    string guestName;
    string tourName;
    int partySize;
    double totalCost;
};

#endif
