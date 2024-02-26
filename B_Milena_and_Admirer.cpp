#include <iostream>

using namespace std;

int main() {
int t;
cin>>t;
for(int h=t;h>0;h--){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
long long d=0,g=a[n-1];
for(int i=n-2;i>=0;i--){
if(a[i]<=g){
g=a[i];
continue;
}
d+=(a[i]+g-1)/g-1;
g=a[i]/((a[i]+g-1)/g);
}
cout<<d<<endl;
}
return 0;
}