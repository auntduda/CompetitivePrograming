#include <iostream>

using namespace std;

int main(){
    int fib[] = {5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025};
    int k, i=0, n=4, pos=1;
    cin >> k;
    while(pos!=k+1){
        if(n>fib[i]) i++;
        if(n!=fib[i]){
            pos++;
        }
        n++;
    }
    cout << n-1 << endl;

    return 0;
}