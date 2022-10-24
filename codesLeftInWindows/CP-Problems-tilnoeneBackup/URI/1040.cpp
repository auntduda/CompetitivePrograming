#include <iostream>

using namespace std;

int main(){
    double n1, n2, n3, n4, ne, media;
    cin >> n1 >> n2 >> n3 >> n4;

    media=(n1*2+n2*3+n3*4+n4)/10;

    cout.precision(1);
    cout.setf(ios::fixed);

    if(media>=7){
        cout << "Media: " << media << endl;
        cout << "Aluno aprovado." << endl;
    } else if(media<5){
        cout << "Media: " << media << endl;
        cout << "Aluno reprovado." << endl;
    } else{
        cin >> ne;
        cout << "Media: " << media << endl;
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << ne << endl;
        media=(media+ne)/2;
        if(media>=5){
            cout << "Aluno aprovado." << endl;
        } else{
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << media << endl;
    }

    return 0;
}