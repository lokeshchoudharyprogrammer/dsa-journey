// class Product {
//     constructor(price, name) {
//       this.price = price;
//       this.name = name;
//     }
//   }
  
//   class ShoppingCart {
//     constructor() {
//       this.products = [];
//     }
  
//     addProduct(product) {
//       this.products.push(product);
//     }
  
//     getProducts() {
//       return this.products;
//     }
  
//     calculateTotal() {
//       return this.products.reduce((total, product) => total + product.price, 0);
//     }
  
//     printInvoice() {
//       console.log("Invoice:");
//       this.products.forEach(product => {
//         console.log(`${product.name}: $${product.price}`);
//       });
//       console.log(`Total: $${this.calculateTotal()}`);
//     }
  
//     saveToDB() {
//       console.log("Saving invoice to database...");
//     }
//   }
  
//   // Usage
//   const cart = new ShoppingCart();
//   cart.addProduct(new Product(100, "Apple"));
//   cart.addProduct(new Product(200, "Banana"));
//   cart.addProduct(new Product(300, "Orange"));
//   cart.printInvoice();
//   cart.saveToDB();
  


class Product {
    constructor(price, name) {
      this.price = price;
      this.name = name;
    }
  }
  
  class ShoppingCart {
    constructor() {
      this.products = [];
    }
  
    addProduct(product) {
      this.products.push(product);
    }
  
    getProducts() {
      return this.products;
    }
  
    calculateTotal() {
      return this.products.reduce((total, product) => total + product.price, 0);
    }
  }
  
  class InvoicePrinter {
    static print(cart) {
      console.log("Invoice:");
      cart.getProducts().forEach(product => {
        console.log(`${product.name}: $${product.price}`);
      });
      console.log(`Total: $${cart.calculateTotal()}`);
    }
  }
  
  class DatabaseSaver {
    static save(cart) {
      console.log("Saving invoice to database...");
      // Simulated DB logic
    }
  }
  
  // Usage
  const cart = new ShoppingCart();
  cart.addProduct(new Product(100, "Apple"));
  cart.addProduct(new Product(200, "Banana"));
  cart.addProduct(new Product(300, "Orange"));
  
  InvoicePrinter.print(cart);
  DatabaseSaver.save(cart);
  