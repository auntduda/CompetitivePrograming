#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, i=0;

    cin >> n;
    
    vector<pair<int, string>> treinos (3);

    treinos[0].second = "chest";
    treinos[1].second = "biceps";
    treinos[2].second = "back";

    treinos[0].first = 0;
    treinos[1].first = 0;
    treinos[2].first = 0;

    while(n--){
        int aux;

        cin >> aux;

        if(i==3){
            i=0;
        }

        treinos[i].first += aux;

        i++;
    }

    /*for(int i=0; i<3; i++){
        cout << treinos[i].first << endl;
    }*/

    sort(treinos.begin(), treinos.end());

    /*for(int i=0; i<3; i++){
        cout << treinos[i].first << endl;
    } */

    cout << treinos[2].second << endl;

    return 0;

}