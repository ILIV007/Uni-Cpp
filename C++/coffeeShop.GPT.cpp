#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Ice {
public:
    void serveIce();
};

class Hot {
public:
    void serveHot();
};

class Food {
public:
    void serveFood();
};

class Customer {
public:
    void pay();
};

class Store {
private:
    int made[20];
    string coffeeMenu[20];
    int coffeeStock[20];

public:
    Store();
    void loadInventory();
    void displayMenu();
    void cook(int itemIndex);
    void updateInventory();
};

Store::Store() {
    for (int i = 0; i < 20; i++) {
        made[i] = 0;
        coffeeMenu[i] = "";
        coffeeStock[i] = 0;
    }
}

void Store::loadInventory() {
    ifstream inventoryFile("coffeeShop.store.txt");
    if (!inventoryFile.is_open()) {
        cout << "Error: Failed to open inventory file." << endl;
        return;
    }

    string itemName;
    int itemStock;
    int index = 0;

    while (getline(inventoryFile, itemName)) {
        if (itemName == "777") break;
        getline(inventoryFile, to_string(itemStock));

        coffeeMenu[index] = itemName;
        coffeeStock[index] = itemStock;
        index++;
    }

    inventoryFile.close();
}

void Store::displayMenu() {
    cout << "Menu:" << endl;
    for (int i = 0; i < 20; i++) {
        if (coffeeMenu[i] != "") {
            cout << i + 1 << ". " << coffeeMenu[i] << " - Stock: " << coffeeStock[i] << endl;
        }
    }
}

void Store::cook(int itemIndex) {
    if (itemIndex >= 1 && itemIndex <= 20 && coffeeStock[itemIndex - 1] > 0) {
        made[itemIndex - 1]++;
        coffeeStock[itemIndex - 1]--;
        cout << "Cooked " << coffeeMenu[itemIndex - 1] << "." << endl;
    } else {
        cout << "Invalid item index or out of stock." << endl;
    }
}

void Store::updateInventory() {
    ofstream inventoryFile("coffeeShop.store.txt");
    if (!inventoryFile.is_open()) {
        cout << "Error: Failed to open inventory file." << endl;
        return;
    }

    for (int i = 0; i < 20; i++) {
        if (coffeeMenu[i] != "") {
            inventoryFile << coffeeMenu[i] << endl;
            inventoryFile << coffeeStock[i] << endl;
        }
    }

    inventoryFile << "777" << endl;
    inventoryFile.close();
}

void Ice::serveIce() {
    Store store;
    store.loadInventory();

    int itemIndex;
    cout << "Which ice item do you want to serve? (1-5, 0 to exit): ";
    cin >> itemIndex;

    if (itemIndex >= 1 && itemIndex <= 5) {
        store.cook(itemIndex);
    } else if (itemIndex == 0) {
        cout << "Cancelled serving ice items." << endl;
    } else {
        cout << "Invalid item index." << endl;
    }

    store.updateInventory();
}

void Hot::serveHot() {
    Store store;
    store.loadInventory();

    int itemIndex;
    cout << "Which hot item do you want to serve? (6-10, 0 to exit): ";
    cin >> itemIndex;

    if (itemIndex >= 6 && itemIndex <= 10) {
        store.cook(itemIndex);
    } else if (itemIndex == 0) {
        cout << "Cancelled serving hot items." << endl;
    } else {
        cout << "Invalid item index." << endl;
    }

    store.updateInventory();
}

void Food::serveFood() {
    Store store;
    store.loadInventory();

    int itemIndex;
    cout << "Which food item do you want to serve? (11-20, 0 to exit): ";
    cin >> itemIndex;

    if (itemIndex >= 11 && itemIndex <= 20) {
        store.cook(itemIndex);
    } else if (itemIndex == 0) {
        cout << "Cancelled serving food items." << endl;
    } else {
        cout << "Invalid item index." << endl;
    }

    store.updateInventory();
}

void Customer::pay() {
    cout << "Payment received. Thank you!" << endl;
}

int main() {
    int choice;
    cout << "1. Serve Ice\n2. Serve Hot\n3. Serve Food\n4. Pay\nEnter choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1: {
            Ice ice;
            ice.serveIce();
            break;
        }
        case 2: {
            Hot hot;
            hot.serveHot();
            break;
        }
        case 3: {
            Food food;
            food.serveFood();
            break;
        }

ILIYA, [6/29/2023 7:11 PM]
case 4: {
            Customer customer;
            customer.pay();
            break;
        }
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}