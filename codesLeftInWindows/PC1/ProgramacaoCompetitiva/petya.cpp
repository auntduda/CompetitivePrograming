#include<bits/stdc++.h>

namespace twist_carpado{
    int strcmp(char* str1, char* str2){
        for(int i=0; i<strlen(str1); i++){
            if(str1[i] < str2[i])
                return -1;
            if(str1[i] > str2[i])
                return 1;
        }

        return 0;
    }
    
    int compare(char* str1, char* str2){
    for(int i=0; i<strlen(str1); i++){
        str1[i] = std::tolower(str1[i]);
        str2[i] = std::tolower(str2[i]);
    }

    return strcmp(str1, str2);
    }

}

int main(){
    using namespace std;

    char p1[100], p2[100];

    scanf("%s", p1);
    scanf("%s", p2);

    int resultado = twist_carpado::compare(p1, p2);

    printf("%d\n", resultado);

    return 0;

}