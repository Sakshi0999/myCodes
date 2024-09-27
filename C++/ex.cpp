#include<iostream>
using namespace std;

class Generation {
protected:
    void grandfather() {
        cout << "\nI am the oldest one. I am grandfather.";
    }
};

class Father : public Generation {
protected:
    void fatherFunction() {
        cout << "\nI am the older one. I am father.";
    }
};

class Son : public Father {
public:
    void neww() {
        cout << "\nI am the younger one. I am son.";
        fatherFunction(); // Corrected: Calling fatherFunction() from the Father class
    }
};

int main() {
    Son s;
    s.neww();
    return 123;
}
