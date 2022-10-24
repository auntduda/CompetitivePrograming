#include<bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, faltam;
    vector<int> pos;
    string genoma;
    vector<pair<int,char>> nucleos (4);

    nucleos[0].second = 'A';
    nucleos[1].second = 'G';
    nucleos[2].second = 'C';
    nucleos[3].second = 'T';

    cin >> n;

    cin >> genoma;

    for(int i=0; i<n; i++){
        if(genoma[i] == 'A'){
            nucleos[0].first++;
        }
        if(genoma[i] == 'G'){
            nucleos[1].first++;
        }
        if(genoma[i] == 'C'){
            nucleos[2].first++;
        }
        if(genoma[i] == 'T'){
            nucleos[3].first++;
        }
        if(genoma[i] == '?'){
            pos.push_back(i);
        }
    }

    if(!pos.size()){
        cout << genoma << endl;

        return 0;
    }

    sort(nucleos.begin(), nucleos.end());

    for(int i=0; i<pos.size(); i++){
        if(nucleos[2].first != nucleos[3].first && nucleos[2].first != 0){
            genoma[pos[i]] = nucleos[2].second;

            nucleos[2].first++;
        }
        else if(nucleos[1].first != nucleos[3].first && nucleos[1].first != 0){
            genoma[pos[i]] = nucleos[1].second;

            nucleos[1].first++;
        }
        else if(nucleos[0].first != nucleos[3].first && nucleos[0].first != 0){
            genoma[pos[i]] = nucleos[0].second;

            nucleos[0].first++;
        }
    }

    for(int i=0; i<n; i++){
        if(genoma[i] == '?'){
            cout << "===" << endl;

            return 0;
        }
    }

    cout << genoma << endl;
    
    return 0;
}