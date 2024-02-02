#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <algorithm>
using std::sort;
#include <iomanip>
#include <set>
using std::set;

// 问题解决日志
// int w; // 多少组数据
// int n; // 每次的比赛时长
// string str;  //输入的字符串
// int main()
//{
//    cin >> w;
//    for (int k = 0; k < w; ++k) {
//        int arr[27] = { 0 };
//        cin >> n;
//        cin >> str;
//        for (int i = 0; i < n; ++i) {
//            arr[str[i] - 'A' + 1]++;
//        }
//        int cnt = 0;
//        for (int i = 1; i < 27; i++) {
//            if (arr[i] >= i) {
//                cnt++;
//            }
//        }
//        cout << cnt << endl;
//    }
//    return 0;
//}


// 过河卒
// int n, m, x, y;
// int arr[23][23]; // 棋盘
// int cnt; // 路的条数
// int dx[8] = { -1, -1, -2, -2, 1, 1, 2, 2 };
// int dy[8] = { -2, 2, -1, 1, -2, 2, -1, 1 };
// void dfs(int nx, int ny)
//{
//    if (nx == n && ny == m) {
//        cnt++;
//        return;
//    }
//    // 可以向右或者向下行走
//    if (nx + 1 >= 0 && nx + 1 <= n && arr[nx + 1][ny] != -1) {
//        arr[nx + 1][ny] = -1;
//        dfs(nx + 1, ny);
//        arr[nx + 1][ny] = 0;
//    }
//    if (ny + 1 >= 0 && ny + 1 <= m && arr[nx][ny + 1] != -1) {
//        arr[nx][ny + 1] = -1;
//        dfs(nx, ny + 1);
//        arr[nx][ny + 1] = 0;
//    }
//}
// int main()
//{
//    cin >> n >> m >> x >> y; // 输入终点和马的坐标
//    // 初始化棋盘
//    arr[x][y] = -1;
//    for (int i = 0; i < 8; ++i) {
//        int xx = x + dx[i];
//        int yy = y + dy[i];
//        if (xx <= n && xx >= 0 && yy <= m && yy >= 0) {
//            arr[xx][yy] = -1; // 标记为不可走的点
//        }
//    }
//    dfs(0, 0);
//    cout << cnt << endl;
//    return 0;
//}     cout << cnt << endl;
//    }
//    return 0;
//}


// 过河卒
// int n, m, x, y;
// int arr[23][23]; // 棋盘
// int cnt; // 路的条数
// int dx[8] = { -1, -1, -2, -2, 1, 1, 2, 2 };
// int dy[8] = { -2, 2, -1, 1, -2, 2, -1, 1 };
// void dfs(int nx, int ny)
//{
//    if (nx == n && ny == m) {
//        cnt++;
//        return;
//    }
//    // 可以向右或者向下行走
//    if (nx + 1 >= 0 && nx + 1 <= n && arr[nx + 1][ny] != -1) {
//        arr[nx + 1][ny] = -1;
//        dfs(nx + 1, ny);
//        arr[nx + 1][ny] = 0;
//    }
//    if (ny + 1 >= 0 && ny + 1 <= m && arr[nx][ny + 1] != -1) {
//        arr[nx][ny + 1] = -1;
//        dfs(nx, ny + 1);
//        arr[nx][ny + 1] = 0;
//    }
//}
// int main()
//{
//    cin >> n >> m >> x >> y; // 输入终点和马的坐标
//    // 初始化棋盘
//    arr[x][y] = -1;
//    for (int i = 0; i < 8; ++i) {
//        int xx = x + dx[i];
//        int yy = y + dy[i];
//        if (xx <= n && xx >= 0 && yy <= m && yy >= 0) {
//            arr[xx][yy] = -1; // 标记为不可走的点
//        }
//    }
//    dfs(0, 0);
//    cout << cnt << endl;
//    return 0;
//}


// 走出迷宫
//int n, m;
//int sx, sy, ex, ey;
//string arr[502];
//bool flag = false;
//int dx[4] = { -1, 1, 0, 0 };
//int dy[4] = { 0, 0, -1, 1 };
//void dfs(int x, int y)
//{
//    if (x == ex && y == ey) {
//        flag = true;
//        return;
//    }
//    for (int i = 0; i < 4; i++) {
//        int xx = x + dx[i];
//        int yy = y + dy[i];
//        if (xx >= 0 && xx < n && yy >= 0 && yy < m && (arr[xx][yy] == '.' || arr[xx][yy] == 'E')) {
//            arr[xx][yy] = '#';
//            dfs(xx, yy);
//            arr[xx][yy] = '.';
//        }
//    }
//}
//int main()
//{
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        cin >> arr[i];
//        for (int j = 0; j < arr[i].length(); j++) {
//            if (arr[i][j] == 'S') {
//                sx = i;
//                sy = j;
//            } else if (arr[i][j] == 'E') {
//                ex = i;
//                ey = j;
//            }
//        }
//    }
////    cout << sx << " " << sy << " " << ex << " " << ey << endl;
//    dfs(sx, sy);
//    if (flag) {
//        cout << "Yes" << endl;
//    } else {
//        cout << "No" << endl;
//    }
//    return 0;
//}


