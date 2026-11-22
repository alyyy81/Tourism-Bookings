# Belize Tour Booking System

A simple C++ console program that helps a small Belizean tour company manage daily bookings, count guests, search names, and add up daily money in Belize Dollars (BZD).

## Who Uses This & Why
* **Users:** Front-desk workers and tour guides at a small tour business in Belize.
* **The Problem:** Writing bookings on paper can lead to math mistakes or booking too many people on a trip.
* **The Fix:** This program saves up to 10 bookings for the day, calculates the total price automatically, stops bad inputs, and shows a daily total.

## What the Program Can Do
1. **Add a Booking:** Saves the guest's name, tour choice, and number of guests (1 to 15).
2. **Limit Bookings:** Stops at 10 bookings per day so tours do not get overbooked.
3. **View All Bookings:** Shows a list of everyone booked, or says "No bookings yet" if empty.
4. **Search Guest:** Finds a booking by typing all or part of a guest's name.
5. **View Summary:** Adds up the total bookings, total guests, and total money earned in BZD.

## Files in This Project
* `TourBooking.h` — Holds the `TourBooking` class with the booking details and display function.
* `main.cpp` — Holds the main menu, input checks, array list, search, and summary features.

## What You Need to Run It
* A C++ compiler (like `g++` on Windows, Mac, or Linux).
* **Visual Studio Code** (or a basic terminal) and **Git**.

## How to Build and Run
1. Open this project folder in **Visual Studio Code**.
2. Open the terminal (`Ctrl + ~` on Windows or `Cmd + ~` on Mac).
3. Type this command to compile the code:
   ```bash
   g++ main.cpp -o BelizeTours
   ```
4. Type this command to start the program:
   * **Windows:**
     ```bash
     .\BelizeTours.exe
     ```
   * **Mac / Linux:**
     ```bash
     ./BelizeTours
     ```

## Example of How It Works
```text
=== BELIZE TOUR BOOKING SYSTEM ===

1. Add Booking
2. View All Bookings
3. Search Guest
4. View Summary
5. Exit
Choose (1-5): 1
Enter guest name: Maria Gonzalez
1. ATM Cave (\$220 BZD)
2. Hol Chan Snorkel (\$130 BZD)
3. Xunantunich (\$110 BZD)
Choose tour (1-3): 2
Enter number of guests (1-15): 4
Booking saved!

1. Add Booking
2. View All Bookings
3. Search Guest
4. View Summary
5. Exit
Choose (1-5): 2

--- ALL BOOKINGS ---
1. Guest: Maria Gonzalez | Tour: Hol Chan Snorkel | Guests: 4 | Total: \$520 BZD

1. Add Booking
2. View All Bookings
3. Search Guest
4. View Summary
5. Exit
Choose (1-5): 4

--- DAILY SUMMARY ---
Total Bookings: 1
Total Guests: 4
Total Revenue: \$520 BZD
```

## AI Use Note
An AI tool was used to help write the starter code, fix input errors, and draft this README. I tested, checked, and edited all the code myself to make sure it works properly.
