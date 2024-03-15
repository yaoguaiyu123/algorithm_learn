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
#include <limits>
#include <cmath>
using std::min;
using std::max;
#include <vector>
#include <string.h>
#include <limits>
#include <list>
#include <stack>

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
//int n;
//int maxV;
//int minV = -1;
//int a, b;
//int main()
//{
//    maxV = std::numeric_limits<int>::max();
//    std::ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> a >> b;
//        maxV = min(a / b, maxV);
//        minV = max(a / (b + 1) + 1, minV);
//    }
//    cout << minV << " " << maxV << endl;
//    return 0;
//}


// 第十四届蓝桥杯省赛C++ B组第四题
// 使用 std::next_permutation 函数，需要确保输入的序列是有序的
// int T, N;
// struct Plane {
//    int t, d, l;
//};
// Plane p[15];
// bool compare(Plane a, Plane b)
//{
//    if (a.t < b.t) {
//        return true;
//    } else if (a.t == b.t) {
//        if (a.d < b.d) {
//            return true;
//        } else if (a.d == b.d) {
//            return a.l < b.l;
//        }
//    }
//    return false;
//}

// int main()
//{
//     cin >> T;
//     bool flag;
//     while (T-- > 0) {
//         cin >> N;
//         flag = false;
//         for (int i = 0; i < N; ++i) {
//             cin >> p[i].t >> p[i].d >> p[i].l;
//         }
//         sort(p, p + N, compare);
//         // 使用全排列函数(全排列枚举所有情况)
//         do {
//             int nowt = p[0].t; // nowt一直表示第 i-1 架飞机的降落开始时间
//             int i;
//             for (i = 1; i < N; ++i) {
//                 if (p[i].t + p[i].d < p[i - 1].l + nowt) {
//                     break;
//                 } else {
//                     nowt = std::max(p[i - 1].l + nowt, p[i].t);
//                 }
//             }
//             if (i == N) {
//                 flag = true;
//                 break;
//             }
//         } while (std::next_permutation(p, p + N, compare));
//         if (flag) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

// 最长上升子序列
// 实际上像动态规划的题目需要把经典的dp类型直接背下来
//int N;
//int a[100005];
//int count = 0;
//int dp[10005];
//int main()
//{
//    cin >> N;
//    for (int i = 0; i < N; ++i) {
//        cin >> a[i];
//    }
//    for (int i = 0; i < N; ++i) {
//        dp[i] = 1;
//        for (int j = 0; j < i; ++j) {
//            if (a[j] < a[i]) {
//                dp[i] = std::max(dp[i], dp[j] + 1);
//            }
//        }
//    }
//    int maxNum = 0;
//    for (int i = 0; i < N; ++i) {
//        maxNum = std::max(maxNum, dp[i]);
//    }
//    cout << maxNum << endl;
//    return 0;
//}


// 第十四届蓝桥杯省赛C++ B组第五题
// 求最少删除的数字，也就是求最长的子序列
// 还需要进行优化(思路比较复杂)，详情见https://www.cnblogs.com/MAKISE004/p/17379925.html
// int N;
// int a[100005], b[100005];
// int count = 0;
// int dp[100005];
// int res(int x)
//{
//    while (x > 10) {
//        x /= 10;
//    }
//    return x;
//}

// int main()
//{
//     std::ios::sync_with_stdio(false);
//     cin.tie(0), cout.tie(0);
//     cin >> N;
//     for (int i = 0; i < N; ++i) {
//         cin >> a[i];
//         b[i] = res(a[i]);
//     }
//     for (int i = 0; i < N; ++i) {
//         dp[i] = 1;
//         for (int j = 0; j < i; ++j) {
//             if (a[j] % 10 == b[i]) {
//                 dp[i] = std::max(dp[j] + 1, dp[i]);
//             }
//         }
//     }
//     int maxN = 0;
//     for (int i = 0; i < N; ++i) {
//         maxN = std::max(maxN, dp[i]);
//     }
//     cout << N - maxN << endl;
//     return 0;
// }


