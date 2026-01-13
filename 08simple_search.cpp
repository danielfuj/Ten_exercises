#include <iostream>
#include <string>
using namespace std;

int main(){
    string names[6] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string search;
    
    cout << "Enter the wanted name.\n";
    cin >> search;
    
    for(int i=0;  i< 6; i++){
        if(names[i] == search){
            cout << search << " It has been found." << endl;
            return 0;
        } else {
           
        }
    }
     cout << search << " Not found" << endl;



return 0;
}