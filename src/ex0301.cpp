#include <iostream>
#include <string>

using namespace std;
string repChar(char, int); // prototype
long hms_2_secs(int h, int m, int s);

long hms_2secs(int h, int m, int s){
    long secs = h * 60 * 60 + m * 60 + s;
    return secs;
}

int main(){
    cout << repChar('X', 8) << endl;
    cout << hms_2_secs(4, 56, 17) << "seconds" << endl;
    return 0;
}

string repChar(char c, int n){
    string r;
    for(int i = 0; i < n; i++){
        r = r + c;
    }

    return r;
}
