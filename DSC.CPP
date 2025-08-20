#include <bits/stdc++.h>
using namespace std;
int main() {
    string x;
    cin >> x;
    vector<char> a;  

    for(char y : x) {
        if(y=='('||y=='['||y=='{') {
            a.push_back(y);  
        } else {
            if(a.empty())
             {
                 cout<<"Invalid"; return 0;
                 }
            char t = a.back();  
            a.pop_back();       
            if((y==')'&&t!='(')||(y==']'&&t!='[')||(y=='}'&&t!='{')) {
                cout<<"Invalid"; 
                return 0;
            }
        }
    }
    if(a.empty()) {
    cout << "Valid";
} else {
    cout << "Invalid";
}
}