// 第十四届蓝桥杯省赛C++ B组第六题
// 深搜或者广搜，需要先在海洋中8个方向搜索，如果搜索到陆地就进行陆地的4方向搜索
//int t, m, n;
//int arr[55][55];
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//int ddx[8] = { 0, 0, 1, 1, 1, -1, -1, -1 };
//int ddy[8] = { -1, 1, -1, 1, 0, -1, 1, 0 };
//int cnt;
//void dfs2(int, int);
//void dfs1(int x, int y)
//{
//    // 海洋的搜索
//    for (int i = 0; i < 8; ++i) {
//        int xx = x + ddx[i];
//        int yy = y + ddy[i];
//        if (xx >= 0 && xx <= m + 1 && yy >= 0 && yy <= n + 1 && arr[xx][yy] != 2) {
//            if (arr[xx][yy] == 0) {
////                cout << xx << "  " << yy <<"   arr[xx][yy]= "<<arr[xx][yy] << "   "<<ddx[i] <<"   "<< ddy[i]<< endl;
//                arr[xx][yy] = 2;
//                dfs1(xx, yy);
//                //                arr[xx][yy] = 0;
//            } else if (arr[xx][yy] == 1) {
//                arr[xx][yy] = 2;
//                ++cnt; // 找到一块陆地
//                dfs2(xx, yy);
////                for (int i = 1; i <= n; ++i) {
////                    for (int j = 1; j <= m; ++j) {
////                        cout << arr[i][j];
////                    }
////                    cout << endl;
////                }
//                //                arr[xx][yy] = 1;
//            }
//        }
//    }
//}

//void dfs2(int x, int y)
//{
//    // 陆地的搜索
//    for (int i = 0; i < 4; ++i) {
//        int xx = x + dx[i];
//        int yy = y + dy[i];
//        if (xx >= 1 && xx <= m && yy >= 1 && yy <= n && arr[xx][yy] == 1) {
//            arr[xx][yy] = 2;
//            dfs2(xx, yy);
//        }
//    }
//}

//int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> t;
//    while (t--) {
//        memset(arr,0,sizeof(arr));   //初始化数组
//        cnt = 0;
//        cin >> m >> n; // m行n列
//        for (int i = 1; i <= m; ++i) {
//                string str;
//                cin >>str;
//                for(int j = 1;j<=n;++j){
//                    arr[i][j] = str[j-1]-'0';
//                }
//        }
//        dfs1(0, 0); // 从0,0处开始海洋的搜索
//        cout << cnt << endl;
//    }
//    return 0;
//}



// 第十三届蓝桥杯c++b组国赛第三题
// 思路感觉是贪心
// 这一个版本时间复杂度过大
//int n, m; // n种卡牌，m张空卡牌
//int a[200005];
//int b[200005];
//int c[200005];
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//    for (int i = 0; i < n; ++i) {
//        cin >> b[i];
//    }
//    while (m--) {
//        int minNum = std::numeric_limits<int>::max();
//        int index = -1;
//        for (int i = 0; i < n; ++i) {
//            if (a[i] < minNum && c[i] < b[i]) {
//                minNum = a[i];
//                index = i;
//            }
//        }
//        ++a[index];
//        ++c[index];
//    }
//    int minNum = std::numeric_limits<int>::max();
//    for (int i = 0; i < n; ++i) {
//        minNum = std::min(minNum, a[i]);
//    }
//    cout << minNum << endl;
//    return 0;
//}



