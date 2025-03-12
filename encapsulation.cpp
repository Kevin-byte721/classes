#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

class fullname {
    
private:
    string fName;
    int age;

public:
    fullname(string fn, int a) {
      fName = fn;
      age = a;
    };
    string getname() {
        return fName;
    }
    int getage() {
        return age;
    }
    string ageIndentifier() {
        string s = (age >= 18 && age < 60 ? "Gen-Z" : "Senior") ;
        return s;
    }
};

int main() {
    fullname f1("Kevin",18);
    cout <<f1.getname()<<" "<<f1.getage() << " ";
    cout <<f1.ageIndentifier();
    return 0;
}