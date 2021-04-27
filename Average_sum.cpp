#include <iostream>
#include <string>
using namespace std;
//by leinad-17
//naruto17hh@gmail.com

int main(){
    int sum=0;
    int n,i = 1,av;
    cout<<"How many number do you wanna compute ?"<<endl;
    cin>>n;
    int tab[n];
    while(i<=n)
    {
        cin>>tab[i];
        sum = sum+tab[i];
        i++;
    }
    cout<<"Sum is "<<sum<<endl;
    av = sum/n;
    cout<<"Average is "<<av;
     
    return 0;
}
