#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Product {
public:
    string name;
    int price;
    Product(string name, int price) : name(name), price(price) {}
};

class Order {
public:
    vector<Product> products;
    void add_product(Product product) {
        products.push_back(product);
    }
    int get_total_price() {
        int total_price = 0;
        for (Product product : products) {
            total_price += product.price;
        }
        return total_price;
    }
};

class Customer {
public:
    string name;
    Customer(string name) : name(name) {}
};

class CoffeeShop {
public:
    vector<Order> orders;
    void take_order(Customer customer, Order order) {
        orders.push_back(order);
        cout << "Order taken for " << customer.name << endl;
    }
    void print_orders() {
        for (Order order : orders) {
            cout << "Order: ";
            for (Product product : order.products) {
                cout << product.name << " ";
            }
            cout << "Total price: " << order.get_total_price() << endl;
        }
    }
};

int main() {
    CoffeeShop coffee_shop;

    Customer customer1("Alice");
    Order order1;
    order1.add_product(Product("Latte", 50));
    order1.add_product(Product("Croissant", 20));
    coffee_shop.take_order(customer1, order1);

    Customer customer2("Bob");
    Order order2;
    order2.add_product(Product("Espresso", 30));
    coffee_shop.take_order(customer2, order2);

    coffee_shop.print_orders();

    return 0;
}