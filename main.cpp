#include <iostream>
using namespace std;
int main() {
    int line; 
    int check;
    cout<<"Введіть пароль (Користувач)";
    cin>>line;
    cout<<"Введіть пароль(Адміністратор)";
    cin>>check;
    if(line==check){
    cout<<"True password";
    }
        else{
    cout<<"False password";
    }
}