// 第十三届蓝桥杯c++b组国赛第三题
// 只过了35%
//int n, m; // n种卡牌，m张空卡牌
//struct Data {
//    int a = 0;
//    int b = 0;
//};
//Data ds[200005];
//bool Compare(Data& x, Data& y)
//{
//    return x.a < y.a;
//}
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    for (int i = 0; i < n; ++i) {
//        cin >> ds[i].a;
//    }
//    for (int i = 0; i < n; ++i) {
//        cin >> ds[i].b;
//    }
//    std::sort(ds, ds + n, Compare);
//    int pointer = 0; // 指向当前需要补的卡牌的最后一张
//    while (m) {
//        for (int i = 0; i <= pointer; ++i) {
//            if (0 < ds[i].b) {
//                ++ds[i].a;
//                --ds[i].b;
//                --m;
//            } else {
//                cout << ds[i].a << endl;
//                return 0;
//            }
//        }
//        if (ds[pointer].a > ds[pointer + 1].a) {
//            if (m && ds[pointer + 1].b) {
//                ++ds[pointer + 1].a;
//                --ds[pointer + 1].b;
//                --m;
//                ++pointer;
//            }else {
//                cout << ds[pointer + 1].a << endl;
//                return 0;
//            }
//        }
//    }
//    cout << std::min(ds[pointer].a,ds[pointer+1].a) << endl;
//    return 0;
//}


// 二分查找
// l,r的初始值 l = 0, r = n - 1,即分别指向数组的第一个和最后一个数字
// 结束条件 while(l<=r)
// m  = (l + r)/2
// r = m - 1 或者 l = m + 1
//int n;
//int nums[100005];
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> nums[i];
//    }
//    int t;
//    cin >> t;
//    int l = 0, r = n - 1, m;
//    while (l <= r) {
//        m = (l + r) / 2;   // m = l + (r - l)/2  放置溢出
//        if (nums[m] > t) {
//            r = m - 1;
//        } else if (nums[m] < t) {
//            l = m + 1;
//        } else {
//            cout << m << endl;
//            return 0;
//        }
//    }
//    cout << -1 << endl;
//    return 0;
//}


// x图形
//int n, m; // 行数和列数
//string strs[105];
//int judge(int x, int y)
//{
//    int xx = x - 1, yy = y - 1;
//    // 左上
//    int cnt = 500;
//    while (xx >= 0 && yy >= 0 && strs[xx][yy] == strs[x][y]) {
//        --xx;
//        --yy;
//    }
//    cnt = std::min(cnt, x - xx - 1);
//    // 右上
//    xx = x - 1;
//    yy = y + 1;
//    while (xx >= 0 && yy < m && strs[xx][yy] == strs[x][y]) {
//        --xx;
//        ++yy;
//    }
//    cnt = std::min(cnt, x - xx - 1);
//    // 左下
//    xx = x + 1;
//    yy = y - 1;
//    while (xx < n && yy >= 0 && strs[xx][yy] == strs[x][y]) {
//        ++xx;
//        --yy;
//    }
//    cnt = std::min(cnt, y - yy - 1);
//    // 右下
//    xx = x + 1;
//    yy = y + 1;
//    while (xx < n && yy < m && strs[xx][yy] == strs[x][y]) {
//        ++xx;
//        ++yy;
//    }
//    cnt = std::min(cnt, yy - y - 1);
//    return cnt;
//}
//int count_ = 0;
//int main()
//{
//    cin >> n >> m;
//    for (int i = 0; i < n; ++i) {
//        cin >> strs[i];
//    }
//    for (int i = 1; i < n - 1; ++i) {
//        for (int j = 1; j < m - 1; ++j) {
//            // 以除了边界的每个点开始尝试遍历判断是不是中心点
//            int cnt = judge(i, j);
//            count_ += cnt;
//        }
//    }
//    cout << count_<<endl;
//    return 0;
//}



// 路径之谜
//int n;
//int brr[25], arr[25]; // 北边靶子上的箭数(yy决定)和西边靶子上的箭数(xx决定)
//int land[25][25];
//int dx[4] = { 1, -1, 0, 0 };
//int dy[4] = { 0, 0, -1, 1 };
//std::vector<int> v;
//bool Check() {
//    for (int i = 0; i < n; i++) {
//        if (arr[i]) return false;
//        if (brr[i])  return false;
//    }
//    return true;
//}
//void dfs(int x, int y)
//{
//    if (x == n - 1 && y == n - 1) {
//        // 到达终点
//        //        cout << "到达终点" << endl;

//        if (Check()) {
//            for (const auto a : v) {
//                cout << a << " ";
//            }
//            cout << endl;
//            exit(0);  //找到答案就退出
//        }
//    }
//    for (int i = 0; i < 4; ++i) {
//        int xx = x + dx[i];
//        int yy = y + dy[i];
//        if (xx >= 0 && xx < n && yy >= 0 && yy < n && land[xx][yy] == 0 && (arr[xx] > 0 && brr[yy] > 0)) {
//            land[xx][yy] = 1;
//            v.push_back(xx * n + yy);
//            --arr[xx];
//            --brr[yy];
//            dfs(xx, yy);
//            v.pop_back();
//            land[xx][yy] = 0;
//            ++arr[xx];
//            ++brr[yy];
//        }
//    }
//}
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> brr[i];
//    }
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//    // 没有发现有什么规律，通过深搜暴力求解
//    v.push_back(0);  //起点初始化为0
//    --arr[0];
//    --brr[0];
//    land[0][0] = 1;
//    dfs(0, 0);
//    return 0;
//}




// 最大连通
// string arr[32]; // 30行60列
// int count = 0;
// int dx[4] = { -1, 1, 0, 0 };
// int dy[4] = { 0, 0, 1, -1 };
// int n, m;
// void dfs(int x, int y, int& c)
//{
//    for (int i = 0; i < 4; ++i) {
//        int xx = x + dx[i];
//        int yy = y + dy[i];
//        if (xx >= 1 && yy >= 1 && xx <= n && yy <= m && arr[xx][yy] == '1') {
//            arr[xx][yy] = '2';
//            dfs(xx, yy, ++c);
//        }
//    }
//}
// int main()
//{
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//        arr[i] = " " + arr[i];
//    }
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            if (arr[i][j] == '1') {
//                arr[i][j] = '2';
//                int c = 1;
//                dfs(i, j, c);
//                count = std::max(c, count);
//            }
//        }
//    }
//    cout << count << endl;
//    return 0;
//}


// 包子凑数
// 暴力破解，只过了一个样例
//int gcd(int x, int y)
//{
//    if (y) {
//        return gcd(y, x % y);
//    } else {
//        return x;
//    }
//}
//int n;
//int arr[105];
//int cnt;
//int dp[10000]; // 以10000为界，dp[i] == 1表示i个包子可以凑出来，dp[i] == 0 表示凑不出
//bool arr_gcd()
//{
//    int g = arr[1];
//    for (int i = 2; i <= n; ++i) {
//        g = gcd(g, arr[i]);
//        if (g == 1) {
//            return false;
//        }
//    }
//    return g > 1;
//}
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//        dp[arr[i]] = 1;
//    }
//    if (arr_gcd()) {
//        cout << "INF" << endl;
//        return 0;
//    }
//    for (int i = 1; i <= 10000; ++i) {
//        for (int j = 1; j <= i / 2; ++j) {
//            if (dp[j] != 0 && dp[i - j] != 0) {
//                dp[i] = 1;
//            }
//        }
//    }
//    for (int i = 1; i <= 10000; i++) {
//        if (!dp[i]) {
//            ++cnt;
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}


//包子凑数题解
//int gcd(int m, int n)
//{
//    if (n) {
//        return gcd(n, m % n);
//    } else {
//        return m;
//    }
//}
//const int MAXN = 105, MAX_DP = 100005; // 又来定义
//int n, a[MAXN], dp[MAX_DP], ans;
//bool notCoprime(int* arr) // 返回arr数组中所有数的最大公约数是否大于1
//{
//    int g = arr[0];
//    for (int i = 1; i < n; i++) {
//        g = gcd(g, arr[i]);
//        if (g == 1) {
//            return false; // 如果g已经为1，不用再循环，直接返回
//        }
//    }
//    return g > 1;
//} // 定义函数，运行更快
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//    if (notCoprime(a)) // 如果gcd({A_i})>1
//    {
//        cout << "INF";
//        return 0; // 直接结束
//    }
//    dp[0] = 1; // 注意0是被认为能被凑出的
//    for (int i = 0; i < n; i++) {
//        for (int j = a[i]; j < MAX_DP; j++) {
//            dp[j] = std::max(dp[j], dp[j - a[i]]); // 状态转移方程
//        }
//    }
//    for (int i = 1; i < MAX_DP; i++) {
//        if (!dp[i]) {
//            ans++; // 如果dp[i]=0,多一个凑不出的数
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}


