#include <iostream>
#include <memory> 
using namespace std;

int main() {
    
    unique_ptr<int> m(new int(29)); 
    if (!m) {
        cout << "Allocation of memory failed\n";
        return 1; 
    }
    cout << "Value of m: " << *m << endl;

    
    unique_ptr<float> f(new float(75.25));
    cout << "Value of f: " << *f << endl;

    const int size = 5;
    unique_ptr<int[]> arr(new int[size]); 
    if (!arr) {
        cout << "Allocation of memory failed\n";
        return 1; 
    }

    
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    
    cout << "Values stored in block of memory: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; 

    
    return 0;
}
