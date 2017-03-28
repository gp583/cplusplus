#include <iostream>
#include "Customer.h"
using namespace std;

int main() {
    Customer elvis;
    Customer imposter1;
    elvis.setName("Elvis Presley");
    printf("Elvis1 Name: %s\n", elvis.getName());
    imposter1 = elvis;
    cout << "Elvis2 Name: " << imposter1.getName() << endl;
    Customer imposter2(elvis);
    cout << "Elvis3 Name: " << imposter2.getName() << endl;
    if (imposter1 == imposter2)
        cout << "Both imposters are " << imposter1.getName() << endl;
    else
        cout << "One imposter is " << imposter2.getName() << endl;
    imposter2.setName("Al Yankovic");
    if (imposter1 == imposter2)
        cout << "Both imposters are " << imposter1.getName() << endl;
    else
        cout << "One imposter is " << imposter2.getName() << endl;
    imposter2 = imposter2;
    if (imposter1 != imposter2)
        cout << "One imposter is " << imposter1.getName() << endl;
    else
        cout << "Both imposters are " << imposter1.getName() << endl;
    return 0;
}