//买不到的数目(动态规划)
//int n[3];
//int res;
//int dp[100005]; // dp[i]==1表示i是能够凑到的
//int main()
//{
//    cin >> n[1] >> n[2];
//    dp[0] = 1;
//    for (int i = 1; i <= 2; ++i) {
//        for (int j = n[i]; j <= 100000; ++j) {
//            dp[j] = std::max(dp[j], dp[j - n[i]]);
//        }
//    }
//    for (int i = 1; i <= 100000; ++i) {
//        if (!dp[i]) {
//            res = i;
//        }
//    }
//    cout << res << endl;
//    return 0;
//}


// 买不到的数目(暴力解法)
// 实际上暴力解法在某种程度上也是可行的，但是时间复杂度会比较大
// int n[3];
// int res;
// int dp[100005];
// int main()
//{
//    cin >> n[1] >> n[2];
//    dp[n[1]] = 1;
//    dp[n[2]] = 1;
//    for (int i = 1; i <= 100000; ++i) {
//        for (int j = 1; j <= i / 2; ++j) {
//            if (dp[j] != 0 && dp[i - j] != 0) {
//                dp[i] = 1;
//            }
//        }
//    }
//    for (int i = 1; i <= 100000; ++i) {
//        if (!dp[i]) {
//            res = i;
//        }
//    }
//    cout << res << endl;
//    return 0;
//}


