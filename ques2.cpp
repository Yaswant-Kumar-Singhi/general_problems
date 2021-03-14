
#include <iostream>

using namespace std;

int digital_root(int n){
    if(n<10) return n;
        int sum = 0;
    while(n){
        sum = sum + n%10;
        n = n/10;
    }
    return digital_root(sum);
}

int main()
{
    int n;
    cin>>n;
    cout<<digital_root(n);
    
}
