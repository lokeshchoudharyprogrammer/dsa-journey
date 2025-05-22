#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class DocEditor {

    private:
    vector<string>docElements;
    string renderedDoc;

    public:
    void addText(string text){
        docElements.push_back(text);
    }

    void addImage(string image){
        docElements.push_back(image);
    }

    string renderedDoc(){
        if(renderedDoc.empty()){
            string result;

            for(auto& element:docElements){
               if(element.find(".png") != string::npos){
                result += "<img src=\""+element+"\"/>";
               }else{
                result += element;
               }
            }
            renderedDoc = result;
        }

       return renderedDoc;
  
    }

    void saveToFile(string filename){
        ofstream file('filename.txt');
        if(file.is_open()){
            file << renderedDoc();
            file.close();
            cout << "File saved successfully" << endl;
        }else{
            cout << "Unable to open file" << endl;
        }
        
    }
}

int main(){
    DocEditor editor;
    editor.addText("Hello World");
    editor.addImage("image.png");
    editor.addText("This is a test");
    cout << editor.renderedDoc() << endl;
    editor.saveToFile("output.txt");
    return 0;
}