// 打印大X
//int n, m;
//int main()
//{
//    cin >> m >> n; // 笔画宽度为m,高度为n
//    int w = m - 1 + n; // 图形宽度等于笔画宽度-1加上图形的高度
//    // 先打印前半部分
//    for (int i = 0; i < n / 2 + 1; ++i) {
//        int cnt = 0;
//        // 句号
//        for (int j = 0; j < i; j++) {
//            cout << ".";
//            ++cnt;
//        }
//        // 星号
//        for (int j = 0; j < m; ++j) {
//            cout << "*";
//            ++cnt;
//        }
//        // 句号
//        for (int j = 0; j < w - 2 * i - 2 * m; ++j) {
//            cout << ".";
//            ++cnt;
//        }
//        // 星号
//        for (int j = 0; j < m && cnt < w - i; ++j) {
//            cout << "*";
//            ++cnt;
//        }
//        // 句号
//        for (int j = 0; j < i; j++) {
//            cout << ".";
//        }
//        cout << endl;
//    }
//    // 打印后半部分
//    for (int k = 0; k < n / 2; ++k) {
//        int i = n / 2 - 1 - k;
//        int cnt = 0;
//        // 句号
//        for (int j = 0; j < i; j++) {
//            cout << ".";
//            ++cnt;
//        }
//        // 星号
//        for (int j = 0; j < m; ++j) {
//            cout << "*";
//            ++cnt;
//        }
//        // 句号
//        for (int j = 0; j < w - 2 * i - 2 * m; ++j) {
//            cout << ".";
//            ++cnt;
//        }
//        // 星号
//        for (int j = 0; j < m && cnt < w - i; ++j) {
//            cout << "*";
//            ++cnt;
//        }
//        // 句号
//        for (int j = 0; j < i; j++) {
//            cout << ".";
//        }
//        cout << endl;
//    }
//    return 0;
//}



// 对局匹配(未完成)
//int n, k;
//int a[100005];
//int dp[100005]; // dp[i]表示前i个人中最多的情况
//int cnt;
//bool check(int i, int j)
//{

//}
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> n >> k;
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//    // 找出最多的人，实际上是找一个最长的子序列
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < i; ++j) {
//            if (check(i, j)) {

//            }
//        }
//    }
//    return 0;
//}


// 奇怪的数列
//string str;
//int n;
//int main()
//{
//    cin >> str;
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        string temp;
//        int cnt = 1;
//        char c = str[0];
//        for (int j = 1; j < str.length(); ++j) {
//            if (str[j] != c) {
//                temp += std::to_string(cnt);
//                temp += c;
//                c = str[j];
//                cnt = 1;
//            } else {
//                cnt++;
//            }
//        }
//        temp += std::to_string(cnt);
//        temp += c;
//        str = temp;
//    }
//    cout << str << endl;
//    return 0;
//}



// 带分数
//int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//int cnt = 0;
//int n;
//int func(int a,int b)
//{
//    int sum=0;
//    for(int i=a;i<=b;i++)
//    {
//        sum=sum*10+arr[i];
//    }
//    return sum;
//}
//int main()
//{
//    cin >> n;
//    // 枚举所有的全怕列的可能
//    do {
//        // 在里面枚举所有的可能的分割情况
//        for(int i=0;i<9;i++)
//        {
//            int a=func(0,i);
//            for(int j=i+1;j<9;j++)
//            {
//                int b=func(i+1,j);
//                int c=func(j+1,8);
//                if(n*c==a*c+b)
//                {
//                    cnt++;
//                }
//            }
//        }
//    } while (std::next_permutation(arr, arr + 9));
//    cout << cnt << endl;
//    return 0;
//}





// 日期问题
// 过了87.5%的案例
//int a, b, c;
//char t;
//int md[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//std::vector<string> strs;
//void addDate(int x, int y, int z)
//{
//    string str;
//    if (x <= 59) {
//        str += "20";
//    } else {
//        str += "19";
//    }
//    if (x < 10) {
//        str += "0";
//    }
//    str += std::to_string(x);
//    str += "-";
//    if (y < 10) {
//        str += "0";
//    }
//    str += std::to_string(y);
//    str += "-";
//    if (z < 10) {
//        str += "0";
//    }
//    str += std::to_string(z);
//    strs.push_back(str);
//}

//void judge(int a, int b, int c)
//{
//    if (a % 4 == 0) {
//        md[2] = 29;
//        if (b <= 12 && b >= 1) {
//            if (c >= 1 && c <= md[b]) {
//                addDate(a, b, c);
//            }
//        }
//    } else {
//        md[2] = 28;
//        if (b <= 12 && b >= 1) {
//            if (c >= 1 && c <= md[b]) {
//                addDate(a, b, c);
//            }
//        }
//    }
//}
//int main()
//{
//    cin >> a;
//    cin >> t;
//    cin >> b;
//    cin >> t;
//    cin >> c;
//    // 年月日 日月年 月日年
//    // 需要将日期从早到晚排列
//    judge(a, b, c);
//    judge(c, b, a);
//    judge(c, a, b);
//    std::sort(strs.begin(), strs.end());
//    // 去重
//    for (int i = 0; i < strs.size() - 1; ++i) {
//        if (strs[i] == strs[i + 1]) {
//            for (int j = i + 1; j < strs.size() - 1; ++j) {
//                strs[j] = strs[j + 1];
//            }
//            strs.pop_back();
//        }
//    }
//    for (const auto& e : strs) {
//        cout << e << endl;
//    }
//    return 0;
//}



// 分考场
// 过了40%
//int n, m;
//int cnt;
//int land[105][105];
//std::list<int> groups[105]; // 105个链表
//int visit[105];
// 基本思路就是暴力，找当前所有人依次判断是否能组成一队
// 通过一个链表串联起来
// 实际上这种思路是不够严谨的，能过40%已经很不错了
//void judge(std::list<int>& group, int index)
//{
//    for (int i = index; i <= n; ++i) {
//        if (!visit[i]) {
//            bool flag = true;
//            for (const auto& e : group) {
//                if (land[e][i] == 1) {
//                    flag = false;
//                    break;
//                }
//            }
//            // 如果一个都不认识就加入队列
//            if (flag) {
//                group.push_back(i);
//                visit[i] = 1;
//            }
//        }
//    }
//}

//int main()
//{
//    cin >> n >> m;   //n个人，m行数据
//    for (int i = 0; i < m; ++i) {
//        int a, b;
//        cin >> a >> b;
//        land[a][b] = land[b][a] = 1;   //两个人认识标记为1
//    }
//    for (int i = 1; i <= n; ++i) { // 依次遍历n个人
//        if (!visit[i]) {
//            visit[i] = 1;
//            groups[i].push_back(i);
//            judge(groups[i], i + 1);
//            ++cnt;
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}




