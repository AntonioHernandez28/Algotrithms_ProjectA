//
//  main.cpp
//  ProyectoA
//
//  Created by Antonio Hernández Ruiz on 11/4/19.
//  Copyright © 2019 Antonio Hernández Ruiz. All rights reserved.
//

#include <iostream>
#include <vector>
#include <queue>
#include <iomanip>
using namespace std;

float MedianOfTwoArrays(vector<int> A, vector<int> B){
    float result;
    int n = A.size();
    priority_queue<int, vector<int>, greater<int>> pq;
    for(auto x:A) pq.push(x);
    for(auto x:B) pq.push(x);
    A.clear();
    while(!pq.empty()){
        A.push_back(pq.top());
        pq.pop();
    }
    if(A.size() % 2 == 0) return ((float)A[n] + (float)A[n-1])/2.00;
    else return (float)A[n];
    
    return result;
}


int main() {
    int Cases;
    cin >> Cases;
    for(int i = 0; i < Cases; i++){
        int n;
        cin >> n;
        vector<int> A;
        vector<int> B;
        for(int j = 0; j < 2*n; j++) {
            int temp;
            cin >> temp;
            if(j < n) A.push_back(temp);
            else B.push_back(temp);
        }
        cout << "Median case " << i+1 << ": " << fixed << setprecision(2) << MedianOfTwoArrays(A, B) << endl;
        
    }
    return 0;
}



