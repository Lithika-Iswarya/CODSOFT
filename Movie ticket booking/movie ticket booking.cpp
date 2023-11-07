#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
const int NUM_ROWS = 5;
const int NUM_COLS = 5;
const double TICKET_PRICE = 10.0;
void displaySeatingChart(const vector<vector<char>>& seats) {
    cout << "  ";
    for (int i = 0; i < NUM_COLS; i++) {
        cout << setw(3) << i + 1;
    }
    cout << endl;
    for (int i = 0; i < NUM_ROWS; i++) {
        cout << char('A' + i) << " ";
        for (int j = 0; j < NUM_COLS; j++) {
            cout << setw(3) << seats[i][j];
        }
        cout << endl;
    }
}
bool bookSeat(vector<vector<char>>& seats, int row, int col) {
    if (row < 0 || row >= NUM_ROWS || col < 0 || col >= NUM_COLS) {
        cout << "Invalid seat selection." << endl;
        return false;
    }
    if (seats[row][col] == 'X') {
        cout << "Seat " << char('A' + row) << col + 1 << " is already booked. Please choose another seat." << endl;
        return false;
    }
    seats[row][col] = 'X';
    return true;
}
double calculateTotalCost(const vector<vector<char>>& seats) {
    double totalCost = 0.0;
    for (int i = 0; i < NUM_ROWS; i++) {
        for (int j = 0; j < NUM_COLS; j++) {
            if (seats[i][j] == 'X') {
                totalCost += TICKET_PRICE;
            }
        }
    }
    return totalCost;
}
int main() {
    vector<vector<char>> seats(NUM_ROWS, vector<char>(NUM_COLS, 'O'));
    cout << "Welcome to the Movie Ticket Booking System" << endl;
    while (true) {
        int choice;
        cout << "1. Display Seating Chart" << endl;
        cout << "2. Book a Seat" << endl;
        cout << "3. Calculate Total Cost" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                displaySeatingChart(seats);
                break;
            case 2:
                int row, col;
                cout << "Enter the row (A-E) and column (1-5) for the seat you want to book: ";
                char rowChar;
                cin >> rowChar >> col;
                row = rowChar - 'A';
                col--;
                if (bookSeat(seats, row, col)) {
                    cout << "Seat " << rowChar << col + 1 << " booked successfully." << endl;
                }
                break;
            case 3:
                cout << "Total cost: $" << fixed << setprecision(2) << calculateTotalCost(seats) << endl;
                break;
            case 4:
                cout << "Thank you for using the Movie Ticket Booking System. Have a great time at the movie!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
