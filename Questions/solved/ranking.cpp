#include<bits/stdc++.h>
using namespace std;
void Ranking(vector<int> &arr) {
    vector<int> temp(arr.size());
    temp = arr;
    sort(temp.begin(), temp.end());
    for(int i=0;i<arr.size();i++){
        for(int j=1;j<=temp.size();j++){
           if(arr[i]==temp[j-1]){
               arr[i]=j;
           }
        }
    }
}
int main()
{
int n;
cout << "Enter the number of elements: ";
cin >> n;
vector<int> arr(n);

cout << "Enter the elements: ";
for(int i = 0; i < n; i++) {
    cin >> arr[i];
}
Ranking(arr);
for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}
return 0;
}
// Time Complexity: O(nlogn)
// Space Complexity: O(n)   // for temp array

// vector<int> arr(n);
// unordered_map<int, int> rank_map;
// vector<int> sorted_arr = arr;
// sort(sorted_arr.begin(), sorted_arr.end());
// for (int i = 0; i < n; ++i) {
//     rank_map[sorted_arr[i]] = i + 1;
// }
// for (int i = 0; i < n; ++i) {
//     arr[i] = rank_map[arr[i]];
// }