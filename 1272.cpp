#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    while(n--){
        string line;
        getline(cin,line);

        stringstream ss(line);
        string word;
        string hiddenMessage;

        while(ss >> word){
            hiddenMessage += word[0];
        }

        cout << hiddenMessage << endl;
    }

    return 0;
}
