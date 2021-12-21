// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future."; 
    for (int i=0; i <3;i++ ){
        cin.get();
    }

    srand(time(0));
    int x = rand()%9;
    string u[] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout << "You will get " << u[x] << " in this 261102.";


return 0;
}    