#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

int dist(pair<int, int> a, pair<int, int> b){ // retorna a distancia ao quadrado
	return (a.first - b.first)*(a.first - b.first) + (a.second - b.second)*(a.second - b.second);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n, w, h, nivel, dano, raio, ans;

	string nome;

	pair<int, int> p[4], c;

	cin >> n;
	while(n--){
	    ans = 0;
	    
		cin >> w >> h >> p[0].first >> p[0].second;

		p[1].first = p[0].first;
		p[1].second = p[0].second + h;

		p[2].first = p[0].first + w;
		p[2].second = p[0].second;

		p[3].first = p[0].first + w;
		p[3].second = p[0].second + h;

		cin >> nome >> nivel >> c.first >> c.second;

		if(nome == "fire"){
			dano = 200;

			if(nivel == 1) raio = 20;
			else if(nivel == 2) raio = 30;
			else raio = 50;

		} else if(nome == "water"){
			dano = 300;

			if(nivel == 1) raio = 10;
			else if(nivel == 2) raio = 25;
			else raio = 40;

		} else if(nome == "earth"){
			dano = 400;

			if(nivel == 1) raio = 25;
			else if(nivel == 2) raio = 55;
			else raio = 70;

		} else{
			dano = 100;

			if(nivel == 1) raio = 18;
			else if(nivel == 2) raio = 38;
			else raio = 60;

		}

		for(int i = 0; i < 4; i++){
			if(dist(p[i], c) <= raio * raio){
				ans = dano;
				break;
			}
		}
		
		if(ans == 0){
			if(c.y < p[3].y && c.y > p[2].y){
				if(min(dist(c, {p[2].x, c.y}), dist(c, {p[0].x, c.y})) <= raio * raio){
					ans = dano;
				}
			} else if(c.x > p[1].x && c.x < p[3].x){
				if(min(dist(c, {c.x, p[1].y}), dist(c, {c.x, p[0].y})) <= raio * raio){
					ans = dano;
				}
			}
			
			if(c.x >= p[0].x && c.x <= p[2].x && c.y >= p[0].y && c.y <= p[1].y){ // dentro do circulo
			    ans = dano;
			}
		}

		cout << ans << endl;
	}

    return 0;
}