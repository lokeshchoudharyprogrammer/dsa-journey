const fs = require('fs');

class DocEditor {
  constructor() {
    this.docElements = [];
    this.cachedRenderedDoc = '';
  }

  addText(text) {
    this.docElements.push(text);
    this.cachedRenderedDoc = ''; // clear cache
  }

  addImage(image) {
    this.docElements.push(image);
    this.cachedRenderedDoc = ''; // clear cache
  }

  renderDocument() {
    if (!this.cachedRenderedDoc) {
      let result = '';

      for (const element of this.docElements) {
        if (element.endsWith('.png') || element.endsWith('.jpg')) {
          result += `<img src="${element}" />\n`;
        } else {
          result += `<p>${element}</p>\n`;
        }
      }

      this.cachedRenderedDoc = result;
    }

    return this.cachedRenderedDoc;
  }

  saveToFile(filename) {
    fs.writeFile(filename, this.renderDocument(), (err) => {
      if (err) {
        console.error('Error writing file:', err);
      } else {
        console.log('File saved successfully.');
      }
    });
  }
}

// Test usage
const editor = new DocEditor();
editor.addText('Hello World');
editor.addImage('image.png');
editor.addText('This is a test');

console.log(editor.renderDocument());
editor.saveToFile('output.html');
