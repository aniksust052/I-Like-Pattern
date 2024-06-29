#include<iostream>
using namespace std;

int  space(int i, int j, int N, int spaceCnt){

    if(i == 1 || i == N || j == 1 || j == N)return spaceCnt;
    while (spaceCnt > 0){ 
        cout<<" ";
        spaceCnt--;
    }
    return spaceCnt;
}

void solveNum(int N, int T){
    
    for(int i = 1; i <= N; i++){

        int spaceCnt = N + (N -11);
        if(i >= 10)spaceCnt--;
        if(N - i + 1>= 10)spaceCnt--;

        for(int j = 1; j <= N; j++){
            spaceCnt = space(i,j,N,spaceCnt);
            if(i == 1)cout << j;
            if(i > 1 && j == 1)cout << i;
            if(i > 1 && i < N && j == N)cout << N - i + 1;
            if(i == N && j > 1)cout << N - j + 1;
        }
        cout<<"\n";
    }
}

void solveChar(int N, char T){
    for(int i = 1; i <= N; i++){

        int spaceCnt = N -2;

        for(int j = 1; j <= N; j++){
            spaceCnt = space(i,j,N,spaceCnt);
            if(i == 1)cout << char(j-1+'a');
            if(i > 1 && j == 1)cout << char(i - 1 + 'a');
            if(i > 1 && i < N && j == N)cout << char(N - i + 'a');
            if(i == N && j > 1)cout << char(N - j + 'a');
        }
        cout<<"\n";
    }
}


int main(){
    int N;
    char T;
    cin >> N;
    cin >> T;
    if(T == '1'){
        solveNum(N, 1);
    }
    else{
        solveChar(N, 'a');
    }



    return 0;
}