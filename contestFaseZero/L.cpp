#include <bits/stdc++.h>
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define mp make_pair
typedef long long ll;
using namespace std;



void solve(int n, const vector<string>& ordem_quartos, const vector<string>& ordem_idades){
    unordered_map<string,pair<int,bool>> mapa_idade;
    for(int i=0;i<n;i++){
        mapa_idade[ordem_idades[i]] = mp(i,false);
        //cout << mapa_idade[ordem_idades[i]].first << " " << ordem_idades[i] << " " << mapa_idade[ordem_idades[i]].second << endl;
    }

    int menor_idade=0;
    for(int i=0;i<n;i++){
        if(menor_idade <= mapa_idade[ordem_quartos[i]].first && !mapa_idade[ordem_quartos[i]].second){
            while(mapa_idade[ordem_idades[menor_idade]].second){
                menor_idade++;
            }

            if(i+1==n) break;
            cout << ordem_idades[menor_idade] << " ";
            mapa_idade[ordem_quartos[i]].second = true;
            if(menor_idade==mapa_idade[ordem_quartos[i]].first) menor_idade++;
        }
    }
    cout << ordem_idades[menor_idade] << endl;

}

int main(){ _
    int n; cin >> n;
    vector<string> criancas_raptadas(n);
    vector<string> criancas_idades(n);
    for(int i=0;i<n;i++) cin >> criancas_raptadas[i];
    for(int i=0;i<n;i++) cin >> criancas_idades[i];
    
    solve(n,criancas_raptadas,criancas_idades);

}