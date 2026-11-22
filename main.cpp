#include <iostream>
#include <array>
#include <string>
#include "tourbooking.h"

using namespace std;

int getNumber(int min, int max) {
    int num;
    while (!(cin >> num) || num < min || num > max) {
        cout << "Invalid! Enter a number (" << min << "-" << max << "): ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore(1000, '\n');
    return num;
}

void addBooking(array<TourBooking, 10>& bookings, int& count) {
    if (count >= 10) {
        cout << "Bookings are full!" << endl;
        return;
    }

    string name;
    cout << "Enter guest name: ";
    getline(cin, name);

    while (name == "") {
        cout << "Name cannot be empty. Enter guest name: ";
        getline(cin, name);
    }

    cout << "1. ATM Cave ($220 BZD)" << endl;
    cout << "2. Hol Chan Snorkel ($130 BZD)" << endl;
    cout << "3. Xunantunich ($110 BZD)" << endl;
    cout << "Choose tour (1-3): ";
    int tourChoice = getNumber(1, 3);

    string tour = "Xunantunich";
    double price = 110;

    if (tourChoice == 1) {
        tour = "ATM Cave";
        price = 220;
    } else if (tourChoice == 2) {
        tour = "Hol Chan Snorkel";
        price = 130;
    }

    cout << "Enter number of guests (1-15): ";
    int guests = getNumber(1, 15);

    bookings[count].setBooking(name, tour, guests, price);
    count++;

    cout << "Booking saved!" << endl;
}

void viewBookings(array<TourBooking, 10>& bookings, int count) {
    if (count == 0) {
        cout << "No bookings yet." << endl;
        return;
    }

    cout << endl << "--- ALL BOOKINGS ---" << endl;
    for (int i = 0; i < count; i++) {
        cout << i + 1 << ". ";
        bookings[i].display();
    }
}

void searchBooking(array<TourBooking, 10>& bookings, int count) {
    if (count == 0) {
        cout << "No bookings to search." << endl;
        return;
    }

    string searchName;
    cout << "Enter guest name to search: ";
    getline(cin, searchName);

    bool found = false;
    for (int i = 0; i < count; i++) {
        if (bookings[i].getName().find(searchName) != string::npos) {
            bookings[i].display();
            found = true;
        }
    }

    if (!found) {
        cout << "Guest not found." << endl;
    }
}

void showSummary(array<TourBooking, 10>& bookings, int count) {
    if (count == 0) {
        cout << "No bookings for summary." << endl;
        return;
    }

    int totalGuests = 0;
    double totalMoney = 0;

    for (int i = 0; i < count; i++) {
        totalGuests = totalGuests + bookings[i].getGuests();
        totalMoney = totalMoney + bookings[i].getCost();
    }

    cout << endl << "--- DAILY SUMMARY ---" << endl;
    cout << "Total Bookings: " << count << endl;
    cout << "Total Guests: " << totalGuests << endl;
    cout << "Total Revenue: $" << totalMoney << " BZD" << endl;
}

int main() {
    array<TourBooking, 10> bookings;
    int count = 0;
    int choice = 0;

    cout << "=== BELIZE TOUR BOOKING SYSTEM ===" << endl;

    while (choice != 5) {
        cout << endl;
        cout << "1. Add Booking" << endl;
        cout << "2. View All Bookings" << endl;
        cout << "3. Search Guest" << endl;
        cout << "4. View Summary" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose (1-5): ";
        choice = getNumber(1, 5);

        if (choice == 1) {
            addBooking(bookings, count);
        } else if (choice == 2) {
            viewBookings(bookings, count);
        } else if (choice == 3) {
            searchBooking(bookings, count);
        } else if (choice == 4) {
            showSummary(bookings, count);
        } else if (choice == 5) {
            cout << "Goodbye!" << endl;
        }
    }

    return 0;
}
