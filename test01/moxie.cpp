#include <bits/stdc++.h>
using namespace std;
// next_permutation

struct Point {
    int x;
    int y;
};
bool compare(const Point& p1, const Point& p2)
{
    return p1.x < p2.x;
}
Point arr[10];
int n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i].x;
        cin >> arr[i].y;
    }
    do{
        for(int i = 0;i < n;++i){
            cout << arr[i].x <<" ";
        }
        cout <<endl;
    }while(std::next_permutation(arr,arr+n,compare));   //默认


    return 0;
}






























