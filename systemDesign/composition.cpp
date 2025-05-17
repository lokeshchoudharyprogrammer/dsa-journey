
// #include<iostream>
// #include<vector>
// using namespace std;

// class Product{

//     public:
//     double price;
//     string name;
//     Product(double price, string name){
//         this->price = price;
//         this->name = name;
//     }
// };

// class ShoppingCart{
//     public:

//     // this is composition
//     // ShoppingCart has a relationship with Product

//     vector<Product*>products;

//     void addProduct(Product* product){
//         products.push_back(product);
//     }

//     const vector<Product*>& getProducts() const{
//         return products;
//     }

//     double calculateTotal(){
//         double total = 0;
//         for(Product* product : products){
//             total += product->price;
//         }
//         return total;
//     }

//     void PrintInvoide(){
//         cout<<"Invoice:"<<endl;
//         for(Product* product : products){
//             cout<<product->name<<": $"<<product->price<<endl;
//         }
//         cout<<"Total: $"<<calculateTotal()<<endl;
//     }

//     void saveToDB(){
//         cout<<"Saving invoice to database..."<<endl;
//     }
   
// };



// int main(){
//     ShoppingCart *cart = new ShoppingCart() ;
//     cart->addProduct(new Product(100, "Apple"));
//     cart->addProduct(new Product(200, "Banana"));
//     cart->addProduct(new Product(300, "Orange"));
//     cart->PrintInvoide();
//     cart->saveToDB();
//     return 0;
// }





#include <iostream>
#include <vector>
using namespace std;

// Product class - has only one responsibility: hold product data
class Product {
public:
    double price;
    string name;

    Product(double price, string name) {
        this->price = price;
        this->name = name;
    }
};

// ShoppingCart class - responsible only for managing products and calculating totals
class ShoppingCart {
private:
    vector<Product*> products;

public:
    void addProduct(Product* product) {
        products.push_back(product);
    }

    const vector<Product*>& getProducts() const {
        return products;
    }

    double calculateTotal() const {
        double total = 0;
        for (Product* product : products) {
            total += product->price;
        }
        return total;
    }
};

// InvoicePrinter class - responsible only for displaying the invoice
class InvoicePrinter {
public:
    void printInvoice(const ShoppingCart& cart) {
        cout << "Invoice:" << endl;
        for (Product* product : cart.getProducts()) {
            cout << product->name << ": $" << product->price << endl;
        }
        cout << "Total: $" << cart.calculateTotal() << endl;
    }
};

// DatabaseSaver class - responsible only for saving data
class DatabaseSaver {
public:
    void save(const ShoppingCart& cart) {
        cout << "Saving invoice to database..." << endl;
        // Simulated DB saving logic
    }
};

int main() {
    ShoppingCart* cart = new ShoppingCart();
    cart->addProduct(new Product(100, "Apple"));
    cart->addProduct(new Product(200, "Banana"));
    cart->addProduct(new Product(300, "Orange"));

    InvoicePrinter printer;
    printer.printInvoice(*cart);

    DatabaseSaver saver;
    saver.save(*cart);

    return 0;
}
