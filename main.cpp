#include <iostream>
using namespace std;

int main() {

    int x = 1;
    int transpose;
    string abc = "abcdefghijklmnopqrstuvwxyz";
    string text = "xultpaajcxitltlxaarpjhtiwtgxktghidhipxciwtvgtpilpitghlxiwiwtxgqadds";


    while (x < abc.length()+1) {

        cout << "Possible answer #"<<x<<": ";

        for (int i = 0; i < text.length(); i++) {
            for (int j = 0; j < abc.length(); j++) {

                if (text[i] == abc[j]) {
                    transpose = j + x;
                    while (transpose > abc.length()-1) {
                        transpose -= abc.length();
                    }
                    cout << abc[transpose];
                }
            }
        }
        x++;
        cout << endl;
    };




    return 0;
}