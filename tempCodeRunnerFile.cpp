#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void yes(){cout << "YES" << endl;}
void no(){cout << "NO" << endl;}
int main() {
    ll principle,period;
    float interest;
    cin>>principle>>interest>>period;
    cout<<"Principle Amount?\t"<<principle<<endl;
    cout<<"Interest Rate?\t\t"<<interest<<endl;
    cout<<"Period?\t\t\t"<<period<<endl;
    cout<<endl;
    
    cout<<fixed<<setprecision(2)<<principle<<" "<<interest<<"\t"<<period<<"\t"<<principle*interest*period;
    
return 0;
}