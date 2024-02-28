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



















