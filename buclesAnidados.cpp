/* 
    [p1, p2, p3, pan1, pan2, pan3]
    [p1-pan2, p1-pan3, {p1-pan1}x]
*/
#include <iostream>
using namespace std;

int main(){
    cout << "CORSS JOIN" << endl;

    for(int i = 1; i < 4; i++){
        for(int j = 0; j < 4; j++){

            if (i == j){
                continue;
            }

            cout << "registro de pares i -> : " << i <<" - " << j << endl;
        }
    }
    return 0;
}
