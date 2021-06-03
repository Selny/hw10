#include <iostream>

using namespace std;

class Restaurant {
private:
    string name;
    string adress;
    string phone_number;
    int rating;
    int avgCost;
public:
    string menu[100];
    int count = 0;

    Restaurant() = default;
    Restaurant(const string name, const string adress, const string phone_number, const int rating, const int avgCost) {
        SetName(name);
        SetAdress(adress);
        SetPhoneNumber(phone_number);
        SetRating(rating);
        SetAvgCost(avgCost);
    }

    void SetName(const string name) {
        this->name = name;
    }
    void SetAdress(const string adress) {
        this->adress = adress;
    }
    void SetPhoneNumber(const string phone_number) {
        this->phone_number = phone_number;
    }
    void SetRating(const int rating) {
        this->rating = rating;
    }
    void SetAvgCost(const int avgCost) {
        this->avgCost = avgCost;
    }

    string GetName() {
        return name;
    }
    string GetAdress() {
        return adress;
    } 
    string GetPhoneNumber() {
        return phone_number;
    }
    int GetRating() {
        return rating;
    }
    int GetAvgCost() {
        return avgCost;
    }

    void GetInfo() {
        cout << "Name: " << GetName() << endl;
        cout << "Adress: " << GetAdress() << endl;
        cout << "PhoneNumbre: " << GetPhoneNumber() << endl;
        cout << "Rating: " << GetRating() << endl;
        cout << "Average Cost: " << GetAvgCost() << endl;
        cout <<"\nMenu:\n";
        for (int i = 0; i < count; i++)
        cout << menu[i] << endl;
    }

};

class Meal {
public:
    string name;
    string type;

    Meal() = default;
    Meal(const string name, const string type) {
        SetName(name);
        SetType(type);
    }

    void SetName(const string name) {
        this->name = name;
    }
    void SetType(const string type) {
        this->type = type;
    }
    string GetName() {
        return name;
    }
    string GetType() {
        return type;
    }

};

int main() {

    Meal m1("Pizza", "Hot meals");
    Meal m2("Fries", "Fast Food");
    Meal m3("Pepper Soup", "Spicy");

    Restaurant r1("Village Restaurant", "Village Side 85", "12345", 3, 20);
    r1.menu[r1.count++] = m1.GetName();
    r1.menu[r1.count++] = m2.GetName();
    r1.menu[r1.count++] = m3.GetName();

    r1.GetInfo();

    return 0;
}