// 最大数字
// 采用搜索的方式,对于每一位，采用+的方式或者-的方式使其尽量大,如果+能比-达到的效果更好就采用+的方式
// 通过率80%
//int a, b; //+1执行a次，-1执行b次
//string n;
//std::vector<string> strs;
//void dfs(string str, int w, int a, int b)
//{
//    if (w == str.size()) {
//        strs.push_back(str);
//        return;
//    }

//    // w == 0表示首位
//    int v = str[w] - '0';
//    // 判断是否可以+的方式
//    if (9 - v <= a) {
//        string strt = str;
//        strt[w] = '9';
//        dfs(strt, w + 1, a - 9 + v, b);
//    } else {
//        string strt = str;
//        strt[w] = '0' + v + a;
//        strs.push_back(strt);
//    }
//    // 判断是否可以-的方式
//    if (v + 1 <= b) {
//        string strt = str;
//        strt[w] = '9';
//        dfs(strt, w + 1, a, b - 1 - v);
//    }
//    strs.push_back(str);
//}
//int main()
//{
//    cin >> n >> a >> b;
//    dfs(n, 0, a, b);
//    sort(strs.begin(), strs.end());
//    cout << strs.back() << endl;
//    return 0;
//}



// k倍区间(暴力求解)
// 这个数据量，暴力应该不行
//通过率28.6%
//using ll = long long;
//int n, k;
//int a[100005];
//int cnt;
//int sum(int i, int j)
//{
//    ll res = 0;
//    for (int x = i; x <= j; ++x) {
//        res += a[x];
//    }
//    return res;
//}
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> n >> k;
//    for (int i = 0; i < n; ++i) {
//        cin >> a[i];
//    }
//    for (int i = 0; i < n; ++i) {
//        for (int j = i; j < n; ++j) {
//            if (sum(i, j) % k == 0) {
//                ++cnt;
//            }
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}




// 由于上面的k倍区间需要用到前缀和
// 这里学习前缀和
// 前缀和的优势:以(o1)的时间复杂度得到某块区间的总和
// 当然前缀和有2维的，会更加难一些
//long long s[100005]; // 记录前缀和
//int a[100005];
//int n;
//int l, r;
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i];
//        s[i] = s[i - 1] + a[i];
//    }
//    cin >> l >> r;
//    cout << s[r] - s[l - 1] <<endl;  //得到[r,l]这个区间的和
//    return 0;
//}




// k倍区间
//int n, k;
//long long cnt;
//long long  a[100010];
//int crr[100010]; // 这个数组记录对应的余数的前缀区间有几个
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    crr[0] = 1;    //如果不设置crr[0] = 1每次算到 %k ==0的时候就没有算上自身
//    cin >> n >> k;
//    for (int i = 1; i <= n; ++i) {
//        cin >> a[i];
//        a[i] += a[i - 1]; // s[i]记录a[1]到a[i]的和
//        cnt += crr[a[i] % k];
//        ++crr[a[i] % k];
//    }
//    cout << cnt;
//    return 0;
//}