//纪念品分组(原)
//#include<bits/stdc++.h>
//using namespace std;
//int w,n;    //每组上限和纪念品的个数
//int a[30005];
//bool visit[30005];
//int cnt;     //分的组数
//int ssbegin=1;
//int main()
//{
//    cin>>w>>n;
//    for(int i=1;i<=n;i++)
//    {
//        cin>>a[i];
//    }
//    sort(a+1,a+n+1);
//    int i=0;
//    while(i<n)
//    {
//        for(int j=n;j>ssbegin;j--)
//        {
//            if(a[ssbegin]+a[j]>w&&!visit[j])
//            {
//                visit[j]=true;
//                cnt++;
//                i++;
//            }
//            else if(a[ssbegin]+a[j]<=w&&!visit[j])
//            {
//                visit[j]=true;
//                visit[ssbegin++]=true;
//                cnt++;
//                i+=2;
//                break;
//            }
//        }
//        if(i==n-1)    //只剩单个未放
//        {
//            i++;
//            cnt++;
//        }
//    }
//    cout<<cnt;
//    return 0;
//}


// 纪念品分组
//int w, n;
//int arr[30005]; // 记录每个纪念品的价格
//int cnt = 0;
//int main()
//{
//    cin >> w >> n;
//    for (int i = 1; i <= n; i++) {
//        cin >> arr[i];
//    }
//    sort(arr + 1, arr + n + 1);
//    int m = n;
//    for (int i = 1; i < m;) {
//        if (arr[i] + arr[m] <= w) {
//            cnt++;
//            m--;
//            i++;
//        } else {
//            m--;
//            cnt++;
//        }
//        if (i == m) {
//            cnt++;
//        }
//    }
//    cout << cnt;
//    return 0;
//}


// 统计方形
//int n, m;
//unsigned long long cntz, cntc;
//int main()
//{
//    cin >> n >> m;
//    // 枚举矩形所有可能的长宽
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            if (i != j) {
//                int t = (n - i + 1) * (m - j + 1);
//                cntc += t;
//            }else{
//                int t = (n - i + 1) * (m - i + 1);
//                cntz += t;
//            }
//        }
//    }
//    cout << cntz << " " << cntc << endl;
//    return 0;
//}


// 全排列问题
// int n;
// int visit[10] = { 0 };
// int arr[10];
// void dfs(int a, int l)
//{
//    if (l == n) {
//        for (int i = 1; i <= n; i++) {
//            cout << std::setw(5)  <<arr[i];
//        }
//        cout << endl;
//        return;
//    }
//    for (int i = 1; i <= n; i++) {
//        if (!visit[i]) {
//            visit[i] = 1;
//            arr[l + 1] = i;
//            dfs(i, l + 1);
//            visit[i] = 0;
//        }
//    }
//}
// int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        visit[i] = 1;
//        arr[1] = i;
//        dfs(i, 1);
//        visit[i] = 0;
//    }
//    return 0;
//}


// 数的计算(暴力搜索)
//#include <bits/stdc++.h>
//using namespace std;
//int n, cnt = 1;
//void dfs(int a)
//{
//    for (int i = 1; i <= a / 2; i++) {
//        cnt++;
//        dfs(i);
//    }
//}
//int main()
//{
//    std::ios::sync_with_stdio(false);  //关闭同步流
//    cin >> n;
//    dfs(n);
//    cout << cnt << endl;
//    return 0;
//}



// 第十四届蓝桥杯省赛C++ B组第一题
// 思路:暴力，但是不要写dfs,直接写循环
// int num[] = { 5, 6, 8, 9, 1, 6, 1, 2, 4, 9, 1, 9, 8, 2, 3, 6, 4, 7, 7, 5, 9, 5, 0, 3, 8, 7,
//    5, 8, 1, 5, 8, 6, 1, 8, 3, 0, 3, 7, 9, 2, 7, 0, 5, 8, 8, 5, 7, 0, 9, 9, 1, 9, 4,
//    4, 6, 8, 6, 3, 3, 8, 5, 1, 6, 3, 4, 6, 7, 0, 7, 8, 2, 7, 6, 8, 9, 5, 6, 5, 6, 1,
//    4, 0, 1, 0, 0, 9, 4, 8, 0, 9, 1, 2, 8, 5, 0, 2, 5, 3, 3 };
// int cnt;
// set<int> resSet;
// int md[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// int main()
//{
//    for (int i1 = 0; i1 < 100; ++i1) {
//        if (num[i1] == 2) {
//            for (int i2 = i1 + 1; i2 < 100; ++i2) {
//                if (num[i2] == 0) {
//                    for (int i3 = i2 + 1; i3 < 100; ++i3) {
//                        if (num[i3] == 2) {
//                            for (int i4 = i3 + 1; i4 < 100; ++i4) {
//                                if (num[i4] == 3) {
//                                    for (int i5 = i4 + 1; i5 < 100; ++i5) {
//                                        if (num[i5] <= 1) {
//                                            for (int i6 = i5 + 1; i6 < 100; ++i6) {
//                                                if (num[i6] <= 9 && num[i6] >= 1 && num[i5] == 0 || num[i6] <= 2 && num[i5] == 1) {
//                                                    int m = num[i5] * 10 + num[i6];
//                                                    for (int i7 = i6 + 1; i7 < 100; ++i7) {
//                                                        if (num[i7] <= 3) {
//                                                            for (int i8 = i7 + 1; i8 < 100; ++i8) {
//                                                                int day = num[i7] * 10 + num[i8];
//                                                                if (day != 0 && day <= md[m]) {
//                                                                    resSet.insert(m * 100 + day);
//                                                                }
//                                                            }
//                                                        }
//                                                    }
//                                                }
//                                            }
//                                        }
//                                    }
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
////    for (const auto e : resSet) {
////        cout << e << endl;
////    }
//    std::set<int>::iterator it;
//    for (it = resSet.begin(); it != resSet.end(); ++it) {
//        std::cout << *it << "    ";
//    }
//    cout <<"\n最终结果为: "<< resSet.size() << endl;
//    return 0;
//}


// 第十四届蓝桥杯省赛C++ B组第三题
int main()
{

    return 0;
}







