#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
    int t;

    scanf("%d", &t);

    while(t--){
        int n, mul=1;
        bool flag=false;

        scanf("%d", &n);

        vector<int> a (n, 0);

        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }

        for(int i=0; i<n; i++){
            mul = mul*a[i];
        }

        vector<int> subset(n, 0);

        for(int i=0; i<n && !flag; i++){
            subset[i] = mul/a[i];

            double aux = sqrt(subset[i]) - (int)sqrt(subset[i]);

            if(aux != 0){
                flag = true;
            }
        }

        if(flag){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }

    return 0;
}

/* a0, a1, a2 ..., an */