// 分巧克力
// 通过率100%
////学到的东西:过自己的样例的时候，需要测试一下极限情况
// int n, k; // n块巧克力,k个小朋友
// struct Cho {
//     int width;
//     int height;
// };
// Cho chos[100005];
//  判断是否能以这个长度切
// bool judge(int x)
//{
//     int cnt = 0;
//     for (int i = 1; i <= n; ++i) {
//         cnt = cnt + (chos[i].width / x) * (chos[i].height / x);
//         if (cnt >= k) {
//             break;
//         }
//     }
//     return cnt >= k;
// }
// int main()
//{
//     int maxZ = 100000;
//     cin >> n >> k;
//     for (int i = 1; i <= n; ++i) {
//         cin >> chos[i].height >> chos[i].width;
//         maxZ = std::max(maxZ, std::max(chos[i].width, chos[i].height));  //得到r,r不可能大于最大的边长
//     }
//     int l = 1, r = maxZ, m;
//     // 二分枚举所有长度
//     while (l <= r) {
//         m = (l + r) / 2;
//         if (judge(m)) {
//             l = m + 1;
//         } else {
//             r = m - 1;
//         }
//     }
//     cout << r << endl;

//    return 0;
//}



// 字串简写
// 想法是暴力?数据量过大，暴力不太行
// 需要用到后一项减前一项，前缀和?
//int k; // 大于等于k的字符串可以采用这种方式的简写
//string str;
//char c1, c2;
//long long cnt ,sum;
//int main()
//{
//    cin >> k;
//    cin >> str;
//    cin >> c1 >> c2;
//    for (int i = k - 1; i < str.length(); ++i) {
//        int j = i - k + 1;
//        if (str[j] == c1) {
//            ++sum;
//        }
//        if (str[i] == c2) {
//            cnt += sum;
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}



//卡片换位
//没有什么思路
//* A
//**B
//char land[3][5];
//int cnt;  //记录当前步数
//int main()
//{
//    for (int i = 1; i <= 3; ++i) {
//        for (int j = 1; j <= 2; ++j) {
//            cin >> land[i][j];
//        }
//    }

//    return 0;
//}


// 移动距离
// int w, m, n;
// int cnt;
// int main()
//{
//    cin >> w >> m >> n;
//    int dm, dn, xm, ym, xn, yn;
//    dm = (m - 1) / w;
//    dn = (n - 1) / w;
//    if (dm % 2 == 0) {
//        // 从左往右
//        xm = dm + 1;
//        ym = (m - 1) % w + 1;
//    } else {
//        // 从右往左
//        xm = dm + 1;
//        ym = w - ((m - 1) % w);
//    }
//    if (dn % 2 == 0) {
//        // 从左往右
//        xn = dn + 1;
//        yn = (n - 1) % w + 1;
//    } else {
//        // 从右往左
//        xn = dn + 1;
//        yn = w - ((n - 1) % w);
//    }
//    cnt = std::abs(xm - xn) + std::abs(yn - ym);
//    cout << cnt << endl;
//    return 0;
//}



// 数位递增的数
// 直接模拟感觉,就是数据量比较大，可能需要优化
// int n, res;
// std::vector<int> nums; // 存放所有的数位
// void getWei(int x)
//{
//    while (x > 0) {
//        nums.push_back(x % 10);
//        x /= 10;
//    }
//}
// bool judge()
//{
//    if (nums.size() == 1) {
//        return true;
//    }
//    for (int i = 1; i < nums.size(); ++i) {
//        if (nums[i - 1] < nums[i]) {
//            return false;
//        }
//    }
//    return true;
//}
// int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        nums.clear();
//        getWei(i);
//        if (judge()) {
//            ++res;
//        }
//    }
//    cout << res << endl;
//    return 0;
//}





// 数字三角形
// 通过率百分之50,应该还要有所剪枝
// int n; // 三角形的行数
// int arr[105][105];
// int res;
// void dfs(int x, int y, int l, int r, int s)
//{
//    s += arr[x][y];
//    // 剪枝
//    if (std::abs(l - r) - 1 > n - x) {
//        return;
//    }
//    if (x > n) {
//        return;
//    }
//    if (x == n && std::abs(l - r) <= 1) {
//        res = std::max(res, s);
//    }
//    // 接下来选择两条路
//    dfs(x + 1, y, l + 1, r, s);
//    dfs(x + 1, y + 1, l, r + 1, s);
//}
// int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= i; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//    dfs(1, 1, 0, 0, 0); // 从1,1处开始搜索
//    cout << res << endl;
//    return 0;
//}



// 硬币的最小组合
// 暴力，思路是最少的硬币应该要选最大的面额
//int main()
//{
//    //两个一元硬币，剩下的全是三元硬币
//    int n = 20240618 / 3 + 2;
//    cout << n << endl;
//    return 0;
//}



