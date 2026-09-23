#include <iostream>

using namespace std;

int main() {
    char name[80];
    int age, car_model;
    long long phone1,phone2;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your phone number, " << name << " below:\n";
    cin >> phone1; // Fixed: was 'phone' instead of 'phone1'

    cout << "Enter your car model and age, " << name << ": ";
    cin >> car_model >> age;

    // Fixed missing '<<' operators and changed 'cout >>' to 'cout <<'
    cout << "Hey " << name << " nice to meet you, since you are " << age << " you can get your own car: " << car_model << "\n";

    cout << "Enter your same phone number again for confirmation: ";
    cin >> phone2;

fail:
    if (phone1 == phone2) {
        cout << "Alright " << name << ", you are eligible!\n";
    } 
    else {
        // Added braces here so the loop only runs on a mismatch
        cout << "Type phone again: ";
        cin >> phone2;
        goto fail;
    }

    return 0;
}