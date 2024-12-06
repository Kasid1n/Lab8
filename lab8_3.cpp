/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
using namespace std;
int main(){
    int age;
    int h;
    int boun;
    cout << "Enter your age: ";
    cin >> age;
    if(age <= 25 || age <= 60){
        if(age > 25 && age <= 60){
            cout << "Enter your bounty: ";
            cin >> boun;
            if(boun >= 500000000){
                cout << "Your character = Jinbe";
            }
            else{
                cout << "Your character = Franky";
            }
        }
        else{
            cout << "Enter your height: ";
        cin >> h;
        if(h < 100){
            cout << "Your character = Chopper";
        }
        else{
            if(h < 180){
                cout << "Your character = Usopp";
            }
            else{
                cout << "Enter your bounty: ";
                cin >> boun;
                if(boun >= 1111000000){
                    cout << "Your character = Zoro";
                }
                else{
                    cout << "Your character = Sanji";
                }
            }
        }
    }
        }
        
    else{
        cout << "Your character = Brook";
    }
}