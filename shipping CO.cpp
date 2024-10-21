// shipping CO.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Name: Yochanan Allen 
#include <iostream>

using namespace std;


double getWeight() {
    double weight;
    cout << "Enter the weight of the package (kg): ";
    cin >> weight;

    
    while (weight <= 0 || weight > 20) {
        cout << "Invalid weight. Please enter a value greater than 0 and no more than 20 kg: ";
        cin >> weight;
    }
    return weight;
}


double getDistance() {
    double distance;
    cout << "Enter the distance to ship (miles): ";
    cin >> distance;

    
    while (distance < 10 || distance > 3000) {
        cout << "Invalid distance. Please enter a value between 10 and 3000 miles: ";
        cin >> distance;
    }
    return distance;
}


double calculateShippingCost(double weight) {
    if (weight <= 2) {
        return 1.10;
    }
    else if (weight <= 6) {
        return 2.20;
    }
    else if (weight <= 10) {
        return 3.70;
    }
    else {
        return 4.80;
    }
}

int main() {
    double weight = getWeight();
    double distance = getDistance();

    double shippingCost = calculateShippingCost(weight);

    cout << "The shipping charge for a package weighing " << weight << " kg over "
        << distance << " miles is: $" << shippingCost << endl;

    return 0;
}
