#include<iostream>
#include<string>
using namespace std;

int main(){
int t;

cin>>t;

while(t--){


string ch;

cin >> ch;


int n = ch.length();

if(n > 10){

cout << ch[0] << n-2 << ch[n-1] << endl;
}
else cout<< ch << endl;
}

}
