
#include "bits/stdc++.h"
using namespace std;

void combination(const vector<string>&arr, vector<string>&subres, vector<vector<string>>&res) {
    if(subres.size() >= arr.size()){
        res.push_back(subres);
        return;
    }
    for(int i=0; i < arr.size(); i++) {
        subres.push_back(arr[i]);
        combination(arr, subres, res);
        subres.pop_back();
    }

}
int main(){
    vector<string>arr={"r","g"};
    vector<string>subres;
    vector<vector<string>>res;
    combination(arr,subres,res);
    for(const auto& i:res){
        for(const auto& j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
