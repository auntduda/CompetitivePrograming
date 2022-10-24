#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, i;
    vector<pair<int, int>> heights;
    vector<pair<int, int>> odd;

    scanf("%d", &t);

    while(t--){
        int n;

        scanf("%d", &n);

        for(i=0; i<n; i++){
            int aux;
            scanf("%d", &aux);

            heights.push_back(make_pair(aux, 0));
        }

        for(i=0; i<n; i++){
            if(heights[i].first%2==0){
                heights[i].second = 1;
            }
        }

        for(i=0; i<n; i++){
            if(!heights[i].second){
                odd.push_back(make_pair(heights[i].first, heights[i].second));
                heights[i].erase(heights.begin().second+i, heights.begin().second+i+1);
                heights[i].erase(heights.begin().first+i, heights.begin().first+i+1);
            }
        }

        heights.insert(heights.begin()+i+1, odd.begin(), odd.end());

        for(i=0; i<n; i++){
            printf("%d ", heights[i].first);
        }

        heights.clear();
        odd.clear();
    }

    return 0;
}