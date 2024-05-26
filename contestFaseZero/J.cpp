#include <bits/stdc++.h>
using namespace std;
#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main(){
    _
    int x , y, k, l, x_maximo=0, y_maximo=0, x_proximo, y_proximo, max_capturados=-1, temp=0;
    cin >> x >> y;
    cin >> k >> l;
    k--;
    l--;
    char tabuleiro[x+1][y+1];
    for(int i = 0; i<y; i++){
        cin >> tabuleiro[i];
    }   
    for(int i = 0; i<y; i++){
        for(int j = 0; j<x; j++){
            if(tabuleiro[i][j]=='.'){
                x_proximo = j-k;
                y_proximo = i-l;
                if(x_proximo>=0&&y_proximo>=0){
                    if(tabuleiro[y_proximo][x_proximo]=='*'){
                        temp++;
                    }
                }
                x_proximo = j+k;
                y_proximo = i-l;
                if(x_proximo>=0&&y_proximo<=x){
                    if(tabuleiro[y_proximo][x_proximo]=='*'){
                        temp++;
                    }
                }
                x_proximo = j-k;
                y_proximo = i+l;
                if(x_proximo<=y&&y_proximo>=0){
                    if(tabuleiro[y_proximo][x_proximo]=='*'){
                        temp++;
                    }
                }
                x_proximo = j+k;
                y_proximo = i+l;
                if(x_proximo<=y&&y_proximo<=x){
                    if(tabuleiro[y_proximo][x_proximo]=='*'){
                        temp++;
                    }
                }
                x_proximo = j-l;
                y_proximo = i-k;
                if(x_proximo>=0&&y_proximo>=0){
                    if(tabuleiro[y_proximo][x_proximo]=='*'){
                        temp++;
                    }
                }
                x_proximo = j+l;
                y_proximo = i-k;
                if(x_proximo>=0&&y_proximo<=x){
                    if(tabuleiro[y_proximo][x_proximo]=='*'){
                        temp++;
                    }
                }
                x_proximo = j-l;
                y_proximo = i+k;
                if(x_proximo<=y&&y_proximo>=0){
                    if(tabuleiro[y_proximo][x_proximo]=='*'){
                        temp++;
                    }
                }
                x_proximo = j+l;
                y_proximo = i+k;
                if(x_proximo<=y&&y_proximo<=x){
                    if(tabuleiro[y_proximo][x_proximo]=='*'){
                        temp++;
                    }
                }
                if(temp>max_capturados){
                    x_maximo=j;
                    y_maximo=i;
                    max_capturados=temp;
                }
                temp=0;
            }
        }
    }
    x_maximo++;
    y_maximo++;
    cout << x_maximo << " " << y_maximo << endl;
    return 0;
}
