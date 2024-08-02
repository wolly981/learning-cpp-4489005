#include "iostream"
#include "string"

using namespace std;

int main(void){
    string str;
    cout << "What's your name?: " << flush;
    cin >> str;
    cout << str + "? That name SUCKS!";

    cout << endl;
    cout << endl;
    return 0;
}