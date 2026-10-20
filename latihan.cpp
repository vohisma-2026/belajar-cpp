#include <iostream>
using namespace std;

int main() 
{
    string nama;
    string ulang;
    do{
        cout<<"masukan nama    ";
        cin>>nama;
        cout<<"namamu adalah   ";
        cout<<nama<<endl;
        cout<<"apakah anda mau mengulang, tekan Y atau || tekan y"<<endl;
        cin>>ulang;
    }while(ulang=="Y"|| ulang=="y");
    return 0;
}
