/*  1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25
    1 4 9 16 25 
                    */

#include <iostream>
using namespace std;

int main() {
    int i,j,n;
    cout << "Enter the limit : " <<endl ;
    cin >> n ;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cout << j*j << " " ;
        }
        cout << "\n";
    }
    return 0;
}