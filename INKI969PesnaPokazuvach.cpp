//Sandra Kolevska INKI969
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
    
    char pesna[35] = "Shape of You - Ed Sheeran";
    char *p = &pesna[0];
    
    cout << "Pesna: " << pesna << "\n\n"; 
    cout << "Cela sodrzhina (p): " << p << endl; 
    cout << "Pochetna pozicija na sodrzhinata (*p): " << *p << endl; 
    cout << "Adresa na pochetna sodrzhina: " << (int*)p << endl; 
    cout << "\n";
    
    p += 23; 
    cout << "Ime na izveduvach (p+=22): " << p <<endl;
    cout << "Pochetna pozicija na segashnata sodrzhinata (*p): " << *p << endl; 
    cout << "Adresa na koja pochnuva segashnata sodrzhina: " << (int*)p << endl;
    
    return 0;
}
