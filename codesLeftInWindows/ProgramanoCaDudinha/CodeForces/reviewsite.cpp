#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, up=0, down=0;
    vector<int> reviewers;

    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        while(n--){
            int aux;
            scanf("%d", &aux);
            reviewers.push_back(aux);
        }

        for(int i=0; i<reviewers.size(); i++){
            if(reviewers[i]==1){
                up++;
            }
            if(reviewers[i]==2){
                down++;
            }
            if(reviewers[i]==3){
                up++;
            }
        }

        printf("%d\n", up);
        up=0;
        down=0;
        reviewers.clear();
    }

    return 0;
}