// 正则问题
// 模拟,深搜
// |不仅可以是左右，也可以是 | |分割成三份甚至更多
//int cnt;
//std::string str;
//int i;
//int dfs()
//{
//    int res = 0;
//    while (i < str.length()) {
//        if (str[i] == '(') {
//            i++;
//            res += dfs();
//            i++;
//        } else if (str[i] == '|') {
//            i++;
//            res = std::max(res, dfs());
//        } else if (str[i] == ')') {
//            break;
//        } else if (str[i] == 'x') {
//            ++res;
//            ++i;
//        }
//    }
//    return res;
//}
//int main()
//{
//    cin >> str;
//    cnt = dfs();
//    cout << cnt << endl;
//    return 0;
//}




// 字母数
//bool judge(int x)
//{
//    while (x > 0) {
//        int n = x % 16;
//        if (n < 10) {
//            return false;
//        }
//        x /= 16;
//    }
//    return true;

//}
//int main()
//{
//    int i = 2023;
//    while (1) {
//        bool flag = judge(i);
//        if (flag) {
//            cout << i << endl;
//            break;
//        }
//        ++i;
//    }
//    return 0;
//}



// 大乘积
// int arr[30] = { 99, 22, 51, 63, 72, 61, 20, 88, 40, 21, 63, 30, 11, 18, 99, 12, 93, 16, 7, 53, 64, 9, 28, 84,
//    34, 96, 52, 82, 51, 77 };
// int cnt;
// int main()
//{
//    // 遍历枚举
//    for (int i = 0; i < 30; ++i) {
//        for (int j = i + 1; j < 30; ++j) {
//            if (arr[i] * arr[j] >= 2022) {
//                ++cnt;
//            }
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}


// 第三小
//int arr[100005];
//int n;
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//    int minnum[3] = { 9999999, 9999999, 9999999 }; // 存放前三小的数
//    // 先初始化三个数
//    for (int j = 0; j < 3; ++j) {
//        if (arr[j] < minnum[0]) {
//            minnum[2] = minnum[1];
//            minnum[1] = minnum[0];
//            minnum[0] = arr[j];
//        } else if (arr[j] < minnum[1]) {
//            minnum[2] = minnum[1];
//            minnum[1] = arr[j];
//        } else if (arr[j] < minnum[2]) {
//            minnum[2] = arr[j];
//        }
//    }
//    cout << minnum[2] << " ";

//    for (int j = 3; j < n; ++j) {
//        if (arr[j] < minnum[0]) {
//            minnum[2] = minnum[1];
//            minnum[1] = minnum[0];
//            minnum[0] = arr[j];
//        } else if (arr[j] < minnum[1]) {
//            minnum[2] = minnum[1];
//            minnum[1] = arr[j];
//        } else if (arr[j] < minnum[2]) {
//            minnum[2] = arr[j];
//        }
//        cout << minnum[2] << " ";
//    }
//    cout << endl;
//    return 0;
//}



// 合根植物
// 思路是并查集
// int m, n, k; // m行n列，k行数据
// int fa[1000005]; // 用于存储所有植物的连根植物
// int cnt;
// int find(int x)
//{
//    if (x != fa[x]) {
//        fa[x] = find(fa[x]);
//    }
//    return fa[x];
//}
// int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> m >> n;
//    for (int i = 1; i <= m * n; ++i) {
//        fa[i] = i;
//    }
//    cin >> k;
//    for (int i = 0; i < k; ++i) {
//        int a, b;
//        cin >> a >> b;
//        int f1 = find(a);
//        int f2 = find(b);
//        if (f1 != f2) {
//            fa[f1] = f2;
//        }
//    }
//    for (int i = 1; i <= m * n; ++i) {
//        if (fa[i] == i) {
//            ++cnt;
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}




// 赢球票
// 思路感觉就是枚举
// 只过了20%
//int arr[105]; // 存储卡片排列
//std::vector<int> tempV;
//int n; // 卡片数量
//int cnt;
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//    // 枚举所有可能的起点
//    for (int i = 0; i < n; ++i) {
//        int tempC = 0;
//        int j = 1; // 从1开始数
//        int p = i; // 记录当前的起点位置
//        tempV.clear();
//        for (int k = 0; k < n; k++) {
//            tempV.push_back(arr[k]);
//        }
//        while (!tempV.empty()) {
//            if (j > n) {
//                break;
//            }
//            if (j == tempV[p]) {
//                tempV.erase(tempV.begin() + p); // 删除下标为p的元素
//                if (p == tempV.size()) {
//                    p = 0;
//                }
//                j = 1;
//                tempC++;
//                continue;
//            }
//            ++j;
//            ++p;
//            if (p == tempV.size()) {
//                p = 0;
//            }
//        }
//        cnt = std::max(cnt, tempC);
//    }
//    cout << cnt << endl;
//    return 0;
//}


















