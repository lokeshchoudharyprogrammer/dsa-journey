#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class DocEditor {
private:
    vector<string> docElements;
    string cachedRenderedDoc;

public:
    void addText(const string& text) {
        docElements.push_back(text);
        cachedRenderedDoc.clear(); // clear cache
    }

    void addImage(const string& image) {
        docElements.push_back(image);
        cachedRenderedDoc.clear(); // clear cache
    }

    string renderDocument() {
        if (cachedRenderedDoc.empty()) {
            string result;
            for (auto& element : docElements) {
                if (element.find(".png") != string::npos || element.find(".jpg") != string::npos) {
                    result += "<img src=\"" + element + "\"/>\n";
                } else {
                    result += "<p>" + element + "</p>\n";
                }
            }
            cachedRenderedDoc = result;
        }
        return cachedRenderedDoc;
    }

    void saveToFile(const string& filename) {
        ofstream file(filename); // fixed: pass actual filename
        if (file.is_open()) {
            file << renderDocument();
            file.close();
            cout << "File saved successfully.\n";
        } else {
            cout << "Unable to open file.\n";
        }
    }
};

int main() {
    DocEditor editor;
    editor.addText("Hello World");
    editor.addImage("image.png");
    editor.addText("This is a test");

    cout << editor.renderDocument() << endl;
    editor.saveToFile("output.html"); // saved as HTML

    return 0;
}
