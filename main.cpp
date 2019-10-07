#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    int input;

    cout << "Welcome to guess the number, choose dificulty." << endl << endl;
    cout << "1. Easy" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Hard" << endl;
    cout << "4. Extreme" << endl;

    cin >> input;

    if(!input){
        int input;

       cout << "You must use numbers to pick difficulty." << endl;
       
    } else {
        if(input == 1){

       unsigned int secretNumber = 0;
       srand(unsigned(time(0)));
       secretNumber = rand()%10 + 1;

        int answer;
        int random [10] = {1,2,3,4,5,6,7,8,9,10};

        cout << "Easy mode" << endl;

        cout << "pick a number between 1-10" << endl;

        cin >> answer; 

        if(answer == secretNumber){
           cout << "You got the number right!";
        } else {
           cout << "Try again, the number was " << secretNumber << endl;
        }


    } else if (input == 2){
        cout << "Medium mode";
    } else if(input == 3){
        cout << "Hard mode";
    } else if (input == 4){
        cout << "Extreme mode";
    }
    }

    return 0; 
}