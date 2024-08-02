#include "iostream"
#include "string"

#define ARRAY_LEN 5

using namespace std;

int main(void){

    
    float array[5] = {9.2, 4.9, 2.76, 3.3, 7.45};

    float total = 0.0f;

    for(int i = 0; i < ARRAY_LEN; i++){
        total += array[i];
    }

    total = total / (float)ARRAY_LEN;

    cout << total << endl;

    return 0;
}