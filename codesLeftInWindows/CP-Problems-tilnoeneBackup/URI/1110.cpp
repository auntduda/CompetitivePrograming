#include <iostream>
#include <vector>
#include <deque>

using namespace std;

int main() {
    int n;
    while(cin >> n){
        if(n==0) break;
        if(n==1){
            cout << "Discarded cards:" << endl;
            cout << "Remaining card: 1" << endl;
        } else{
            deque<int> pilha;
            for(int i=n;i>0;i--) pilha.push_back(i);
            vector<int> descartadas;
            while(pilha.size()>=2){
                descartadas.push_back(pilha.back());
                pilha.pop_back();
                pilha.push_front(pilha.back());
                pilha.pop_back();
            }
            cout << "Discarded cards: ";
            for(int i=0;i<n-1;i++){
                cout << descartadas[i];
                if(i==n-2) cout << endl;
                else cout << ", ";
            }
            cout << "Remaining card: " << pilha.front() << endl;
        }
    }
    
    return 0;
}