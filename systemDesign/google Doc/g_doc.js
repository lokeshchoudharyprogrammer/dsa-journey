// Base class (Open/Closed Principle)
class DocElement {
    constructor(value) {
      this.value = value;
    }
  
    render() {
      throw new Error("render() must be implemented by subclass");
    }
  }
  
  // Single Responsibility: each class handles its own rendering logic
  
  class Text extends DocElement {
    render() {
      return `<p>${this.value}</p>`;
    }
  }
  
  class Image extends DocElement {
    render() {
      return `<img src="${this.value}" />`;
    }
  }
  
  // DocRenderer handles rendering all elements — SRP
  class DocRenderer {
    constructor() {
      this.docElements = [];
    }
  
    addElement(element) {
      this.docElements.push(element);
    }
  
    renderDocument() {
      return this.docElements.map(el => el.render()).join('\n');
    }
  }
  
  // Persistence class has a single responsibility: saving — SRP
  const fs = require('fs');
  
  class Persistence {
    saveToFile(filename, content) {
      fs.writeFileSync(filename, content, 'utf-8');
      console.log("File saved successfully");
    }
  }
  
  // ✅ Usage
  const doc = new DocRenderer();
  
  doc.addElement(new Text("Hello World"));
  doc.addElement(new Image("image.png"));
  doc.addElement(new Text("This is a test"));
  
  const renderedHTML = doc.renderDocument();
  console.log(renderedHTML);
  
  const persistence = new Persistence();
  persistence.saveToFile("output.html", renderedHTML);
  