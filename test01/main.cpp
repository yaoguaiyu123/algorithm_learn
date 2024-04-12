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
#include <list>
#include <stack>
#include <deque>     //双向的队列
#include <queue>
#include <set>
#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <map>
#include <climits>


// 问题解决日志
// int w; // 多少组数据
// int n; // 每次的比赛时长
// string str;  //输入的字符串
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
// 算路径条数是要回退的
// int n, m, x, y;
// int arr[23][23]; // 棋盘
// int cnt; // 路的条数
// int dx[8] = { -1, -1, -2, -2, 1, 1, 2, 2 };
// int dy[8] = { -2, 2, -1, 1, -2, 2, -1, 1 };
// void dfs(int nx, int ny)
// {
//     if (nx == n && ny == m) {
//         cnt++;
//         return;
//     }
//     // 可以向右或者向下行走
//     if (nx + 1 >= 0 && nx + 1 <= n && arr[nx + 1][ny] != -1) {
//         arr[nx + 1][ny] = -1;
//         dfs(nx + 1, ny);
//         arr[nx + 1][ny] = 0;
//     }
//     if (ny + 1 >= 0 && ny + 1 <= m && arr[nx][ny + 1] != -1) {
//         arr[nx][ny + 1] = -1;
//         dfs(nx, ny + 1);
//         arr[nx][ny + 1] = 0;
//     }
// }
// int main()
// {
//     cin >> n >> m >> x >> y; // 输入终点和马的坐标
//     // 初始化棋盘
//     arr[x][y] = -1;
//     for (int i = 0; i < 8; ++i) {
//         int xx = x + dx[i];
//         int yy = y + dy[i];
//         if (xx <= n && xx >= 0 && yy <= m && yy >= 0) {
//             arr[xx][yy] = -1; // 标记为不可走的点
//         }
//     }
//     dfs(0, 0);
//     cout << cnt << endl;
//     return 0;
// }


// 走出迷宫
// int n, m;
// int sx, sy, ex, ey;
// string arr[502];
// bool flag = false;
// int dx[4] = { -1, 1, 0, 0 };
// int dy[4] = { 0, 0, -1, 1 };
// void dfs(int x, int y)
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
// int main()
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
//    dfs(sx, sy);
//    if (flag) {
//        cout << "Yes" << endl;
//    } else {
//        cout << "No" << endl;
//    }
//    return 0;
//}


// 纪念品分组(原)
// #include<bits/stdc++.h>
// using namespace std;
// int w,n;    //每组上限和纪念品的个数
// int a[30005];
// bool visit[30005];
// int cnt;     //分的组数
// int ssbegin=1;
// int main()
//{
//     cin>>w>>n;
//     for(int i=1;i<=n;i++)
//     {
//         cin>>a[i];
//     }
//     sort(a+1,a+n+1);
//     int i=0;
//     while(i<n)
//     {
//         for(int j=n;j>ssbegin;j--)
//         {
//             if(a[ssbegin]+a[j]>w&&!visit[j])
//             {
//                 visit[j]=true;
//                 cnt++;
//                 i++;
//             }
//             else if(a[ssbegin]+a[j]<=w&&!visit[j])
//             {
//                 visit[j]=true;
//                 visit[ssbegin++]=true;
//                 cnt++;
//                 i+=2;
//                 break;
//             }
//         }
//         if(i==n-1)    //只剩单个未放
//         {
//             i++;
//             cnt++;
//         }
//     }
//     cout<<cnt;
//     return 0;
// }


// 纪念品分组
// int w, n;
// int arr[30005]; // 记录每个纪念品的价格
// int cnt = 0;
// int main()
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
// int n, m;
// unsigned long long cntz, cntc;
// int main()
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
// {
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
// }
// int main()
// {
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        visit[i] = 1;
//        arr[1] = i;
//        dfs(i, 1);
//        visit[i] = 0;
//    }
//    return 0;
// }


// 数的计算(暴力搜索)
// #include <bits/stdc++.h>
// using namespace std;
// int n, cnt = 1;
// void dfs(int a)
//{
//    for (int i = 1; i <= a / 2; i++) {
//        cnt++;
//        dfs(i);
//    }
//}
// int main()
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
//    std::set<int>::iterator it;
//    for (it = resSet.begin(); it != resSet.end(); ++it) {
//        std::cout << *it << "    ";
//    }
//    cout <<"\n最终结果为: "<< resSet.size() << endl;
//    return 0;
//}


// 第十四届蓝桥杯省赛C++ B组第三题
// int n;
// int maxV;
// int minV = -1;
// int a, b;
// int main()
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
// int N;
// int a[100005];
// int count = 0;
// int dp[10005];
// int main()
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
// int t, m, n;
// int arr[55][55];
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { 1, -1, 0, 0 };
// int ddx[8] = { 0, 0, 1, 1, 1, -1, -1, -1 };
// int ddy[8] = { -1, 1, -1, 1, 0, -1, 1, 0 };
// int cnt;
// void dfs2(int, int);
// void dfs1(int x, int y)
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

// void dfs2(int x, int y)
//{
//     // 陆地的搜索
//     for (int i = 0; i < 4; ++i) {
//         int xx = x + dx[i];
//         int yy = y + dy[i];
//         if (xx >= 1 && xx <= m && yy >= 1 && yy <= n && arr[xx][yy] == 1) {
//             arr[xx][yy] = 2;
//             dfs2(xx, yy);
//         }
//     }
// }

// int main()
//{
//     std::ios::sync_with_stdio(false);
//     cin.tie(0), cout.tie(0);
//     cin >> t;
//     while (t--) {
//         memset(arr,0,sizeof(arr));   //初始化数组
//         cnt = 0;
//         cin >> m >> n; // m行n列
//         for (int i = 1; i <= m; ++i) {
//                 string str;
//                 cin >>str;
//                 for(int j = 1;j<=n;++j){
//                     arr[i][j] = str[j-1]-'0';
//                 }
//         }
//         dfs1(0, 0); // 从0,0处开始海洋的搜索
//         cout << cnt << endl;
//     }
//     return 0;
// }



// 第十三届蓝桥杯c++b组国赛第三题
// 思路感觉是贪心
// 这一个版本时间复杂度过大
// int n, m; // n种卡牌，m张空卡牌
// int a[200005];
// int b[200005];
// int c[200005];
// int main()
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
// 过了100%,但是时间复杂度过大还是，如果遇到更大的数据应该过不了
// 这道题的正确做法应该是枚举结果
// long long n, m; // n种卡牌，m张空卡牌
// struct Data {
//     int a = 0;
//     int b = 0;
// };
// Data ds[200005];
// bool Compare(Data& x, Data& y)
// {
//     return x.a < y.a;
// }
// int main()
// {
//     int l, r, mid;
//     std::ios::sync_with_stdio(false);
//     cin.tie(0), cout.tie(0);
//     cin >> n >> m;
//     for (int i = 0; i < n; ++i) {
//         cin >> ds[i].a; // 输入卡牌数量
//     }
//     for (int i = 0; i < n; ++i) {
//         cin >> ds[i].b;
//     }
//     std::sort(ds, ds + n, Compare);
//     // 二分查找当前的最小值的右边界
//     bool f = false;
//     while (m) {
//         l = 0, r = n - 1, mid;
//         int look = ds[0].a;
//         while (l < r) {
//             mid = (l + r + 1) / 2;
//             if (ds[mid].a > look) {
//                 r = mid - 1;
//             } else {
//                 l = mid; // 等于也要往右移动
//             }
//         }
//         for (int i = 0; i <= r; ++i) {
//             if (ds[i].b && m) {
//                 // cout << "i = " << i << "  m = " << m << endl;
//                 --ds[i].b;
//                 --m;
//                 ++ds[i].a;
//             } else {
//                 f = true;
//                 break;
//             }
//         }
//         // cout << "test: " << ds[0].a << "   " << ds[0].b << " r = " << r << endl;
//         if (f) {
//             break;
//         }

//     }
//     cout << ds[r].a << endl;
//     return 0;
// }


// 二分查找
// l,r的初始值 l = 0, r = n - 1,即分别指向数组的第一个和最后一个数字
// 结束条件 while(l<=r)
// m  = (l + r)/2
// r = m - 1 或者 l = m + 1
// int n;
// int nums[100005];
// int main()
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
// int n, m; // 行数和列数
// string strs[105];
// int judge(int x, int y)
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
// int count_ = 0;
// int main()
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
// int n;
// int brr[25], arr[25]; // 北边靶子上的箭数(yy决定)和西边靶子上的箭数(xx决定)
// int land[25][25];
// int dx[4] = { 1, -1, 0, 0 };
// int dy[4] = { 0, 0, -1, 1 };
// std::vector<int> v;
// bool Check() {
//    for (int i = 0; i < n; i++) {
//        if (arr[i]) return false;
//        if (brr[i])  return false;
//    }
//    return true;
//}
// void dfs(int x, int y)
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
// int main()
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
// int gcd(int x, int y)
//{
//    if (y) {
//        return gcd(y, x % y);
//    } else {
//        return x;
//    }
//}
// int n;
// int arr[105];
// int cnt;
// int dp[10000]; // 以10000为界，dp[i] == 1表示i个包子可以凑出来，dp[i] == 0 表示凑不出
// bool arr_gcd()
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
// int main()
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


// 包子凑数题解
// int gcd(int m, int n)
//{
//     if (n) {
//         return gcd(n, m % n);
//     } else {
//         return m;
//     }
// }
// const int MAXN = 105, MAX_DP = 100005; // 又来定义
// int n, a[MAXN], dp[MAX_DP], ans;
// bool notCoprime(int* arr) // 返回arr数组中所有数的最大公约数是否大于1
//{
//     int g = arr[0];
//     for (int i = 1; i < n; i++) {
//         g = gcd(g, arr[i]);
//         if (g == 1) {
//             return false; // 如果g已经为1，不用再循环，直接返回
//         }
//     }
//     return g > 1;
// } // 定义函数，运行更快
// int main()
//{
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     if (notCoprime(a)) // 如果gcd({A_i})>1
//     {
//         cout << "INF";
//         return 0; // 直接结束
//     }
//     dp[0] = 1; // 注意0是被认为能被凑出的
//     for (int i = 0; i < n; i++) {
//         for (int j = a[i]; j < MAX_DP; j++) {
//             dp[j] = std::max(dp[j], dp[j - a[i]]); // 状态转移方程
//         }
//     }
//     for (int i = 1; i < MAX_DP; i++) {
//         if (!dp[i]) {
//             ans++; // 如果dp[i]=0,多一个凑不出的数
//         }
//     }
//     cout << ans << endl;
//     return 0;
// }


// 买不到的数目(动态规划)
// int n[3];
// int res;
// int dp[100005]; // dp[i]==1表示i是能够凑到的
// int main()
// {
//     cin >> n[1] >> n[2];
//     dp[0] = 1;
//     for (int i = 1; i <= 2; ++i) {
//         for (int j = n[i]; j <= 100000; ++j) {
//             dp[j] = std::max(dp[j], dp[j - n[i]]);
//         }
//     }
//     for (int i = 1; i <= 100000; ++i) {
//         if (!dp[i]) {
//             res = i;
//         }
//     }
//     cout << res << endl;
//     return 0;
// }


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
// int n, m;
// int main()
// {
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
// }



// 对局匹配(未完成)
// int n, k;
// int a[100005];
// int dp[100005]; // dp[i]表示前i个人中最多的情况
// int cnt;
// bool check(int i, int j)
//{

//}
// int main()
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
// string str;
// int n;
// int main()
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
// int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
// int cnt = 0;
// int n;
// int func(int a,int b)
//{
//    int sum=0;
//    for(int i=a;i<=b;i++)
//    {
//        sum=sum*10+arr[i];
//    }
//    return sum;
//}
// int main()
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
// int a, b, c;
// char t;
// int md[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// std::vector<string> strs;
// void addDate(int x, int y, int z)
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

// void judge(int a, int b, int c)
//{
//     if (a % 4 == 0) {
//         md[2] = 29;
//         if (b <= 12 && b >= 1) {
//             if (c >= 1 && c <= md[b]) {
//                 addDate(a, b, c);
//             }
//         }
//     } else {
//         md[2] = 28;
//         if (b <= 12 && b >= 1) {
//             if (c >= 1 && c <= md[b]) {
//                 addDate(a, b, c);
//             }
//         }
//     }
// }
// int main()
//{
//     cin >> a;
//     cin >> t;
//     cin >> b;
//     cin >> t;
//     cin >> c;
//     // 年月日 日月年 月日年
//     // 需要将日期从早到晚排列
//     judge(a, b, c);
//     judge(c, b, a);
//     judge(c, a, b);
//     std::sort(strs.begin(), strs.end());
//     // 去重
//     for (int i = 0; i < strs.size() - 1; ++i) {
//         if (strs[i] == strs[i + 1]) {
//             for (int j = i + 1; j < strs.size() - 1; ++j) {
//                 strs[j] = strs[j + 1];
//             }
//             strs.pop_back();
//         }
//     }
//     for (const auto& e : strs) {
//         cout << e << endl;
//     }
//     return 0;
// }



// 分考场
// 过了40%
// int n, m;
// int cnt;
// int land[105][105];
// std::list<int> groups[105]; // 105个链表
// int visit[105];
// 基本思路就是暴力，找当前所有人依次判断是否能组成一队
// 通过一个链表串联起来
// 实际上这种思路是不够严谨的，能过40%已经很不错了
// judge函数挑选与当前group中不认识的人加入
// void judge(std::list<int>& group, int index)
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

// int main()
//{
//     cin >> n >> m; // n个人，m行数据
//     for (int i = 0; i < m; ++i) {
//         int a, b;
//         cin >> a >> b;
//         land[a][b] = land[b][a] = 1; // 两个人认识标记为1
//     }
//     for (int i = 1; i <= n; ++i) { // 依次遍历n个人
//         if (!visit[i]) {
//             visit[i] = 1;
//             groups[i].push_back(i);
//             judge(groups[i], i + 1);
//             ++cnt;
//         }
//     }
//     cout << cnt << endl;
//     return 0;
// }



// 分考场再战
// 过了100%
// 总之，就是当一个学生面临多个考场或者一个考场可以去的时候，都要分情况讨论要不要去，还是自己重新再开一个考场
//int n, m;
//int cnt;
//int minN = 105;
//int land[105][105];
//int mp[105][105]; // mp[i][j]表示第i个考场的第j个同学的编号
//void dfs(int x, int y)
//{
//    // 所有同学已经分配完毕
//    if (x > n) {
//        minN = std::min(y, minN);
//        return;
//    }
//    if (y > minN) {
//        return;
//    }
//    // 遍历每一个考场
//    for (int i = 1; i <= y; ++i) {
//        // 遍历每一个考场里面的每一个人
//        int j = 1;
//        while (mp[i][j] && land[mp[i][j]][x] == 0) {
//            ++j;
//        }
//        // 如果没有认识的人
//        if (!mp[i][j]) {
//            mp[i][j] = x;
//            dfs(x + 1, y);
//            mp[i][j] = 0;
//        }
//    }
//    // 自己新开一个考场
//    mp[y + 1][1] = x;
//    dfs(x + 1, y + 1);
//    mp[y + 1][1] = 0;
//}
//int main()
//{
//    cin >> n >> m;
//    for (int i = 0; i < m; ++i) {
//        int u, v;
//        cin >> u >> v;
//        land[u][v] = land[v][u] = 1;
//    }
//    dfs(1, 0); // 第1个同学，此时有0个考场
//    cout << minN << endl;
//    return 0;
//}



// 最大数字
// 采用搜索的方式,对于每一位，采用+的方式或者-的方式使其尽量大,如果+能比-达到的效果更好就采用+的方式
// 通过率80%
// int a, b; //+1执行a次，-1执行b次
// string n;
// std::vector<string> strs;
// void dfs(string str, int w, int a, int b)
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
// int main()
//{
//    cin >> n >> a >> b;
//    dfs(n, 0, a, b);
//    sort(strs.begin(), strs.end());
//    cout << strs.back() << endl;
//    return 0;
//}



// k倍区间(暴力求解)
// 这个数据量，暴力应该不行
// 通过率28.6%
// using ll = long long;
// int n, k;
// int a[100005];
// int cnt;
// int sum(int i, int j)
//{
//    ll res = 0;
//    for (int x = i; x <= j; ++x) {
//        res += a[x];
//    }
//    return res;
//}
// int main()
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
// long long s[100005]; // 记录前缀和
// int a[100005];
// int n;
// int l, r;
// int main()
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
// int n, k;
// long long cnt;
// long long  a[100010];
// int crr[100010]; // 这个数组记录对应的余数的前缀区间有几个
// int main()
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



// 卡片换位
// 没有什么思路
//* A
//**B
// char land[3][5];
// int cnt;  //记录当前步数
// int main()
//{
//     for (int i = 1; i <= 3; ++i) {
//         for (int j = 1; j <= 2; ++j) {
//             cin >> land[i][j];
//         }
//     }

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
// 通过率百分之50
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



// 数字三角形
// 通过100%
// int arr[105][105];
// int N;
// int dp[105][105];
// int main()
// {
//     cin >> N;
//     for (int i = 1; i <= N; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             cin >> arr[i][j];
//         }
//     }

//     for (int i = 1; i <= N; ++i) {
//         for (int j = 1; j <= i; ++j) {
//             dp[i][j] = std::max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
//         }
//     }
//     if (N % 2 == 0) {
//         cout << std::max(dp[N][N / 2], dp[N][N / 2 + 1]) << endl;
//     } else {
//         cout << dp[N][N / 2 + 1] << endl;
//     }
//     return 0;
// }


// 硬币的最小组合
// 暴力，思路是最少的硬币应该要选最大的面额
// int main()
//{
//    //两个一元硬币，剩下的全是三元硬币
//    int n = 20240618 / 3 + 2;
//    cout << n << endl;
//    return 0;
//}



// 正则问题
// 模拟,深搜
// |不仅可以是左右，也可以是 | |分割成三份甚至更多
// int cnt;
// std::string str;
// int i;
// int dfs()
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
// int main()
//{
//    cin >> str;
//    cnt = dfs();
//    cout << cnt << endl;
//    return 0;
//}




// 字母数
// bool judge(int x)
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
// int main()
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
// int arr[100005];
// int n;
// int main()
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



// 并查集
// 蓝桥杯真题--合根植物
//int fa[1000005]; // fa[i]表示i编号的植物的祖先
//int m, n; // m行n列
//int k;
//long long cnt;
// 查找祖先的函数
//int find(int x)
//{
//    if (fa[x] != x) {
//        fa[x] = find(fa[x]);
//    }
//    return fa[x];
//}

//int main()
//{
//    cin >> m >> n;
//    cin >> k;
//    for (int i = 1; i <= m * n; ++i) {
//        fa[i] = i; // 初始化每个植物的祖先为自己
//    }

//    for (int i = 0; i < k; ++i) {
//        int a, b;
//        cin >> a >> b;
//        int f1 = find(a);
//        int f2 = find(b);
//        fa[f1] = f2;
//    }

//    for(int i = 1; i<= m * n;++i){
//        if(fa[i] == i){
//            ++cnt;
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}



// 赢球票
// 思路感觉就是枚举
// 过了100%
//int arr[105]; // 存储卡片排列
//bool isDe[105]; // 为true表示已经删除
//int n; // 卡片数量
//int cnt;
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//    }
//    // 枚举所有可能的起点
//    for (int i = 1; i <= n; ++i) {
//        memset(isDe, 0, sizeof(isDe));
//        int c = 1; // 从1开始数
//        int j = i; // 遍历arr数组的索引
//        int tempC = 0;

//        while (true) {
//            if (c > n) {
//                break;
//            }
//            if (tempC == n * (n + 1) / 2) {
//                break; // 全部删除完成
//            }

//            // 已经删除的
//            if (isDe[j]) {
//                j += 1;
//                if (j == n + 1) {
//                    j = 1;
//                }
//                continue;
//            }
//            if (arr[j] == c) {
//                isDe[j] = true;
//                c = 1;
//                tempC += arr[j];
//                j += 1;
//                if (j == n + 1) {
//                    j = 1;
//                }
//            } else {
//                ++c;
//                j += 1;
//                if (j == n + 1) {
//                    j = 1;
//                }
//            }
//        }
//        cnt = std::max(tempC, cnt);

//    }
//    cout << cnt << endl;
//    return 0;
//}




// 装箱问题
// 感觉直接暴力剪枝都可以啊
// 暴力过了100%
// int v, n;
// int arr[35];
// int minv = 99999;
// void dfs(int x, int nowv)
//{
//    if (x >= n) {
//        minv = std::min(minv, v - nowv);
//        return;
//    }
//    dfs(x + 1, nowv); // 不选第x个
//    if (nowv + arr[x] <= v) {
//        dfs(x + 1, nowv + arr[x]); // 选择第x个
//    }
//}
// int main()
//{
//    cin >> v >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//    dfs(0, 0);
//    cout << minv << endl;
//    return 0;
//}


// 花生采摘
// 思路感觉就是模拟
// 过了100%
// int m, n, k; // m行n列
// struct Point {
//    int x;
//    int y;
//    Point(int x, int y) : x(x), y(y) {} // 定义接受两个int参数的构造函数
//};
// std::vector<Point> points; // 记录所有有花生的地点
// int cnt;
// int land[25][25];
// bool compare(Point a, Point b)
//{
//    return land[a.x][a.y] > land[b.x][b.y];
//}
// int main()
//{
//    cin >> m >> n >> k;
//    for (int i = 1; i <= m; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            cin >> land[i][j];
//            if (land[i][j] != 0) {
//                points.push_back(Point(i, j));
//            }
//        }
//    }
//    for (int i = 0; i < points.size() - 1; ++i) {
//        for (int j = i + 1; j < points.size(); ++j) {
//            if (land[points[j].x][points[j].y] > land[points[i].x][points[i].y]) {
//                Point temp = points[j];
//                points[j] = points[i];
//                points[i] = temp;
//            }
//        }
//    }

//    int t = 0;
//    t += points[0].x + 1;
//    cnt += land[points[0].x][points[0].y];
//    for (int i = 1; i < points.size(); ++i) {
//        t = t + std::abs(points[i - 1].x - points[i].x) + std::abs(points[i - 1].y - points[i].y);
//        t = t + 1 + points[i].x;
//        if (t > k) {
//            break;
//        } else {
//            t = t - points[i].x;
//            cnt += land[points[i].x][points[i].y];
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}



// 第k小的数
// 二分过了70%
// 有时间可以再想想
// int n, k;
// int a;
// int brr[10005];
// int main()
//{
//    cin >> n >> k;
//    for (int i = 1; i <= n; ++i) {
//        brr[i] = 99999;
//    }
//    for (int i = 0; i < n; ++i) {
//        cin >> a;
//        if (a < brr[k]) {
//            // 二分在1到k中查找位置
//            int l = 1;
//            int r = k, m;
//            bool f = true;
//            while (l <= r) {
//                m = (l + r) / 2;
//                if (brr[m] > a) {
//                    r = m - 1;
//                } else if (brr[m] < a) {
//                    l = m + 1;
//                } else {
//                    f = false;
//                    break;
//                }
//            }
//            if (f && brr[m - 1] != a && brr[m + 1] != a) {
//                for (int j = k; j > l; --j) {
//                    brr[j] = brr[j - 1];
//                }
//                brr[l] = a;
//            }

//        }
//    }
//    cout << brr[k] << endl;
//    return 0;
//}




// 多边形面积
// 使用叉乘计算多边形面积，要求是给出的各点需要按逆时针或者顺时针排列
// int xrr[105];
// int yrr[105];
// int n, s;
// int minx = 300, miny = 300, maxx = -300, maxy = -300;
// bool judge(int x, int y)
//{

//    return false;
//}
// int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> xrr[i] >> yrr[i]; // 输入坐标
//    }
//    xrr[n] = xrr[0];
//    yrr[n] = yrr[0];

//    for (int i = 0; i < n; ++i) {
//        s += (xrr[i] * yrr[i + 1] - xrr[i + 1] * yrr[i]);
//    }
//    cout << std::abs(s) / 2 << endl;
//    return 0;
//}




// 求和
// 像这种很多项相加的题目，首先需要想到前缀和
// int n;
// long long brr[200005];
// long long arr[200005]; // 存储前缀和
// long long sum;
// long long ans;
// int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> brr[i];
//        arr[i] = arr[i - 1] + brr[i];
//    }
//    for (int i = 1; i < n; ++i) {
//        ans = ans + brr[i] * (arr[n] - arr[i]);
//    }
//    cout << ans << endl;
//    return 0;
//}




// 选数异或
// ^异或符号
// long long n, m, x;
// long long arr[300005];
// int main()
//{
//    cin >> n >> m >> x;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//    }
//    for (int p = 0; p < m; ++p) {
//        int l, r;
//        cin >> l >> r;
//        bool f = false;
//        for (int i = l; i < r; ++i) {
//            for (int j = l; j <= r; ++j) {
//                long long res = arr[i] ^ arr[j];
//                if (res == x) {
//                    cout << "yes" << endl;
//                    f = true;
//                    break;
//                }
//            }
//            if (f) {
//                break;
//            }
//        }
//        if (!f) {
//            cout << "no" << endl;
//        }
//    }

//    return 0;
//}



// 九进制转十进制
// int main()
//{
//    int a = 2022;
//    int b = 2 * std::pow(9, 3) + 2 * 9 + 2;
//    cout << b << endl;
//    return 0;
//}



// 顺子日期
// int cnt = 0;
// int dm[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// bool judge(int x)
//{
//    int a1 = x / 1000;
//    int a2 = x / 100 % 10;
//    int a3 = x / 10 % 10;
//    int a4 = x % 10;
//    if (a1 + 1 == a2 && a2 + 1 == a3 || a2 + 1 == a3 && a3 + 1 == a4) {
//        return true;
//    }
//    return false;
//}
// int main()
//{
//    int y = 2022;
//    int m = 1;
//    int d = 1;
//    while (y < 2023) {
//        int res = m * 100;
//        res += d;
//        if (judge(res)) {
//            cnt++;
//            cout << res << endl;
//        }
//        d++;
//        if (d > dm[m]) {
//            d = 1;
//            m++;
//            if (m > 12) {
//                m = 1;
//                y++;
//            }
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}




// 刷题统计
// int main()
//{
//    long long a, b, n;
//    cin >> a >> b >> n;
//    long long nown = 0, nowd = 0;
//    long long s = a * 5 + b * 2;
//    long long weeks = n / s; // 周数
//    while (nown < n % s) {
//        if (nowd <= 5) {
//            nown += a;
//        } else {
//            nown += b;
//        }
//        nowd++;
//    }
//    cout << 7 * weeks + nowd <<endl;
//    return 0;
//}


// 修剪灌木
// 感觉就是模拟，剪三趟出结果
// 也可以找规律直接出结果
// int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n / 2; ++i) {
//        cout << (n - i) * 2 << endl;
//    }
//    for (int i = n / 2 + 1; i <= n; ++i) {
//        cout << (n - 1) * 2 - (n - i) * 2 << endl;
//    }
//    return 0;
//}




// x进制法
// 过了50%
// int n; // 表示最高进制
// int mod = 1000000007;
// int wa, wb;
// int ma[100005];
// int mb[100005];
// int res[100005]; // 存储每一位的进制
// int main()
//{
//    cin >> n;
//    cin >> wa;
//    for (int i = 1; i <= wa; ++i) {
//        cin >> ma[i];
//    }
//    cin >> wb;
//    for (int i = wa - wb + 1; i <= wb; ++i) {
//        cin >> mb[i];
//    }

//    for (int i = 1; i < wa; ++i) {
//        res[i + 1] = std::max(std::max(ma[i + 1], mb[i + 1]) + 1, 2);
//    }
//    long long r1 = ma[1], r2 = mb[1];
//    for (int i = 1; i < wa; ++i) {
//        r1 = (r1 * res[i + 1] + ma[i + 1]) % mod;
//        r2 = (r2 * res[i + 1] + mb[i + 1]) % mod;
//    }

//    cout << (r1 - r2) % mod << endl;

//    return 0;
//}




// 统计子矩阵
// 过了50%
// int n, m; // n行m列
// long long k;
// 在一段区间内快速求和，首先想到前缀和
// 并且前缀和相减最好是一个矩形的区间
// int land[505][505];
// int f[505][505]; // 存储前缀和
// int cnt;
// int main()
//{
//    cin >> n >> m >> k;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cin >> land[i][j];
//            f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + land[i][j];
//            //            cout << "f[" << i << "][" << j << "]:" << f[i][j] << endl;
//        }
//    }
//    // 枚举矩阵的左上角和右下角
//    for (int x1 = 0; x1 <= n; ++x1) {
//        for (int y1 = 0; y1 <= n; ++y1) {
//            for (int x2 = x1 + 1; x2 <= n; ++x2) {
//                for (int y2 = y1 + 1; y2 <= m; ++y2) {
//                    long long s = f[x2][y2] - f[x1][y2] - f[x2][y1] + f[x1][y1];
//                    cout << "s = " << s << endl;
//                    if (s <= k) {
//                        ++cnt;
//                    }
//                }
//            }
//        }
//    }

//    cout << cnt << endl;
//    return 0;
//}




// 积木画
// 可以看出实际上就是5种摆法，然后直接搜索的话肯定超时，正确的做法应该是动规
// 看题解
//
//long long mod = 1000000007;
//long long n;
//long long dp[10000005][3];    //dp[i][0]表示铺了i个并且上下都铺满，dp[i][1]表示上面差一个,dp[i][2]表示下面差一个
// 得到状态转移方程
// dp[i][0] = dp[i-2][0] + dp[i-1][1] + dp[i-1][2] + dp[i-1][0]
// dp[i][1] = dp[i-2][0] + dp[i-1][2]
// dp[i][2] = dp[i-2][0] + dp[i-1][1]

//int main()
//{
//     cin >> n;
//     dp[1][0] = 1;
//     dp[2][1] = 1;
//     dp[2][2] = 1;
//     dp[0][0] = 1;
//     dp[1][1] = 1;
//     dp[1][2] = 1;
//     dp[2][0] = 2;
//     for (int i = 3; i <= n; ++i) {
//         dp[i][0] = (dp[i - 2][0] % mod + dp[i - 1][1] % mod + dp[i - 1][2] % mod + dp[i - 1][0]) % mod;
//         dp[i][1] = (dp[i - 2][0] % mod + dp[i - 1][1] % mod) % mod;
//         dp[i][2] = (dp[i - 2][0] % mod + dp[i - 1][2] % mod) % mod;
//     }
//     cout << dp[n][0] << endl;
//     return 0;
//}



// 平方差
// 暴力肯定不行
// 找规律
// 过了100%
// （1）3及3以上的所有奇数都可以表示为两个平方数的差。
// （2）8及8以上所有4k形式的偶数都可以表示为两个不同平方数的差。
// （3）除(1)和(2)以外的其他正整数都不可能表示成两平方数的差。
// long long cnt;
// long long l, r;
// int main()
//{
//    cin >> l >> r;
//    // 先判断奇数有多少个
//    if (l % 2 == 1 && r % 2 == 1) {
//        cnt += ((r - l) / 2 + 1);
//    } else if (l % 2 == 0 && r % 2 == 0) {
//        cnt += (r - l) / 2;
//    } else {
//        cnt += (r - l + 1) / 2;
//    }
//    // 在判断4的倍数有多少个
//    if (l % 4 == 0 && r % 4 == 0) {
//        cnt += ((r - l) / 4 + 1);
//    } else {
//        l = l + 4 - (l + 4) % 4;
//        r = r - r % 4;
//        cnt += ((r - l) / 4 + 1);
//    }
//    cout << cnt << endl;
//    return 0;
//}



// 更小的数
// 过了100%
// 枚举的话会超时
// 思想是小结果影响大结果, 就是说当小的范围判定之后，只要大的范围是相等的，也是符合要求的
// 方法是中心扩散
// 直接暴力试试看
// std::string num;
// int cnt;
// bool judge(int x, int y)
//{
//    while (x < y && num[x] <= num[y]) {
//        if (num[x] < num[y]) {
//            return false;
//        }
//        ++x;
//        --y;
//    }
//    if (x >= y) {
//        return false;
//    } else if (num[x] > num[y]) {
//        return true;
//    }
//}

// int main()
//{
//     std::ios::sync_with_stdio(false);
//     cin.tie(0), cout.tie(0);
//     cin >> num;
//     for (int i = 0; i < num.size() - 1; ++i) {
//         for (int j = i + 1; j < num.size(); ++j) {
//             if (judge(i, j)) {
//                 ++cnt;
//             }
//         }
//     }
//     cout << cnt << endl;
//     return 0;
// }



// 颜色平衡树
// 感觉是从根部向上遍历
// int n;
// int c[200005]; // 存储每个节点的color
// int f[200005]; // 存储每个节点的father
// std::vector<int> dp[200005]; // 存储每个节点构成的树的节点颜色情况
// int cnt;
// int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> c[i] >> f[i];
//        dp[i].push_back(c[i]);
//    }
//    for (int i = n; i >= 1; --i) {
//        for (const auto e : dp[i])
//            dp[f[i]].push_back(e);
//    }
//    for (int i = 1; i <= n; ++i) {
//        if (dp[i].size() == 1) {
//            cnt++;
//        } else {

//        }
//    }
//    cout << cnt << endl;


//    return 0;
//}




// 单调队列
// 快速求出每一段区间内的最值
// std::deque<int> q;
// int arr[100005];
// int n, m;
// int main()
//{
//    cin >> n >> m;
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//    for (int i = 0; i < n; ++i) {
//        //对于超出范围的元素，需要将其删除
//        while (!q.empty() && i - m + 1 > q.front()) {
//            q.pop_front();
//        }
//        //新来的元素大于等于之前的元素，需要将之前的删除
//        while (!q.empty() && arr[q.back()] <= arr[i]) {
//            q.pop_back();
//        }
//        //添加新来的元素
//        q.push_back(i);
//        if (i >= m - 1) {
//            cout << arr[q.front()] << " ";
//        }
//    }
//    cout << endl;
//    return 0;
//}




// 三国游戏
// 过了100%
// long long x, y, z;
// int n;
// struct Thing {
//    int a;
//    int b;
//    int c;
//};
// int cnt;
// Thing thing[100005];
// bool compare1(const Thing& t1, const Thing& t2)
//{
//    return t1.a - t1.b - t1.c > t2.a - t2.b - t2.c;
//}
// bool compare2(const Thing& t1, const Thing& t2)
//{
//    return t1.b - t1.a - t1.c > t2.b - t2.a - t2.c;
//}
// bool compare3(const Thing& t1, const Thing& t2)
//{
//    return t1.c - t1.a - t1.b > t2.c - t2.a - t2.b;
//}

// int main()
//{
//     cin >> n;
//     for (int i = 0; i < n; ++i) {
//         cin >> thing[i].a;
//     }
//     for (int i = 0; i < n; ++i) {
//         cin >> thing[i].b;
//     }
//     for (int i = 0; i < n; ++i) {
//         cin >> thing[i].c;
//     }
//     // 分三种情况讨论
//     // 分别是魏国win,蜀国win,吴国win
//     std::sort(thing, thing + n, compare1);
//     x = y = z = 0;
//     int i;
//     for (i = 0; i < n; ++i) {
//         x += thing[i].a;
//         y += thing[i].b;
//         z += thing[i].c;
//         if (x <= y + z) {
//             break;
//         }
//     }
//     cnt = std::max(cnt, i);

//    std::sort(thing, thing + n, compare2);
//    x = y = z = 0;
//    for (i = 0; i < n; ++i) {
//        x += thing[i].a;
//        y += thing[i].b;
//        z += thing[i].c;
//        if (y <= x + z) {
//            break;
//        }
//    }
//    cnt = std::max(cnt, i);

//    std::sort(thing, thing + n, compare3);
//    x = y = z = 0;
//    for (i = 0; i < n; ++i) {
//        x += thing[i].a;
//        y += thing[i].b;
//        z += thing[i].c;
//        if (z <= x + y) {
//            break;
//        }
//    }
//    cnt = std::max(cnt, i);
//    if (cnt) {
//        cout << cnt << endl;
//    } else {
//        cout << -1 << endl;
//    }
//    return 0;
//}




// 填充
// 过了100%
// std::string str;
// int cnt;
// int main()
//{
//    cin >> str;
//    for (int i = 0; i < str.length() - 1; ++i) {
//        if (str[i] == str[i + 1]) {
//            ++i;
//            ++cnt;
//        } else if (str[i] == '?' || str[i + 1] == '?') {
//            ++i;
//            ++cnt;
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}





// 翻转
// 过了100%
// std::string str1, str2;
// int D;
// int main()
//{
//    cin >> D;
//    while (D--) {
//        cin >> str1 >> str2;
//        int res = 0;
//        // 直接顺序遍历?
//        int i;
//        for (i = 0; i < str2.length(); ++i) {
//            if (str2[i] != str1[i]) {
//                if (i == 0 || i == str2.length() - 1) {
//                    cout << -1 << endl;
//                    break;
//                } else if (str2[i - 1] != str2[i] && str2[i + 1] != str2[i]) {
//                    ++res;
//                } else {
//                    cout << -1 << endl;
//                    break;
//                }
//            }
//        }
//        if (i == str2.length()) {
//            cout << res << endl;
//        }
//    }
//    return 0;
//}




// 子矩阵
// 使用单调队列
// int mod = 998244353;
// int n, m, a, b;
// long long land[1005][1005];
// long long res;
// std::deque<int> d;
// int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> n >> m >> a >> b;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j < m; ++j) {
//            cin >> land[i][j];
//        }
//    }
//    //二维单调队列,先用一个数组将每一行的单调队列存起来，然后对每一列使用单调队列
//    return 0;
//}




// 快速幂,求x的n次幂
// long long x;
// int n;
// long long my_pow(int x, int n)
//{
//    if (n > 1) {
//        long long tmp = my_pow(x, n / 2);
//        if (n % 2 == 1) {
//            return tmp * tmp * x;
//        } else {
//            return tmp * tmp;
//        }
//    } else {
//        return x;
//    }
//}

// int main()
//{
//     cin >> x >> n;
//     long long res = my_pow(x, n);
//     cout << res <<endl;
//     return 0;
// }




// floodfill算法
// 本质是在找性质相同的一个连通块
// dfs
// int main()
//{

//    return 0;
//}




// 拉马车
// 模拟
// 通过100%
// std::string str1, str2;
// std::vector<char> v1, v2, v3;
// bool judge(std::vector<char>& v, std::vector<char>& v_add)
//{
//    for (int i = v.size() - 2; i >= 0; --i) {
//        if (v[i] == v[v.size() - 1]) {
//            for (int k = v.size() - 1; k >= i; --k) {
//                v_add.push_back(v[k]);
//            }
//            v.erase(v.begin() + i, v.end());
//            return true;
//        }
//    }
//    return false;
//}
// int main()
//{
//    cin >> str1 >> str2;
//    for (int i = 0; i < str1.length(); ++i) {
//        v1.push_back(str1[i]);
//    }
//    for (int i = 0; i < str1.length(); ++i) {
//        v2.push_back(str2[i]);
//    }
//    bool f2 = false; // 记录b有没有赢牌
//    while (v1.size() > 0 && v2.size() > 0) {
//        // A出牌
//        if (!f2) {
//            char temp = v1[0];
//            v1.erase(v1.begin());
//            v3.push_back(temp);
//            if (judge(v3, v1)) {
//                continue;
//            }
//            if (v1.size() == 0) {
//                break;
//            }
//        }
//        //        cout << "111:  ";
//        //        for (const char& e : v1) {
//        //            cout << e;
//        //        }
//        //        cout << endl;
//        // B出牌
//        f2 = false;
//        char temp = v2[0];
//        v2.erase(v2.begin());
//        v3.push_back(temp);
//        if (f2 = judge(v3, v2)) {
//            f2 = true;
//            continue;
//        }
//        if (v2.size() == 0) {
//            break;
//        }
//        //        cout << "222:  ";
//        //        for (const char& e : v2) {
//        //            cout << e;
//        //        }
//        //        cout << endl;
//    }
//    if (v1.size()) {
//        for (const char& e : v1) {
//            cout << e;
//        }
//    } else {
//        for (const char& e : v2) {
//            cout << e;
//        }
//    }
//    cout << endl;

//    return 0;
//}





// 取模
// 直接暴力感觉会超时
// 这题还没有写完
// 方法是中国剩余定理
// int n, m;
// int main()
//{
//    int T;
//    cin >> T;
//    while (T--) {
//        bool f = false;
//        cin >> n >> m;
//        for (int i = 1; i <= m; ++i) {
//            int mod = n % i;
//            if ((n - mod) / i <= m) {
//                f = true;
//                break;
//            }
//        }
//        if (f) {
//            cout << "Yes" << endl;
//        } else {
//            cout << "No" << endl;
//        }
//    }
//    return 0;
//}



// 出差
// 过了100%
// int n, m; // 城市数量，路线数量
// int times[1005]; // 每个城市需要隔离的时间
// int route[1005][1005]; // 为0表示路线不通，>0表示通过的时间
// int sum_time[1005]; // 记录到达每个城市需要花费的路线时间和隔离时间
// int visit[1005];
// int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> n >> m;
//    int temp = n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> times[i];
//    }
//    for (int i = 1; i <= m; ++i) {
//        int u, v, c;
//        cin >> u >> v >> c;
//        route[u][v] = route[v][u] = c;
//    }
//    // 使用最短路径的算法
//    visit[1] = 1;
//    memset(sum_time, 127, sizeof(sum_time));
//    sum_time[1] = 0;
//    int u = 1;
//    while (--temp) {
//        int min_now = 10e9;
//        int min_now_u = 0;
//        for (int i = 2; i <= n; ++i) {
//            // 没有是已经最优并且路径可通
//            if (!visit[i] && route[u][i] > 0) {
//                if (i != n) {
//                    sum_time[i] = std::min(sum_time[i], sum_time[u] + times[i] + route[u][i]);
//                } else {
//                    sum_time[i] = std::min(sum_time[i], sum_time[u] + route[u][i]);
//                }
//            }
//        }
//        for (int i = 2; i <= n;++i){
//            if(sum_time[i] < min_now && !visit[i]){
//                min_now = sum_time[i];
//                min_now_u = i;
//            }
//        }
//        visit[min_now_u] = 1; // 标记为已经是最优
//        u = min_now_u; // 标记为下次的起点
//    }
//    if (n == 0) {
//        cout << 0 << endl;
//    } else {
//        cout << sum_time[n] << endl;
//    }
//    return 0;
//}


// 单源最短路径，迪杰斯拉算法
// 发现全部超时
// int cannot = 2139062143;
// int n, m, s; // n个点,m条边,s为出发点
// int visit[10005]; // 某个点是否已经是最优
// int d[10005]; // 到达某个点的距离
// struct Edge {
//    int v;
//    int d;
//};
// std::list<Edge> edges[10005]; // 记录以每个点为起点的所有边
// int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> n >> m >> s;
//    memset(d, 127, sizeof(d));
//    for (int i = 0; i < m; ++i) {
//        Edge e;
//        int u;
//        cin >> u >> e.v >> e.d;
//        edges[u].push_back(e);
//    }
//    memset(d, 127, sizeof(d));
//    //    cout << "d[3] = " << d[3] << endl;
//    d[s] = 0;
//    visit[s] = 1;
//    int temp = n;
//    while (--temp) {
//        int now_d = 10e9;
//        int now_d_u;
//        // 遍历所有从s出发的边
//        for (Edge& e : edges[s]) {
//            if (visit[e.v] == 0) {
//                d[e.v] = std::min(d[e.v], d[s] + e.d);
//            }
//        }
//        for (int i = 1; i <= n; ++i) {
//            if (!visit[i] && d[i] < now_d) {
//                now_d = d[i];
//                now_d_u = i;
//            }
//        }
//        s = now_d_u; // 更新出发点
//        visit[now_d_u] = 1; // 表示已经是最优
//    }
//    for (int i = 1; i <= n; ++i) {
//        if (d[i] == cannot) {
//            cout << (long long)(std::pow(2, 31) - 1) << " ";
//        } else {
//            cout << d[i] << " ";
//        }
//    }
//    cout << endl;

//    return 0;
//}



// 别人的迪杰斯拉算法,学习用
// 主要就是模拟链表的方式，所有链表的头存放在head[100000]数组中
// int head[100000], cnt;
// long long ans[1000000];
// bool vis[1000000];
// int m, n, s;
// struct edge {
//    int to; // 表示边的终点
//    int nextt; // 上一条边的索引
//    int wei; // 权重
//} edge[1000000];
// void addedge(int x, int y, int z)
//{
//    edge[++cnt].to = y;
//    edge[cnt].wei = z;
//    edge[cnt].nextt = head[x];    //记录上一条边的编号
//    head[x] = cnt;     //head[x] = cnt 表示以x为起点的边的最后一条边的编号
//}
// int main()
//{
//    cin >> m >> n >> s; // 输入点的个数，边的个数，出发点的编号
//    for (int i = 1; i <= m; i++) {
//        ans[i] = 2147483647; // ans存放到到每一个点的距离，一开始初始化为无穷大
//    }
//    ans[s] = 0;
//    for (int i = 1; i <= n; i++) {
//        int a, b, c;      //a到b长为c的路
//        cin >> a >> b >> c;
//        addedge(a, b, c);
//     }
//     int pos=s;     //记录每次的出发点
//     while(vis[pos]==0)
//     {
//         long long minn=2147483647;
//         vis[pos]=1;    //表示当前的pos点已经是最优的状态了
//         for(int i=head[pos];i!=0;i=edge[i].nextt)
//         {
//             //遍历所有起点为pos的边，直到0表示结束
//             if(!vis[edge[i].to]&&ans[edge[i].to]>ans[pos]+edge[i].wei)
//             {
//                 ans[edge[i].to]=ans[pos]+edge[i].wei;
//             }
//         }
//         for(int i=1;i<=m;i++)
//         {
//             //找出这一轮的遍历中最近的点
//             if(ans[i]<minn&&vis[i]==0)
//             {
//                 minn=ans[i];
//                 pos=i;
//             }
//         }
//     }
//     for(int i=1;i<=m;i++)
//     {
//         cout<<ans[i]<<' ';
//     }
// }


// 迪杰斯拉考前再复习
// 出差 ,邻接链表的形式存放数据
//int N, M; // 城市数量和路线数量
//bool visit[1005]; // 标记最优城市
//int res[1005]; // 记录到达每个城市所需路程时间和隔离时间
//struct Edge {
//    int v;
//    int c;
//};

//std::list<Edge> lists[10005]; // lists[i]存放的是以i为起点的路线
//int times[1005]; // 存放隔离时间
//int main()
//{
//    memset(res, 127, sizeof(res));
//    cin >> N >> M;
//    for (int i = 1; i <= N; ++i) {
//        cin >> times[i];
//    }
//    for (int i = 1; i <= M; ++i) {
//        int u;
//        Edge edge;
//        cin >> u >> edge.v >> edge.c;
//        Edge edge2;
//        edge2.v = u;
//        edge2.c = edge.c;
//        lists[u].push_back(edge);
//        lists[edge.v].push_back(edge2);
//    }
//    int temp = N;
//    int nowS = 1; // 每次的起点
//    res[1] = 0;
//    while (temp--) {
//        int now_min = 99999999;
//        visit[nowS] = true;
//        for (const Edge& e : lists[nowS]) {
//            if (!visit[e.v]) {
//                if (e.v == N) {
//                    res[e.v] = std::min(res[e.v], res[nowS] + e.c);
//                } else {
//                    res[e.v] = std::min(res[e.v], res[nowS] + e.c + times[e.v]);
//                }
//            }
//        }
//        // 找出当前城市中可以走的最近城市
//        for (int i = 1; i <= N; ++i) {
//            if (!visit[i] && res[i] < now_min) {
//                now_min = res[i];
//                nowS = i;
//            }
//        }
//    }
//    cout << res[N] << endl;

//    return 0;
//}



// 灌水
// 深搜
// 通过,答案为541
// std::string land[32];
// int dx[4] = { 1, 0, -1, 0 };
// int dy[4] = { 0, 1, 0, -1 };

// void dfs(int x, int y)
//{

//    for (int i = 0; i < 4; ++i) {
//        int xx = x + dx[i];
//        int yy = y + dy[i];
//        if (xx >= 0 && xx < 30 && yy >= 0 && yy < 40 && land[xx][yy] == '0') {
//            land[xx][yy] = '2';
//            dfs(xx, yy);
//        }
//    }
//}
// int main()
//{
//    for (int i = 0; i < 30; ++i) {
//        cin >> land[i];
//    }
//    land[0][0] = '2';
//    dfs(0, 0);
//    int cnt = 0;
//    for (int i = 0; i < 30; ++i) {
//        for (int j = 0; j < 40; ++j) {
//            if (land[i][j] == '2') {
//                ++cnt;
//            }
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}



// 包子凑数
// 通过率100
// int n;
// int arr[105];
// int dp[30005]; // dp[i]=1表示能够凑出i个包子，否则表示凑不出i个包子
// int cnt;
// // 求最大公因数
// int gcd(int x, int y)
//{
//    return y == 0 ? x : gcd(y, x % y);
//}
// // 求所有数字的最大公因数
// int all_gcd()
//{
//    int res = arr[1];
//    for (int i = 2; i <= n; ++i) {
//        res = gcd(res, arr[i]);
//    }
//    return res;
//}

// int main()
//{
//     cin >> n;
//     for (int i = 1; i <= n; ++i) {
//         cin >> arr[i];
//         dp[arr[i]] = 1;
//     }
//     if (all_gcd() != 1) {
//         cout << "INF" << endl;
//         return 0;
//     }
//     dp[0] = 1;
//     for (int i = 1; i <= 30000; ++i) {
//         for (int j = 1; j <= i / 2; ++j) {
//             if (dp[j] != 0 && dp[i - j] != 0) {
//                 dp[i] = 1;
//             }
//         }
//     }
//     for (int i = 1; i <= 30000; ++i) {
//         if (dp[i] == 0) {
//             ++cnt;

//        }
//    }
//    cout << cnt << endl;

//    return 0;
//}




// 最大子段和
// 一般的想法就是当前的维护的字段<=0的时候将其丢弃，但是情况只存在于至少有一个正数
// int n;
// int arr[200005];
// int main()
//{
//    cin >> n;
//    bool f = false;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//        if (arr[i] > 0) {
//            f = true;
//        }
//    }
//    if (!f) {
//        int max_x = -10e9;
//        for (int i = 1; i <= n; ++i) {
//            max_x = std::max(max_x, arr[i]);
//        }
//        cout << max_x << endl;
//        return 0;
//    }
//    int s = 0; // 记录当前维护的字段的和
//    int ss = 0; // 记录最终输出的结果
//    for (int i = 1; i <= n; ++i) {
//        s += arr[i];
//        ss = std::max(ss, s - arr[i]);
//        if (s <= 0) {
//            s = 0;
//        } else {
//        }
//    }
//    ss = std::max(ss, s);
//    cout << ss << endl;
//    return 0;
//}


// 线段树
// 与二叉树不同的是
// 线段树的每个节点表示一个区间
// 根节点是最大的那个区间
// 叶子节点是区间为1的节点
// int main()
//{


//    return 0;
//}



// 油漆面积
// 感觉暴力可以拿部分分数
// 方法是线段树
// int n;
// struct Rectangle {
//    int x1, y1, x2, y2;
//};
// Rectangle r[10005];
// long long squre;    //面积
// int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> r[i].x1 >> r[i].y1 >> r[i].x2 >> r[i].y2;
//        for(int j)
//    }
//    for (int i = 1; i <= n;++i){

//    }
//    return 0;
//}



// 低价购买
// 思路是最长下降子序列
// 只过了30%,我的思路是把所有的list存起来统一去重
// int n;
// int arr[5005];
// int dp[5005]; // dp[i]表示以i为结尾的种类数
// int qz[5005];
// std::vector<std::list<int>> list_vector;
// int isDelete[10000];
// bool isSame(const std::list<int>& list1,const std::list<int>& list2)
//{
//    // 首先比较两个列表的大小，如果不同，直接返回false
//    if (list1.size() != list2.size()) {
//        return false;
//    }
//    return std::equal(list1.begin(), list1.end(), list2.begin());
//}

// int main()
//{
//     cin >> n;
//     for (int i = 1; i <= n; ++i) {
//         cin >> arr[i];
//         dp[i] = 1;
//     }
//     int max_l = 0; // 记录当前的最大长度
//     for (int i = 2; i <= n; ++i) {
//         for (int j = 1; j < i; ++j) {
//             if (arr[j] > arr[i] && dp[i] <= dp[j] + 1) {
//                 dp[i] = dp[j] + 1;
//                 qz[i] = j;
//                 int k = i;
//                 std::list<int> temp_list;
//                 temp_list.push_back(arr[i]);
//                 if (dp[i] == max_l) {
//                     while (qz[k]) { // 构造一个列表
//                         temp_list.push_back(arr[qz[k]]);
//                         k = qz[k];
//                     }
//                     list_vector.push_back(temp_list); // 将列表加入到set中
//                 } else if (dp[i] > max_l) {
//                     list_vector.clear();
//                     max_l = dp[i];
//                     while (qz[k]) { // 构造一个列表
//                         temp_list.push_back(arr[qz[k]]);
//                         k = qz[k];
//                     }
//                     list_vector.push_back(temp_list); // 将列表加入到set中
//                 }
//             }
//         }
//     }
//     int len = 0;
//     for (int i = 1; i <= n; ++i) {
//         len = std::max(len, dp[i]);
//     }

//    for (int i = 0; i < list_vector.size(); ++i) {
//        for (int j = i + 1; j < list_vector.size(); ++j) {
//            if (!isDelete[i] && !isDelete[j] && isSame(list_vector[i], list_vector[j])) {
//                isDelete[j] = 1; // 删除一个列表
//            }
//        }
//    }
//    int cnt = 0;
//    for (int i = 0; i < 10000; ++i) {
//        if (isDelete[i]) {
//            ++cnt;
//        }
//    }
//    cout << len << " " << list_vector.size() - cnt << endl;

//    return 0;
//}




// 低价购买(重置版)
// 这里的思路是将t数组(存放种数的数组，也当作一个dp来做)
// int n;
// int arr[5005];
// int dp[5005]; // dp[i]表示以i为结尾的最大长度
// int t[5005]; // 记录以i为结尾的种类数

// int main()
//{
//     cin >> n;
//     for (int i = 1; i <= n; ++i) {
//         cin >> arr[i];
//     }
//     int max_l = 0; // 记录当前的最大长度
//     for (int i = 1; i <= n; ++i) {
//         for (int j = 1; j < i; ++j) {
//             if (arr[j] > arr[i] && dp[i] <= dp[j] + 1) {
//                 dp[i] = dp[j] + 1;
//             }
//         }
//         if (dp[i] == 0) {
//             dp[i]++;
//         }
//         if (dp[i] > max_l) {
//             max_l = dp[i];
//         }
//         for (int j = 1; j < i; ++j) {
//             if (dp[i] == dp[j] && arr[i] == arr[j]) {
//                 t[j] = 0;

//            } else if (dp[i] == dp[j] + 1 && arr[i] < arr[j]) {
//                t[i] += t[j];
//            }
//        }
//        if (t[i] == 0) {
//            t[i] = 1;
//        }
//    }

//    int sum = 0;
//    for (int i = 1; i <= n; i++) {
//        if (dp[i] == max_l) {
//            sum += t[i];
//        }
//    }
//    cout << max_l << " " << sum << endl;


//    return 0;
//}


// 低价购买低等版(最长下降子序列)
// 经验:线性动态规划的时候要考虑是否是以i为结尾还是到i为止的
//int N;
//int arr[5005];
//int dp[5005]; // dp[i]表示以i为结尾的最长下降子序列
//int t[5005]; // 表示种类数
//int main()
//{
//    cin >> N;
//    for (int i = 1; i <= N; ++i) {
//        cin >> arr[i];
//        dp[i] = 1;
//    }
//    int maxl = 0;
//    for (int i = 2; i <= N; ++i) {
//        for (int j = 1; j < i; ++j) {
//            if (arr[i] < arr[j]) {
//                dp[i] = std::max(dp[j] + 1, dp[i]);
//                maxl = std::max(maxl, dp[i]);
//            }
//        }
//    }
//    cout << maxl << endl;

//    return 0;
//}



// 回文数
// 模拟
// 过了 75%
// int n;
// std::string m; // n进制，数m
// char ch[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f' };
// void change(char& c)
//{
//    if (c == 'a') {
//        c = '9' + 1;
//    }
//    if (c == 'b') {
//        c = '9' + 2;
//    }
//    if (c == 'c') {
//        c = '9' + 3;
//    }
//    if (c == 'd') {
//        c = '9' + 4;
//    }
//    if (c == 'e') {
//        c = '9' + 5;
//    }
//    if (c == 'f') {
//        c = '9' + 6;
//    }
//}

// string getRes(string str)
//{
//     string str1;
//     for (int i = str.length() - 1; i >= 0; --i) {
//         str1.push_back(str[i]);
//     }
//     string res;
//     res.push_back('0');
//     // 得到和
//     for (int i = 0; i < str.length(); ++i) {
//         change(str[i]);
//         change(str1[i]);
//         int c = str[i] - '0' + str1[i] - '0' + res[i] - '0';
//         //        cout << str[i] << "  " << str1[i] << "  " << res[i] << endl;
//         //        cout << "c = " << c << endl;
//         if (c >= n) {
//             c = c - n;
//             res[i] = ch[c];
//             res.push_back('1');
//         } else {
//             res[i] = ch[c];
//             res.push_back('0');
//         }
//     }
//     string res1;
//     for (int i = res.length() - 1; i >= 0; --i) {
//         if (res.length() - 1 == i && res[i] == '0') {
//             continue;
//         }
//         res1.push_back(res[i]);
//     }
//     return res1;
// }

// bool judge(const string& str)
//{

//    int l = 0;
//    int r = str.length() - 1;
//    while (l < r) {
//        if (str[l] != str[r]) {
//            break; // 不是回文
//        }
//        ++l;
//        --r;
//    }
//    return l >= r;
//}

// void test01()
//{
//     n = 16;
//     //    string str = ""
// }

// int main()
//{
//     cin >> n >> m;
//     int i;
//     if (judge(m)) {
//         cout << 0 << endl;
//         return 0;
//     }
//     for (i = 0; i < 30; ++i) {
//         string res = getRes(m); // 得到结果
//         m = res;
//         if (judge(res)) {
//             break; // 找到
//         }
//     }
//     if (i >= 30) {
//         cout << "Impossible!" << endl;
//     } else {
//         cout << "STEP=" << i + 1 << endl;
//     }

//    return 0;
//}



// 方格取数
// 感觉就是暴力破解,模拟走两次，每次走都按最多的选
// 贪心的思想,过了20%,但是具体的思想应该不是贪心
// int dx[2] = { 0, 1 };
// int dy[2] = { 1, 0 };
// int n;
// int arr[10][10]; // 地图
// std::vector<int> max_v;    //存储最大路径的vector
// void dfs(int x, int y, std::vector<int>& v)
//{
//    if (v.size() > 0) {
//        cout << "当前首个是:" << v[0] << "   " << v[1] << endl;
//    }
//    if (x == n && y == n) {
//        int max_now = 0;
//        for (int e : max_v) {
//            max_now += e;
//        }
//        int sum = 0;
//        for (int e : v) {
//            sum += e;
//        }
//        if (sum > max_now) {
//            max_now = sum;
//            max_v = v;
//        }
//    }
//    for (int i = 0; i < 2; ++i) {
//        int xx = x + dx[i];
//        int yy = y + dy[i];
//        if (xx >= 1 && xx <= n && yy >= 1 && yy <= n) {
//            if (arr[xx][yy] != 0) {
////                cout << "加入" << arr[xx][yy] << endl;
//                v.push_back(xx);
//                v.push_back(yy);
//                v.push_back(arr[xx][yy]);
//            }
//            dfs(xx, yy, v);
//            if (arr[xx][yy] != 0) {
//                v.pop_back();
//                v.pop_back();
//                v.pop_back();
//            }
//        }
//    }
//}


// int main()
//{
//     int ssum = 0;
//     cin >> n;
//     while (1) {
//         int x, y, c;
//         cin >> x >> y >> c;
//         if (x == 0 && y == 0 && c == 0) {
//             break;
//         }
//         arr[x][y] = c;
//     }
//     // 在深搜的过程中，如果取到了最优解，需要将最优解所带的数字删除
//     // 第一次深搜
//     std::vector<int> v;
//     if (arr[0][0] != 0) {
//         v.push_back(0);
//         v.push_back(0);
//         v.push_back(arr[0][0]);
//     }
//     dfs(1, 1, v);
//     int yx, yy;
//     for (int i = 0; i < max_v.size(); ++i) {
//         if (i % 3 == 0) {
//             yx = max_v[i];
//         }
//         if (i % 3 == 1) {
//             yy = max_v[i];
//         }
//         if (i % 3 == 2) {
//             ssum += max_v[i];
//             arr[yx][yy] = 0;
//         }
//     }
//     // 第二次深搜
//     max_v.clear();
//     dfs(1, 1, v);
//     for (int i = 0; i < max_v.size(); ++i) {
//         if (i % 3 == 0) {
//             yx = max_v[i];
//         }
//         if (i % 3 == 1) {
//             yy = max_v[i];
//         }
//         if (i % 3 == 2) {
//             ssum += max_v[i];
//             arr[yx][yy] = 0;
//         }
//     }
//     cout << ssum << endl;

//    return 0;
//}




// 九宫幻方
// 找到规律
// 感觉直接暴力就行了
// 过了75%
// 题解基本是全排列的思路
// int arr[4][4];
// int dj[10] = { 0, 9, 8, 7, 6, 5, 4, 3, 2, 1 }; // 存储对角
// int main()
//{
//    memset(arr, 0, sizeof(arr));
//    for (int i = 1; i <= 3; ++i) {
//        for (int j = 1; j <= 3; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//    arr[2][2] = 5;
//    // 更新对角
//    for (int i = 1; i <= 3; ++i) {
//        for (int j = 1; j <= 3; ++j) {
//            if (arr[i][j]) {
//                arr[4 - i][4 - j] = dj[arr[i][j]];
//            }
//        }
//    }

//    // 更新每一行每一列每一斜行
//    int xx = 1;
//    while (xx) {
//        for (int i = 1; i <= 3; ++i) {
//            int count = 0, sum = 0;
//            int tj;
//            for (int j = 1; j <= 3; ++j) {
//                if (arr[i][j] == 0) {
//                    tj = j;
//                } else {
//                    ++count;
//                }
//                sum += arr[i][j];
//            }
//            if (count == 2) {
//                arr[i][tj] = 15 - sum;
//                xx = 2;
//            }
//        }


//        for (int i = 1; i <= 3; ++i) {
//            int count = 0, sum = 0;
//            int tj;
//            for (int j = 1; j <= 3; ++j) {
//                if (arr[j][i] == 0) {
//                    tj = j;
//                } else {
//                    ++count;
//                }
//                sum += arr[j][i];
//            }
//            if (count == 2) {
//                arr[tj][i] = 15 - sum;
//                xx = 2;
//            }
//        }

//        int count = 0, sum = 0, ti;
//        for (int i = 1; i <= 3; ++i) {
//            if (arr[i][i] == 0) {
//                ti = i;
//            } else {
//                ++count;
//            }
//            sum += arr[i][i];
//        }
//        if (count == 2) {
//            arr[ti][ti] = 15 - sum;
//            xx = 2;
//        }

//        count = 0, sum = 0;
//        for (int i = 1; i <= 3; ++i) {
//            if (arr[i][4 - i] == 0) {
//                ti = i;
//            } else {
//                ++count;
//            }
//            sum += arr[i][4 - i];
//        }
//        if (count == 2) {
//            arr[ti][4 - ti] = 15 - sum;
//            xx = 2;
//        }
//        --xx;
//    }
//    int count = 0;
//    for (int i = 1; i <= 3; ++i) {
//        for (int j = 1; j <= 3; ++j) {
//            if (arr[i][j]) {
//                ++count;
//            }
//        }
//    }
//    if (count < 9) {
//        cout << "Too Many" << endl;
//    } else {
//        for (int i = 1; i <= 3; ++i) {
//            for (int j = 1; j <= 3; ++j) {
//                cout << arr[i][j] << " ";
//            }
//            cout << endl;
//        }
//    }
//    return 0;
//}






// 导弹拦截
// 感觉是暴力
// 暴力不行
//int x1, y_1, x2, y2;
//int n;
//int x[100005];
//int y[100005];
//struct Dis {
//    int d1 = 0, d2 = 0;
//};
//Dis dis[100005];
//bool compare(const Dis& a, const Dis& b)
//{
//    return a.d1 < b.d1;
//}

//int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> x1 >> y_1 >> x2 >> y2;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> x[i] >> y[i];
//        dis[i].d1 = std::pow(x[i] - x1, 2) + std::pow(y[i] - y_1, 2);
//        dis[i].d2 = std::pow(x[i] - x2, 2) + std::pow(y[i] - y2, 2);
//    }
//    std::sort(dis + 1, dis + n + 1, compare);
//    int xt1 = dis[n].d1, xt2 = 0, ans = dis[n].d1;
//    // 逐渐判断是不是能更小
//    // 逐渐缩小系统1的范围，调大系统2的范围，看看是不是有种方法能达到最优，本质还是枚举
//    for (int i = n; i > 0; --i) {
//        xt1 = dis[i - 1].d1;
//        xt2 = std::max(dis[i].d2, xt2);
//        ans = std::min(ans, xt1 + xt2);
//    }
//    cout << ans << endl;
//    return 0;
//}



// 穿越雷区
// 最短路径，选择广搜
// 通过100%,题目给的意思不是很清楚，实际上交替通过都是可以的
//int n;
//char strs[105][105];
//int xa, ya, xb, yb;
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//int visit[105][105];
//struct Point {
//    int x;
//    int y;
//    Point(int zx, int zy)
//    {
//        x = zx;
//        y = zy;
//    }
//};
//std::queue<Point> que;
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            cin >> strs[i][j];
//        }
//    }


//    // 找a点和b点的位置
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if (strs[i][j] == 'A') {
//                xa = i;
//                ya = j;
//            }
//            if (strs[i][j] == 'B') {
//                xb = i;
//                yb = j;
//            }
//        }
//    }
//    // 开始广搜
//    bool f = false;
//    que.push(Point(xa, ya));
//    visit[xa][ya] = 1;
//    while (!que.empty()) {
//        Point p = que.front();
//        que.pop();
//        for (int i = 0; i < 4; ++i) {
//            int xx = p.x + dx[i];
//            int yy = p.y + dy[i];
//            if (xx >= 0 && xx < n && yy >= 0 && yy < n && !visit[xx][yy]) {
//               if (strs[xx][yy] == 'B') {
//                    f = true; // 表示找到了
//                    visit[xx][yy] = visit[p.x][p.y] + 1;
//                    while (!que.empty()) {
//                        que.pop(); // 清空队列
//                    }
//                    break;
//                }else if(strs[p.x][p.y] != strs[xx][yy]){
//                    visit[xx][yy] = visit[p.x][p.y] + 1;
//                    que.push(Point(xx, yy));
//               }
//            }
//        }
//    }
//    if (f) {
//        cout << visit[xb][yb] - 1 << endl;
//    } else {
//        cout << -1 << endl;
//    }
//    return 0;
//}





// 广度优先搜索再学习




// 最长公共子串
// 要求动态规划，第一步就是求状态转移方程和basecase
// 这里要求的是两个字符串的公共子串，得到dp 是dp[i][j]
// dp[i][j] 表示第一个子串以第i个字符结尾，第二个子串以第j个字符结尾的最长公共子串
// 然后求状态转移方程
// dp[i][j] = dp[i-1][j -1] + 1
// 最后是base case,即dp[i][0] = dp[0][j] = 0
//int dp[1000][1000];
//std::string str1, str2;
//int main()
//{
//    int m, n;
//    cin >> str1 >> str2;
//    str1.insert(0, " ");
//    str2.insert(0, " ");
//    m = str1.length() - 1;
//    n = str2.length() - 1;
//    int maxl = 0;
//    for (int i = 1; i <= m; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            if (str1[i] == str2[j]) {
//                dp[i][j] = dp[i - 1][j - 1] + 1;
//                maxl = std::max(maxl, dp[i][j]);
//            }
//        }
//    }
//    cout << maxl << endl;
//    return 0;
//}



// 最长公共子序列
// dp[i][j] 表示第一个字符串以i为截止,第二个字符串以j为截止,得到的最长公共子序列
// 状态转移方程就是，如果str[i] == str[j] ,dp[i][j] = dp[i - 1][j - 1] + 1
// 如果str[i] != str[j] dp[i][j] = max(dp[i][j-1],dp[i-1][j])
//int dp[1005][1005];
//std::string str1, str2;
//int main()
//{
//    int m, n;
//    cin >> str1 >> str2;
//    str1.insert(0, " ");
//    str2.insert(0, " ");
//    m = str1.length() - 1;
//    n = str2.length() - 1;
//    for (int i = 1; i <= m; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            if (str1[i] == str1[j]) {
//                dp[i][j] = dp[i - 1][j - 1] + 1;
//            } else {
//                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
//            }
//        }
//    }
//    cout << dp[m][n] << endl;
//    return 0;
//}


// 密码脱落
// 本质上是最长公共子序列问题，
// 求出str1和str2的最长公共子序列，要增加的字符的数量就是这当前长度减去
// 求出的最长公共子序列的长度
// 过了100%
//int dp[1000][1000];
//string str1, str2;
//int main()
//{
//    cin >> str1;
//    int n = str1.length();
//    for (int i = n - 1; i >= 0; --i) {
//        str2.push_back(str1[i]);
//    }
//    str1.insert(0, " ");
//    str2.insert(0, " ");
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= n; ++j) {
//            if (str1[i] == str2[j]) {
//                dp[i][j] = dp[i - 1][j - 1] + 1;
//            } else {
//                dp[i][j] = std::max(dp[i - 1][j], dp[i][j - 1]);
//            }
//        }
//    }
//    cout << n - dp[n][n] << endl;


//    return 0;
//}




// 整数删除
// 使用log n的方法锁定最小值的下标 (优先队列 或者 线段树)
// 这里使用优先队列锁定最小值的下标
// 使用链表来维护所有的答案序列
// typedef long long LL;
// typedef std::pair<LL, int> PLT; // 这个pair第一位用来维护值，第二位用来维护下标
// int n, k;
// const int MAX_N = 5e5 + 5;
// LL arr[MAX_N];
// int pre[MAX_N], next_1[MAX_N];
// std::priority_queue<PLT> q; // 创建一个优先队列
// 
// int main()
// {
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    int n;
//    cin >> n >> k;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//        pre[i] = i - 1;
//        next_1[i] = i + 1;
//        q.push({ -arr[i], -i }); // 初始化优先队列
//    }
//    pre[1] = -1;
//    next_1[n] = -1;
//    while (k--) {
//        PLT now;
//        //
//        do {
//            now = q.top();
//            q.pop();
//            now.second = -now.second;
//            now.first = -now.first;
//        } while (arr[now.second] != now.first);
//        int Pre = pre[now.second];
//        int Next = next_1[now.second];
//        if (Pre != -1) {
//            arr[Pre] += now.first;
//            q.push({ -arr[Pre], -Pre });
//            next_1[Pre] = Next;
//        }
//        if (Next != -1) {
//            arr[Next] += now.first;
//            q.push({ -arr[Next], -Next });
//            pre[Next] = Pre;
//        }
//        arr[now.second] = -1;
//    }
//    for (int i = 1; i <= n; ++i) {
//        if (arr[i] != -1) {
//            cout << arr[i] << " ";
//        }
//    }
//    cout << endl;
//    return 0;
// }


// 上一题使用了优先队列
// 这里学习一下优先队列的api
// 优先队列是一种特殊的队列，其中每个元素都有一定的优先级，
// 元素被按优先级顺序处理，优先级最高的元素最先被移除。
// 在 std::priority_queue 中，默认情况下，元素是根据
// 它们的值进行排序的，值最大的元素被视为优先级最高。
// 优先队列通常用来做变化的序列最小值的查找
// std::pair<int, int> Pair;
//std::priority_queue<int> que_int;
//std::priority_queue<std::pair<int, int>> que_pair;
//创建一个优先队列，元素是int类型的，底层容器是vector(也是默认的),使用std::greater作为比较函数
//std::priority_queue<int,std::vector<int>,std::greater<int>> que_int_1;

//int main()
//{
//    srand(static_cast<unsigned int>(time(0)));
//    //如果是int的priority，就会按照int的值从大到小排序
//    cout << "que_int的测试" << endl;
//    for (int i = 0; i < 100; ++i) {
//        que_int.push(rand() % 100);
//    }
//    for (int i = 0; i < 100; ++i) {
//        cout << que_int.top() << " ";
//        que_int.pop();
//    }
//    cout << endl;
//    //如果是std::pair的priority,就会按照pair.first从大到小排序
//    cout << "que_pair的测试" << endl;
//    for (int i = 0; i < 100; ++i) {
//        que_pair.push({ rand() % 100, rand() % 100 });
//    }
//    for (int i = 0; i < 100; ++i) {
//        cout << que_pair.top().first << " " << que_pair.top().second << endl;
//        que_pair.pop();
//    }
//    cout << endl;

//    cout << "que_int_1的测试" << endl;
//        for (int i = 0; i < 100; ++i) {
//        que_int_1.push(rand() % 100);
//    }
//    for (int i = 0; i < 100; ++i) {
//        cout << que_int_1.top() << " ";
//        que_int_1.pop();
//    }
//    cout << endl;
//    return 0;
//}




// 景区导游
// 只过了30%
//int n, k; // n个景点，编号从1到n
//int arr[100005];
//int visit[100005];
//struct Dest {
//    int v;
//    int t;
//    Dest(int wv, int wt)
//        : v(wv)
//        , t(wt)
//    {
//        ;
//    }
//};
//std::list<Dest> lists[100005]; // 存放所有路线
// 求从u到v
//void dfs(int u, int v, int t, int& r)
//{
//    for (const Dest& e : lists[u]) {
//        if (e.v == v) {
//            // 找到终点
//            r = t + e.t;
//            //            cout << "return "<< v << " " << r  << endl;
//            return;
//        } else if (visit[e.v] == 0) {
//            visit[e.v] = 1;
//            dfs(e.v, v, t + e.t, r);
//            visit[e.v] = 0;
//        }
//    }
//}

//int main()
//{
//    cin >> n >> k; // n个景点,k个今天要浏览的景点
//    for (int i = 1; i <= n - 1; ++i) {
//        int u, v, t;
//        cin >> u >> v >> t;
//        lists[u].push_back(Dest(v, t)); // 初始化路线
//        lists[v].push_back(Dest(u, t)); // 初始化路线
//    }
//    for (int i = 1; i <= k; ++i) {
//        cin >> arr[i]; // 输入要浏览的景点的编号
//    }
//    // 遍历丢弃什么节点
//    for (int i = 1; i <= k; ++i) {
//        int sumt = 0;
//        // 遍历所有要走的节点
//        for (int j = 1; j <= k; ++j) {
//            if (j == i) {
//                continue;
//            }
//            if (j + 1 == i) {
//                if (j + 2 > k) {
//                    break;
//                }
//                // 直接走下下个景点
//                int u = arr[j];
//                int v = arr[j + 2];
//                visit[u] = 1;
//                int res = 0;
//                dfs(u, v, 0, res); // 深搜寻找路线
//                sumt += res;
//                visit[u] = 0;

//            } else {
//                int u = arr[j];
//                int v = arr[j + 1];
//                visit[u] = 1;
//                int res = 0;
//                dfs(u, v, 0, res);
//                sumt += res;
//                visit[u] = 0;
//            }
//        }
//        cout << sumt << " ";
//    }
//    cout << endl;
//    return 0;
//}




// 最大比例
// 只过了50%,有机会再看看
//int n;
//std::vector<int> arr;
//int gcd(int x, int y)
//{
//    if (x % y == 0) {
//        return y;
//    } else {
//        return gcd(y, x % y);
//    }
//}
//int main()
//{

//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        int t;
//        cin >> t;
//        arr.push_back(t);
//    }
//    int l, r;
//    double smin = 10e9;
//    std::sort(arr.begin(), arr.end());
//    int len = arr.size();
//    for (int i = 1; i < len; ++i) {
//        if (arr[i] == arr[i - 1]) {
//            arr.erase(arr.begin() + i, arr.begin() + i + 1); // 删除第i个
//            --i;
//            --len;
//        }
//    }

//    len = arr.size();
//    for (int i = 0; i < len - 1; ++i) {
//        if (double(arr[i + 1]) / arr[i] < smin) {
//            smin = double(arr[i + 1]) / arr[i];
//            l = i;
//            r = i + 1;
//        }
//    }
//    // 求arr[l] ,arr[r]的最大公因数
//    int res = gcd(arr[l], arr[r]);
//    cout << arr[r] / res << "/" << arr[l] / res << endl;
//    return 0;
//}



// 全球变暖
// 通过100%
//int n;
//std::string land[1005];
//int visit[1005][1005];
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//bool judge(int x, int y)
//{
//    if (land[x - 1][y] == '#' && land[x + 1][y] == '#' && land[x][y + 1] == '#' && land[x][y - 1] == '#') {
//        return true;
//    }
//    return false;
//}

//void dfs(int x, int y, bool& f)
//{
//    // 查看是否不会淹没
//    if (judge(x, y)) {
//        f = true;
//    }
//    for (int i = 0; i < 4; ++i) {
//        int xx = x + dx[i];
//        int yy = y + dy[i];
//        if (xx >= 0 && xx < n && yy >= 0 && yy < n && !visit[xx][yy] && land[xx][yy] == '#') {
//            visit[xx][yy] = 1;
//            dfs(xx, yy, f);
//        }
//    }
//}
//int cnt;
//int main()
//{
//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> land[i];
//    }
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < n; ++j) {
//            if (land[i][j] == '#' && !visit[i][j]) {
//                bool f = false;
//                ++cnt; // 岛屿数量+1
//                visit[i][j] == 1;
//                dfs(i, j, f);
//                if (f) {   //如果不会淹没就--
//                    --cnt;
//                }
//            }
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}



///dp路径问题

// 不同路径
// dp的经典
// 1.状态表示，以i,j为结尾时，走到i,j的时候，一共多少种方式
// 2.状态转移方程，走到[i,j]位置的时候，一共有多少种方式
//  dp[i][j] = dp[i-1][j] + dp[i][j-1]
//int dp[505][505];
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    dp[0][1] = 1;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//            printf("dp[%d][%d] = %d\n", i, j, dp[i][j]);
//        }
//    }
//    cout << dp[n][m] << endl;

//    return 0;
//}


// 不同路径2
//int dp[505][505];
//int main()
//{
//    int n, m;
//    int x, y; // 障碍物坐标
//    cin >> n >> m >> x >> y;
//    dp[0][1] = 1;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            if (i == x && j == y) {
//                continue;
//            }
//            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];

//            //            printf("dp[%d][%d] = %d\n", i, j, dp[i][j]);
//        }
//    }
//    cout << dp[n][m] << endl;
//    return 0;
//}



// 礼物最大价值
//int dp[505][505];
//int arr[505][505];
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            dp[i][j] = std::max(dp[i][j - 1] + arr[i][j], dp[i - 1][j] + arr[i][j]);
//        }
//    }
//    cout << dp[n][m] << endl;
//    return 0;
//}


/// dp简单多状态
// 按摩师
// 每个位置可以选或者不选
// dp[i]表示前i个的最大时长
// 又划分为两个状态
// f[i]表示选择到i位置的时候，nums[i]必选
// g[i]表示选择到i位置的时候，nums[i]不选
//int n;
//int arr[50005];
//int f[50005];
//int g[50005];
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//    }
//    f[1] = arr[1];
//    for (int i = 2; i <= n; ++i) {
//        f[i] = g[i - 1] + arr[i];    //选的转移方程
//        g[i] = std::max(f[i - 1], g[i - 1]);   //不选的转移方程
//    }
//    cout << std::max(f[n], g[n]) <<endl;
//    return 0;
//}



// 打家劫舍
// int n;
// int arr[5005];
// int f[5005]; // f[i]表示选择到i位置的时候，nums[i]必选
// int g[5005];
// int main()
//{
//    // 唯一的不同就是加了一个环形，只要加一个特判就行了
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//    }
//    // 假设先偷1位置的
//    f[3] = arr[3];
//    // 把2位置和n位置的刨除在外
//    for (int i = 4; i < n; ++i) {
//        f[i] = g[i - 1] + arr[i];
//        g[i] = std::max(f[i - 1], g[i - 1]);
//    }
//    int x1 = arr[1] + std::max(f[n - 1], g[n - 1]);
//    // 不偷1位置,那么2到n就随便了
//    memset(f, 0, sizeof(f));
//    memset(g, 0, sizeof(g));
//    f[2] = arr[2];
//    for (int i = 3; i <= n; ++i) {
//        f[i] = g[i - 1] + arr[i];
//        g[i] = std::max(f[i - 1], g[i - 1]);
//    }
//    int x2 = std::max(g[n], f[n]);
//    cout << std::max(x1, x2) << endl;
//    return 0;
//}




// 菜药,dp练手
//int T, M;
//int t[105], w[105];
//int dp[1005][105]; // dp[i][j]表示在i分钟时间限制的情况下,对于前j个药材的最大价值
//int main()
//{
//    cin >> T >> M;
//    for (int i = 1; i <= M; ++i) {
//        cin >> t[i] >> w[i];
//    }
//    for (int i = 1; i <= M; ++i) {
//        for (int j = 1; j <= T; ++j) {
//            if (j >= t[i]) {
//                dp[j][i] = std::max(dp[j][i - 1], dp[j - t[i]][i - 1] + w[i]);
//            } else {
//                dp[j][i] = dp[j][i - 1];
//            }
//        }
//    }
//    cout << dp[T][M] << endl;
//    return 0;
//}




// 删数并获得点数
//const int Max = 5e5 + 5;
//int arr[Max]; // arr[i]表示i这个数字出现的总和
//int f[Max]; // f[i]表示必选这个数
//int g[Max]; // g[i]表示不选这个数
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        int a;
//        cin >> a;
//        arr[a] += a;
//    }
//    for (int i = 1; i <= Max; ++i) {
//        f[i] = g[i - 1] + arr[i];
//        g[i] = std::max(g[i - 1], f[i - 1]);
//    }
//    cout << std::max(f[Max], g[Max]) << endl;

//    return 0;
//}




// 最佳买卖股票时机含冷冻期
// 1.状态表示的思路(经验+题目要求)
// 以某一个位置为结尾....
// dp[i]表示第i天结束的时候所能拿到的最大利润
// dp[i]可以继续细分(持股，未持股，冷冻)
// dp[i][0]表示第i天结束处于持股状态
// dp[i][1]表示第i天结束处于未持股状态
// dp[i][2]表示第i天结束处于冷冻状态
//  2.状态转移方程
//  dp[i][0] = std::max(dp[i - 1][0],dp[i - 1][1] - arr[i])
//  dp[i][1] = std::max(dp[i - 1][1],dp[i - 1][2])
//  dp[i][2] = dp[i - 1][0] + arr[i]
//int dp[100005][3];
//int arr[100005];
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//    }
//    dp[1][0] = -arr[1];
//    dp[1][1] = 0;
//    for (int i = 2; i <= n; ++i) {
//        dp[i][0] = std::max(dp[i - 1][0], dp[i - 1][1] - arr[i]);
//        dp[i][1] = std::max(dp[i - 1][1], dp[i - 1][2]);
//        dp[i][2] = dp[i - 1][0] + arr[i];
//    }
//    cout << std::max(dp[n][0], std::max(dp[n][1], dp[n][2])) << endl;

//    return 0;
//}




// 过河卒,dp练手
//int dx[8] = { -1, -1, -2, -2, 1, 1, 2, 2 };
//int dy[8] = { -2, 2, -1, 1, 2, -2, 1, -1 };
//int land[30][30];
//int n, m, hx, hy;
//long long dp[30][30]; // dp[i][j]表示到达i,j时的路线
//int main()
//{
//    cin >> n >> m >> hx >> hy;
//    land[hx][hy] = 1;
//    for (int i = 0; i < 8; ++i) {
//        int xx = hx + dx[i];
//        int yy = hy + dy[i];
//        if (xx >= 0 && xx <= n && yy >= 0 && yy <= m) {
//            land[xx][yy] = 1;
//        }
//    }
//    for (int i = 0; i <= n; ++i) {
//        if (land[i][0] == 1) {
//            break;
//        }
//        dp[i][0] = 1;
//    }
//    for (int i = 0; i <= m; ++i) {
//        if (land[0][i] == 1) {
//            break;
//        }
//        dp[0][i] = 1;
//    }
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            if (land[i][j] == 0) {
//                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//            }
//        }
//    }
//    cout << dp[n][m] << endl;

//    return 0;
//}




// 滑雪,dp练手
//int n, m;
//int land[105][105];
//struct Point {
//    int x;
//    int y;
//    int h;
//    Point(int i, int j, int w_h)
//        : x(i)
//        , y(j)
//        , h(w_h)
//    {
//        ;
//    }
//};
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//std::vector<Point> points;
//bool compare(const Point& p1, const Point& p2)
//{
//    return p1.h > p2.h;
//}

//int dp[105][105]; // dp[i][j]表示滑到i,j位置时的最大距离
//int main()
//{
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cin >> land[i][j];
//            dp[i][j] = 1;
//            points.push_back(Point(i, j, land[i][j]));
//        }
//    }
//    std::sort(points.begin(), points.end(), compare);
//    for (int i = 0; i < points.size(); ++i) {
//        Point p = points[i];
//        for (int j = 0; j < 4; ++j) {
//            int xx = p.x + dx[j];
//            int yy = p.y + dy[j];
//            if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && p.h < land[xx][yy]) {
//                dp[p.x][p.y] = std::max(dp[p.x][p.y], dp[xx][yy] + 1);
//            }
//        }
//    }
//    int Max = 0;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            Max = std::max(Max, dp[i][j]);
//        }
//    }
//    cout << Max << endl;

//    return 0;
//}




// 股票交易含手续费
// dp[i]表示到第i天的一个最大利润，再进行状态划分
// dp[i][0]表示到第i天结束的时候持股
// dp[i][1]表示到第i天结束的时候不持股
// dp[i][0] = std::max(dp[i-1][0],dp[i-1][1] - arr[i])
// dp[i][1] = std::max(dp[i-1][1],dp[i-1][0] + arr[i] -fee)
//int n;
//int arr[5005];
//int fee;
//int dp[5005][2];
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//    }
//    cin >> fee;
//    dp[1][0] = -arr[1];
//    dp[1][1] = 0;
//    for (int i = 2; i <= n; ++i) {
//        dp[i][0] = std::max(dp[i - 1][0], dp[i - 1][1] - arr[i]);
//        dp[i][1] = std::max(dp[i - 1][1], dp[i - 1][0] + arr[i] - fee);
//    }

//    cout << std::max(dp[n][0], dp[n][1]) << endl;
//    return 0;
//}




// 股票交易，限制最大交易次数为2次
// 动规的思想就是当前最优+批判性继承
// dp[i][0]  表示到第i天结束的时候是持股,并且交易次数0
// dp[i][1]  表示到第i天结束的时候是持股,并且交易次数1
// dp[i][2]  表示到第i天结束的时候是持股,并且交易次数2
// dp[i][3]  表示到第i天结束的时候是未持股,并且交易次数0
// dp[i][4]  表示到第i天结束的时候是未持股,并且交易次数1
// dp[i][5]  表示到第i天结束的时候是未持股,并且交易次数2
//int n;
//int arr[5005];
//int dp[5005][6];

//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n;++i){
//        cin >> arr[i];
//    }
//    dp[1][0] = -arr[1];
//    for (int i = 2; i <= n; ++i) {
//        dp[i][0] = std::max(dp[i - 1][3] - arr[i], dp[i - 1][0]);
//        if (i > 3) {
//            dp[i][1] = std::max(dp[i - 1][4] - arr[i], dp[i - 1][1]);
//        }else if(i == 3){
//            dp[i][1] = dp[i - 1][4] - arr[i];
//        }
//        dp[i][3] = dp[i - 1][3];
//        dp[i][4] = std::max(dp[i - 1][4], dp[i - 1][0] + arr[i]);
//        if (i > 4) {
//            dp[i][5] = std::max(dp[i - 1][5], dp[i - 1][1] + arr[i]);
//        }else if(i ==4 ){
//            dp[i][5] = dp[i - 1][1] + arr[i];
//        }
//    }
//    int MAX = 0;
//    for (int i = 0; i <= 5; ++i) {
//        MAX = std::max(MAX, dp[n][i]);
//    }
//    cout << MAX << endl;
//    return 0;
//}



/// dp子数组系列
// 最大子数组和
// dp[i]表示以i元素为结尾的所有子数组中的最大和
// 状态转移,dp[i] = std::max(dp[i - 1] + nums[i],nums[i])
//int n;
//int nums[50005];
//int dp[50005];
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> nums[i];
//    }
//    dp[1] = nums[1];
//    for (int i = 2; i <= n; ++i) {
//        dp[i] = std::max(dp[i - 1] + nums[i], nums[i]);
//    }
//    int MAX = -10e9;
//    for (int i = 1; i <= n; ++i) {
//        MAX = std::max(dp[i], MAX);
//    }
//    cout << MAX << endl;
//    return 0;
//}





/// dp背包系列

// 01背包
// dp[i][j]表示对于前i个物品，在j的体积限制下，能装的最大价值
//int dp[1005][10005];
//int N, V;
//int v[1005];
//int main()
//{
//    cin >> N >> V;
//    for (int i = 1; i <= N; ++i) {
//        cin >> v[i] >> w[i];
//    }
//    for (int i = 1; i <= N; ++i) {
//        for (int j = 1; j <= V; ++j) {
//            if (j >= v[i]) {
//                dp[i][j] = std::max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
//            } else {
//                dp[i][j] = dp[i - 1][j];
//            }
//        }
//    }
//    cout << dp[N][V] << endl;

//    return 0;
//}



// 完全背包,每种物品有无限多个
// 选法:1.不选  2.选1个  3.选2个 ......
// dp[i][j]表示对前i个物品，在j的体积限制下，能装的最大价值
//int N, V;
//int dp[1005][10005];
//int v[1005];
//int w[1005];
//int main()
//{
//    cin >> N >> V;
//    for (int i = 1; i <= N; ++i) {
//        cin >> v[i] >> w[i];
//    }
//    for (int i = 1; i <= N; ++i) {
//        for (int j = 1; j <= V; ++j) {
//            dp[i][j] = dp[i - 1][j];
//            // 和01背包不同的就是后面的判断是针对dp[i][j - v[i]] + w[i]
//            if (j >= v[i]) {
//                dp[i][j] = std::max(dp[i][j], dp[i][j - v[i]] + w[i]);
//            }

//        }
//    }
//    cout << dp[N][V] << endl;
//    return 0;
//}



////刷题
// 七段码,真题练手
// 枚举，枚举所有情况，找出符合的(连通在一起的)
//int arr[7] = { 0, 1, 2, 3, 4, 5, 6 };
//int main()
//{
//    cout << 7 + 10 + 16 + 20 + 19 + 7 + 1 << endl;
//    return 0;
//}




// 01串的熵
//double getAn(double x)
//{
//    //返回的是p(xi​)/log2​(p(xi​))
//    return x * std::log(x) / std::log(2);
//}
//double res = 11625907.5798;

//int main()
//{
//    // 二分0的次数
//    int l = 0, r = 23333333 / 2, m;
//    while (l <= r) {
//        m = (l + r) / 2;

//        double res1 = -m * getAn(m / 23333333.0) - (23333333 - m) * getAn(1 - m / 23333333.0);
//        if (res == res1) {
//            break;
//        }
//        if (res1 < res) {
//            l = m + 1;
//        } else if (res1 > res) {
//            r = m - 1;
//        }
//    }
//    cout << m << endl;

//    return 0;
//}




// 冶炼金属
// 过了100%
// int N;
// int arr[10005], brr[10005];
// int resmin;
// int resmax;
// int main()
//{
//    cin >> N;
//    for (int i = 0; i < N; ++i) {
//        cin >> arr[i] >> brr[i];
//    }
//    resmin = arr[0] / (brr[0] + 1) + 1;
//    resmax = arr[0] / brr[0];
//    for (int i = 1; i < N; ++i) {
//        resmin = std::max(resmin, arr[i] / (brr[i] + 1) + 1);
//        resmax = std::min(resmax, arr[i] / brr[i]);
//    }
//    cout << resmin << " " << resmax << endl;
//    return 0;
//}




// 青蛙过河
// 过了65%
//int N, X; // 河的宽度，要过河的次数
//std::vector<int> vec;
//int res;
// 判断x的跳跃能力是否能过
//bool judge(int x)
//{
//    std::vector<int> tempVec(vec);
//    for (int i = 0; i < X; ++i) {
//        if (i % 2 == 0) {
//            // 正向走
//            int now = 0;
//            while (now < N) {
//                int j;
//                // 每次都枚举长度
//                // 从大到小枚举
//                for (j = x; j > 0; --j) {
//                    if (now + j >= N) {
//                        now += j;
//                        break;
//                    } else {
//                        if (tempVec[now + j] > 0) {
//                            now += j;
//                            tempVec[now]--;
//                            // 找到能走的点也退出
//                            break;
//                        }
//                    }
//                }
//                if (j == 0) {
//                    return false;
//                }
//            }

//        } else {
//            // 返回
//            int now = N;
//            while (now > 0) {
//                int j;
//                for (j = x; j > 0; --j) {
//                    if (now - j <= 0) {
//                        now -= j;
//                        break;
//                    } else {
//                        if (tempVec[now - j] > 0) {
//                            now -= j;
//                            tempVec[now]--;
//                            break;
//                        }
//                    }
//                }
//                if (j == 0) {
//                    return false;
//                }
//            }

//        }
//    }
//    return true;
//}
//int main()
//{
//    cin >> N >> X;
//    X *= 2;
//    vec.push_back(0);
//    for (int i = 1; i < N; ++i) { // 输入N - 1块石头的高度
//        int a;
//        cin >> a;
//        vec.push_back(a);
//    }
//    // 二分+枚举
//    int l = 1, r = N, m;
//    while (l < r) {
//        m = (l + r) / 2;
//        if (judge(m)) {
//            r = m;
//        } else {
//            l = m + 1;
//        }
//    }
//    cout << r << endl;
//    return 0;
//}




// 钟表
//double myAbs(double x)
//{
//    if (x < 0) {
//        return -x;
//    } else {
//        return x;
//    }
//}

//bool judge(int s, int f, int m)
//{
//    double md, fd, sd;
//    md = m * 6;
//    fd = f * 6 + m * 0.1;
//    sd = s * 30 + f * 0.5 + m * 0.5 / 60;
//    double A = myAbs(fd - sd);
//    //    cout << A << " " << fd << " " << sd << endl;
//    double B = myAbs(fd - md);
//    if (A > 180) {
//        A = 360 - A;
//    }
//    if (B > 180) {
//        B = 360 - B;
//    }

//    if (myAbs(A - 2 * B) < 0.0001) {
//        return true;
//    }
//    return false;
//}

//int main()
//{
//    // 枚举所有时间
//        int s = 0, f = 0, m = 1;
//        while (s < 7) {
//            m++;
//            if (m >= 60) {
//                m = 0;
//                f++;
//                if (f >= 60) {
//                    f = 0;
//                    s++;
//                }
//            }
//            if (judge(s, f, m)) {
//                cout << s << " " << f << " " << m << endl;
//                return 0;
//            }
//        }
//    return 0;
//}



// 小A点菜
// 搜索+剪枝
// 过了90%
// int N, M; // N种菜，剩M元
// int arr[105];
// int cnt;
// void dfs(int n, int m)
//{
//    if (m > M) {
//        return;
//    }
//    if (m == M) {
//        ++cnt;
//        return;
//    }
//    if (n >= N) {
//        return;
//    }

//    dfs(n + 1, m + arr[n]);
//    dfs(n + 1, m);
//}

// int main()
//{
//     cin >> N >> M;
//     for (int i = 0; i < N; ++i) {
//         cin >> arr[i];
//     }
//     dfs(0, 0);
//     cout << cnt << endl;
//     return 0;
// }



// 小A点菜
// dp
// int N, M; // N种菜，剩M元
// int arr[105];
// int dp[105][10005]; // dp[i][j]前i道菜把j元花光的方法数量
// int main()
//{
//    cin >> N >> M;
//    for (int i = 1; i <= N; ++i) {
//        cin >> arr[i];
//    }
//    dp[1][arr[1]] = 1;
//    for (int i = 2; i <= N; ++i) {
//        for (int j = 1; j <= M; ++j) {
//            if (j == arr[i]) {
//                dp[i][j] = dp[i - 1][j] + 1;
//            } else if (j > arr[i]) {
//                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i]];
//            } else {
//                dp[i][j] = dp[i - 1][j];
//            }
//        }
//    }
//    cout << dp[N][M] << endl;
//    return 0;
//}




// 数楼梯
// int n;
// struct Long {
//    std::string str;
//};

// Long operator+(const Long& a, const Long& b)
//{
//     Long res;
//     int la = a.str.length();
//     int lb = b.str.length();
//     int l1 = std::max(a.str.length(), b.str.length());
//     int l2 = std::min(a.str.length(), b.str.length());
//     res.str.resize(l1 + 1, '0');
//     for (int i = 0; i < l1; ++i) {
//         if (i < l2) {
//             res.str[i] = res.str[i] + a.str[i] + b.str[i] - '0' - '0';
//             if (res.str[i] > '9') {
//                 res.str[i] -= 10;
//                 res.str[i + 1] += 1;
//             }
//         } else {
//             if (la > lb) {
//                 res.str[i] = res.str[i] + a.str[i] - '0';
//             } else {
//                 res.str[i] = res.str[i] + b.str[i] - '0';
//             }
//             if (res.str[i] > '9') {
//                 res.str[i] -= 10;
//                 res.str[i + 1] += 1;
//             }
//         }
//     }
//     return res;
// }
// Long dp[5005];
// void myPrint(const Long& a)
//{
//     bool f = false;
//     int l = a.str.length();
//     for (int i = l - 1; i >= 0; --i) {
//         if (a.str[i] != '0') {
//             f = true;
//         }
//         if (f) {
//             cout << a.str[i];
//         }
//     }
//     cout << endl;
// }

// int main()
//{
//     cin >> n;
//     dp[0].str = "1";
//     dp[1].str = "1";
//     for (int i = 2; i <= n; ++i) {
//         dp[i] = dp[i - 1] + dp[i - 2];
//     }
//     myPrint(dp[n]);
//     return 0;
// }




// 蜜蜂路线
// int m, n;

// struct Long {
//     std::string str;
// };

// Long operator+(const Long& a, const Long& b)
//{
//     Long res;
//     int la = a.str.length();
//     int lb = b.str.length();
//     int l1 = std::max(a.str.length(), b.str.length());
//     int l2 = std::min(a.str.length(), b.str.length());
//     res.str.resize(l1 + 1, '0');
//     for (int i = 0; i < l1; ++i) {
//         if (i < l2) {
//             res.str[i] = res.str[i] + a.str[i] + b.str[i] - '0' - '0';
//             if (res.str[i] > '9') {
//                 res.str[i] -= 10;
//                 res.str[i + 1] += 1;
//             }
//         } else {
//             if (la > lb) {
//                 res.str[i] = res.str[i] + a.str[i] - '0';
//             } else {
//                 res.str[i] = res.str[i] + b.str[i] - '0';
//             }
//             if (res.str[i] > '9') {
//                 res.str[i] -= 10;
//                 res.str[i + 1] += 1;
//             }
//         }
//     }
//     return res;
// }
// void myPrint(const Long& a)
//{
//     bool f = false;
//     int l = a.str.length();
//     for (int i = l - 1; i >= 0; --i) {
//         if (a.str[i] != '0') {
//             f = true;
//         }
//         if (f) {
//             cout << a.str[i];
//         }
//     }
//     cout << endl;
// }

// Long dp[1005];
// int main()
//{
//     cin >> m >> n;
//     dp[m].str = "1";
//     for (int i = m + 1; i <= n; ++i) {
//         dp[i] = dp[i - 1] + dp[i - 2];
//     }
//     myPrint(dp[n]);
//     return 0;
// }




// 栈
// 没有找到什么规律
// 模拟出栈入栈的过程
// 过了80%
// int n;
// long long cnt;
// std::stack<int> s;
// void dfs(std::stack<int> s, int i)
//{
//    if (i == n + 1) {
//        cnt++;
//        return;
//    }
//    s.push(i);
//    dfs(s, i + 1);
//    s.pop();
//    while (s.size() != 0) {
//        dfs(s, i + 1);
//        s.pop();
//    }
//}

// int main()
//{
//     cin >> n;
//     dfs(s, 1);
//     cout << cnt << endl;
//     return 0;
// }





// 栈
// int dp[20][20]; // dp[i][j]表示i个进栈，j个出栈时的种数
// int n;
// int main()
//{
//    cin >> n;
//    for (int i = 0; i <= n; ++i) {
//        dp[i][0] = 1;
//        dp[0][i] = 1;
//    }
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= i; ++j) {
//            if (i == j) {
//                dp[i][j] = dp[i][j - 1];
//            } else {
//                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
//            }
//        }
//    }
//    cout << dp[n][n] << endl;
//    return 0;
//}




// 接龙数列
// int dp[10]; // dp[i]表示以i为结尾的接龙数列的最大长度
// dp[tail] = std::max(dp[head] + 1,dp[tail])
// int n;
// int arr[100005];
// int getHead(int x)
//{
//    while (x >= 10) {
//        x /= 10;
//    }
//    return x;
//}
// int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//    }
//    for (int i = 1; i <= n; ++i) {
//        int head = getHead(arr[i]);
//        int tail = arr[i] % 10;
//        dp[tail] = std::max(dp[tail], dp[head] + 1);
//    }
//    int MAX = 0;
//    for (int i = 0; i < 10; ++i) {
//        MAX = std::max(MAX, dp[i]);
//    }
//    cout << n - MAX << endl;

//    return 0;
//}




// 子串简写
// 记录所有c1,c2的位置
// 过了100%
//char c1, c2;
//std::string str;
//int k;
//std::vector<int> vec_c1;
//std::vector<int> vec_c2;
//long long cnt;
//int main()
//{
//    cin >> k;
//    cin >> str >> c1 >> c2;
//    int len = str.length();
//    for (int i = 0; i < len; ++i) {
//        if (str[i] == c1) {
//            vec_c1.push_back(i);
//        } else if (str[i] == c2) {
//            vec_c2.push_back(i);
//        }
//    }
//    // 遍历每一个c1
//    int size1 = vec_c1.size();
//    int size2 = vec_c2.size();
//    int j = 0;
//    for (int i = 0; i < size1; ++i) {
//        while (j < size2 && vec_c2[j] - vec_c1[i] < k - 1) {
//            j++;
//        }
//        if(j != size2)
//        {
//            cnt = cnt + size2 - j;
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}




// 子串简写
// 另一种方法
//int k; // 大于等于k的字符串可以采用这种方式的简写
//string str;
//char c1, c2;
//long long cnt ,sum;
//int main()
//{
//    cin >> k;
//    cin >> str;
//    cin >> c1 >> c2;
//    // i 遍历 c2,j 遍历 c1
//    for (int i = k - 1; i < str.length(); ++i) {
//        int j = i - k + 1;
//        if (str[j] == c1) {
//            ++sum;  //sum记录到目前为止c1的个数
//        }
//        if (str[i] == c2) {
//            cnt += sum;
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}




// 覆盖
// 没啥思路，感觉是搜索
// 以下基本是题解内容，不是很懂
//long long cnt;
//int visit[10][10];
//void dfs(int x, int y)
//{
//    if (x == 9) {
//        // x == 9表示已经摆完了8 * 8的棋盘
//        ++cnt;
//        return;
//    }
//    if (visit[x][y] == 1) {
//        if (y == 8) {
//            dfs(x + 1, 1);
//        } else {
//            dfs(x, y + 1);
//        }
//        return;
//    }

//    // 大体的思路就是从左上角往右下角摆
//    visit[x][y] = 1;
//    if (y + 1 <= 8 && visit[x][y + 1] == 0) {
//        visit[x][y + 1] = 1; // 一次是摆两个方块，所以要在深搜过去前将第二个方块标记为已经访问过
//        dfs(x, y + 1);
//        visit[x][y + 1] = 0;
//    }
//    if (x + 1 <= 8 && visit[x + 1][y] == 0) {
//        visit[x + 1][y] = 1;
//        if (y == 8)
//            dfs(x + 1, 1);
//        else
//            dfs(x, y + 1);
//        visit[x + 1][y] = 0;
//    }
//    visit[x][y] = 0;
//}
//int main()
//{
//    dfs(1, 1);
//    cout << cnt << endl;
//    return 0;
//}



// 纯质数
// int cnt;
// bool judge(int x)
//{
//    if (x == 1 || x == 0) {
//        return false;
//    }
//    for (int i = 2; i * i <= x; ++i) {
//        if (x % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}

// bool judge1(int x)
//{
//     int t;
//     while (x > 0) {
//         t = x % 10;
//         if (!judge(t)) {
//             return false;
//         }
//         x /= 10;
//     }
//     return true;
// }

// int main()
//{
//     for (int i = 2; i <= 20210605; ++i) {
//         if (judge(i) && judge1(i)) {
//             ++cnt;
//         }
//     }
//     cout << cnt << endl;
//     return 0;
// }




// 子2023
// 前缀的子序列的数量
// 动规
// long long dp[4]; // dp[i] 分别表示 2 20 202 2023的数量
// void spread(int x)
//{
//     if (x > 0) {
//         spread(x / 10);
//     } else {
//         return;
//     }
//     if (x % 10 == 2) {
//         dp[0]++;
//         dp[2] += dp[1];
//     } else if (x % 10 == 0) {
//         dp[1] += dp[0];
//     } else if (x % 10 == 3) {
//         dp[3] += dp[2];
//     }
// }

// int main()
//{
//     for (int i = 1; i <= 2023; ++i) {
//         spread(i);
//     }
//     cout << dp[3] << endl;
//      return 0;
//}





// 火柴棒等式
// 感觉是暴力
// int arr[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 }; // 存储每个数字所需的火柴棒
// int n;
// long long cnt;
// int count(int x)
//{
//    if (x == 0) {
//        return 6;
//    } else {
//        int r = 0;
//        while (x > 0) {
//            int t = x % 10;
//            r += arr[t];
//            x /= 10;
//        }
//        return r;
//    }
//}

// bool judge(int i, int j)
//{
//     int r = i + j;
//     //    cout << count(i) << " " << count(j) << " " << count(r) << " n=" << n << endl;
//     if (count(i) + count(j) + count(r) == n) {
//         return true;
//     }
//     return false;
// }

// int main()
//{
//     cin >> n;
//     n -= 4;
//     // 枚举所有a b的情况
//     for (int i = 0; i <= 999; ++i) {
//         for (int j = 0; j <= 999; ++j) {
//             if (judge(i, j)) {
//                 //                cout << i << "  " << j << endl;
//                 cnt++;
//             }
//         }
//     }
//     cout << cnt << endl;
//     return 0;
// }



// 火柴棒等式，23年的版本
// #include<bits/stdc++.h>
// using namespace std;
// int n, x;
// int a[10] = { 6,2,5,5,4,5,6,3,7,6 };   //记录每个数字耗费的火柴数量
// int ans;
// bool visit[1000];
// int main() {
//     cin >> n;
//     n -= 4;
//     for (int i = 0; i <= 999; i++) {
//         for (int j = 0; j <= 999; j++) {
//             int count = 0;
//             int ii = i;
//             int jj = j;
//             int k = i + j;
//             if (ii == 0) {
//                 count += a[ii];
//             }
//             else {
//                 while (ii > 0) {
//                     x = ii % 10;
//                     count = count + a[x];
//                     ii /= 10;
//                 }
//             }
//             if (jj == 0) {
//                 count += a[jj];
//             }
//             else {
//                 while (jj > 0) {
//                     x = jj % 10;
//                     count += a[x];
//                     jj /= 10;
//                 }
//             }
//             while (k > 0) {
//                 x = k % 10;
//                 count += a[x];
//                 k /= 10;
//             }
//             if (count == n) {
//                 //cout << i << "+" << j << "=" << i + j << endl;
//                 if(i==j&&!visit[i]){
//                     ans++;
//                     visit[i]=true;
//                 }else if(i!=j){
//                     ans++;
//                 }
//             }
//         }
//     }
//     cout << ans;
//     return 0;
// }



// 欧拉筛选素数,筛选2 ~ n之间的所有素数
// 这个筛法准备直接背下来
// int n;
// bool isHe[1600000]; // false表示素数,true表示非素数
// int prim[1000005]; // 记录素数的值
// int cnt; // 记录素数的个数
// int main()
//{
//    cin >> n;
//    isHe[0] = isHe[1] = true;
//    //遍历i 到 n,prim数组存放的是到i为止的所有质数
//    for (int i = 2; i <= n; ++i) {
//        if (!isHe[i]) {
//            prim[cnt++] = i;
//        }
//        for (int j = 0; j < cnt && i * prim[j] <= n; ++j) {
//            isHe[i * prim[j]] = true;
//            if (i % prim[j] == 0) {
//                break;
//            }
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}



// 双子数
// const int MAX = 10000010;
// int cnt; // 记录当前筛选出的素数的个数
// bool isHe[MAX]; // false表示素数,true表示合数
// long long  prim[MAX]; // 记录素数的值,需要用long long
// long long resCnt;
// int main()
//{
//    // 欧拉筛选素数
//    isHe[0] = isHe[1] = true;
//    // 找到2到1600000之间的素数
//    for (int i = 2; i <= MAX; ++i) {
//        if (!isHe[i]) {
//            prim[cnt++] = i;
//        }
//        for (int j = 0; j < cnt && i * prim[j] < MAX; ++j) {
//            isHe[i * prim[j]] = true;
//            if (i % prim[j] == 0) {
//                break;
//            }
//        }
//    }
//    cout << "筛选完毕" << endl;
//    //     遍历素数数组，相乘观察其值是否位于区间
//    for (int i = 0; i < cnt; ++i) {
//        for (int j = i + 1; j < cnt; ++j) {
//            if (prim[i] * prim[i] * prim[j] * prim[j] < 2333) {
//                continue;
//            }
//            if (prim[i] * prim[i] * prim[j] * prim[j] > 23333333333333) {
//                break;
//            }
//            ++resCnt;
//        }
//    }
//    cout << resCnt << endl;
//    return 0;
//}



// 班级活动
//int n; // n名同学
//int countN[100005]; // count[i]表示id为i的同学的个数
//int cnt;
//int num1, numo;
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        int a;
//        cin >> a;
//        ++countN[a];
//    }
//    // count[i] = 2,不用改
//    // count[i] = 1,可能要改
//    // count[i] > 2,必须要改
//    //  只处理1和>2的情况
//    for (int i = 1; i <= n; ++i) {
//        if (countN[i] == 1) {
//            ++num1;
//        }
//        if (countN[i] > 2) {
//            numo = numo + countN[i] - 2;
//        }
//    }
//    if (num1 == numo) {
//        cnt = num1;
//    } else if (num1 < numo) {
//        cnt = numo;
//    } else {
//        cnt += numo;
//        num1 -= numo;
//        cnt = cnt + num1 / 2;
//    }
//    cout << cnt << endl;
//    return 0;
//}




// 合并数列
// 双指针
// 过了100%
//int n, m;
//int arr[100005];
//int brr[100005];
//int cnt;
//int pa = 2, pb = 2;
//int main()
//{
//    cin >> n >> m;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//    }
//    for (int i = 1; i <= m; ++i) {
//        cin >> brr[i];
//    }
//    // 思路就是小的合大的,模拟就行了
//    int na = 1, nb = 1;
//    while (na <= n) {
//        if (arr[na] < brr[nb]) {
//            arr[na] += arr[pa];
//            ++pa;
//            ++cnt;
//        } else if (arr[na] > brr[nb]) {
//            brr[nb] += brr[pb];
//            ++pb;
//            ++cnt;
//        } else {
//            na = pa++;
//            nb = pb++;
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}



// 入门
// 过了100%
// 这道题感觉是大水漫灌数格子
// 要点:数格子不需要回退
//int n, m;
//char land[30][30];
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//int cnt;
//bool vis[30][30];
//bool arrive[30][30]; // 记录哪些砖块是到达了
//void dfs(int x, int y)
//{
//    arrive[x][y] = true;
//    for (int i = 0; i < 4; ++i) {
//        int xx = x + dx[i];
//        int yy = y + dy[i];
//        if (xx > 0 && yy > 0 && xx <= n && yy <= m && land[xx][yy] != '#' && !vis[xx][yy]) {
//            vis[xx][yy] = true;
//            dfs(xx, yy);
//        }
//    }
//}

//int main()
//{
//    int sx, sy;
//    cin >> m >> n;   //m是列，n是行
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cin >> land[i][j];
//            if (land[i][j] == '@') {
//                sx = i;
//                sy = j;
//            }
//        }
//    }
//    dfs(sx, sy);

//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            if (arrive[i][j]) {
//                ++cnt;
//            }
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}




// 三国游戏
// 过了50%
//int N;
//int arr[505][505]; // arr[i][j] 表示 i 号武将 和j号武将的默契值
//bool vis[505]; // 表示武将已选
//bool v1[505]; // 人的武将
//bool v2[505]; // 机器的武将
//int isWin;
//int winNum;
//void dfs(int n)
//{
//    //    cout << "n = " << n << endl;
//    if (n == N) {
//        // 已经选完
//        // 找出人的最佳武将
//        int MAXr = 0, MAXj = 0;
//        for (int i = 1; i <= N; ++i) {
//            if (v1[i]) {
//                for (int j = i + 1; j <= N; ++j) {
//                    if (v1[j]) {
//                        MAXr = std::max(MAXr, arr[i][j]);
//                    }
//                }
//            }
//        }
//        // 找出机器的最佳武将
//        for (int i = 1; i <= N; ++i) {
//            if (v2[i]) {
//                for (int j = i + 1; j <= N; ++j) {
//                    if (v2[j]) {
//                        MAXj = std::max(MAXj, arr[i][j]);
//                    }
//                }
//            }
//        }
//        if (MAXr > MAXj) {
//            isWin = 1;
//            winNum = std::max(MAXr, winNum);
//        }
//        return;
//    }
//    if (n % 2 == 0) {
//        // 人
//        for (int i = 1; i <= N; ++i) {
//            if (!vis[i]) {
//                vis[i] = true;
//                v1[i] = true;
//                dfs(n + 1);
//                vis[i] = false;
//                v1[i] = false;
//            }
//        }
//    } else {
//        // 机器
//        // 遍历人的武将
//        int MAX = 0, MAXj;
//        for (int i = 1; i <= N; ++i) {
//            if (v1[i]) {
//                // 遍历自由武将
//                for (int j = 1; j <= N; ++j) {
//                    if (!vis[j] && arr[i][j] > MAX) {
//                        MAX = arr[i][j];
//                        MAXj = j;
//                    }
//                }
//            }
//        }
//        vis[MAXj] = true;
//        v2[MAXj] = true;
//        dfs(n + 1);
//        vis[MAXj] = false;
//        v2[MAXj] = false;
//    }
//}
//int main()
//{
//    cin >> N;
//    // 武将的编号是1 ~ N
//    for (int i = 1; i <= N - 1; ++i) {
//        for (int j = i + 1; j <= N; ++j) {
//            int a;
//            cin >> a;
//            arr[i][j] = arr[j][i] = a;
//        }
//    }
//    dfs(0);

//    if (isWin) {
//        cout << isWin << endl
//             << winNum << endl;
//    } else {
//        cout << isWin << endl;
//    }
//    return 0;
//}



// AB路线
// 只过了30%
//struct Point {
//    int x;
//    int y;
//    int d; // 当前已经走了多少个现在的字母
//};
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//std::string land[1005];
//int N, M, k;
//std::queue<Point> que;
//int mapLen[1005][1005];
//int main()
//{
//    memset(mapLen, 127, sizeof(mapLen));
//    cin >> N >> M >> k;
//    for (int i = 0; i < N; ++i) {
//        cin >> land[i];
//    }
//    Point p;
//    p.x = 0;
//    p.y = 0;
//    p.d = 1;
//    mapLen[0][0] = 0;
//    que.push(p);
//    bool f = false;
//    while (!que.empty()) {
//        Point nowp = que.front();
//        que.pop();
//        for (int i = 0; i < 4; ++i) {
//            int xx = nowp.x + dx[i];
//            int yy = nowp.y + dy[i];
//            if (xx >= 0 && yy >= 0 && xx < N && yy < M && mapLen[xx][yy] > mapLen[nowp.x][nowp.y] + 1) {
//                if(nowp.d < k && land[xx][yy] == 'A' || nowp.d >= k && land[xx][yy] == 'B'){
//                    mapLen[xx][yy] = mapLen[nowp.x][nowp.y] + 1;
//                    Point newp;
//                    newp.x = xx;
//                    newp.y = yy;
//                    newp.d = (nowp.d + 1) %  (2 * k);
//                    que.push(newp);
//                    if (xx == N - 1 && yy == M - 1) {
//                        f = true;
//                        break;
//                    }
//                }
//            }
//        }
//        if (f) {
//            break;
//        }
//    }
//    if (mapLen[N - 1][M - 1] < 1000001) {
//        cout << mapLen[N - 1][M - 1] << endl;
//    } else {
//        cout << -1 << endl;
//    }
//    return 0;
//}





// 单词接龙
// 深搜
// 过了100%
// int n;
// char head;
// int maxLen;
// std::string strs[22];
// int counts[22]; // 记录每个单词还可以使用的次数
// bool judge(int l, int r, int& addLen)
// {
//     // 枚举长度
//     int minl = std::min(strs[l].length(), strs[r].length());
//     string strl = "", strr = "";
//     bool f = false;
//     int i;
//     for (i = 1; i < minl; ++i) {
//         strl = strs[l][strs[l].length() - i] + strl;
//         strr += strs[r][i - 1];
//         // cout << strl << "    " << strr << endl;
//         f = strr == strl;
//         if (f) {
//             break;
//         }
//     }
//     if (i < minl) {
//         addLen = strs[r].length() - i;
//         return true;
//     } else {
//         return false;
//     }
// }

// void dfs(int x, int nowl)
// {
//     // cout << "nowl: " << nowl << endl;
//     maxLen = std::max(nowl, maxLen);
//     // 遍历每一个，找符合条件的单词
//     for (int i = 0; i < n; ++i) {
//         int addLen;
//         if (counts[i] && judge(x, i, addLen)) {
//             --counts[i];
//             dfs(i, nowl + addLen);
//             ++counts[i];
//         }
//     }
// }

// int main()
// {
//     cin >> n;
//     for (int i = 0; i < n; ++i) {
//         cin >> strs[i];
//         counts[i] = 2;
//     }
//     cin >> head;
//     string str = " ";
//     for (int i = 0; i < n; ++i) {
//         if (strs[i][0] == head) {
//             --counts[i];
//             dfs(i, strs[i].length());
//             ++counts[i];
//         }
//     }
//     cout << maxLen << endl;
//     // int addLen = -1;
//     // judge(0, 1, addLen);
//     // cout << addLen << endl
//     return 0;
// }




// ACWing 献给阿尔吉侬的花束 BFS学习
// int T;
// int R, C;
// struct Point {
//     int x;
//     int y;
// };
// int dx[4] = { 0, 0, 1, -1 };
// int dy[4] = { -1, 1, 0, 0 };

// char land[205][205];
// int maplen[205][205]; // 记录步长的数组
// std::queue<Point> que;
// int main()
// {
//     cin >> T;
//     while (T--) {
//         memset(maplen, 127, sizeof(maplen));
//         cin >> R >> C;
//         for (int i = 0; i < R; ++i) {
//             for (int j = 0; j < C; ++j) {
//                 cin >> land[i][j];
//                 if (land[i][j] == 'S') {
//                     Point p;
//                     p.x = i;
//                     p.y = j;
//                     que.push(p);
//                     maplen[i][j] = 0;
//                 }
//             }
//         }
//         // 遍历找到起点
//         bool f = false;
//         while (!que.empty()) {
//             Point nowp = que.front();
//             // cout << "当前坐标:" << nowp.x << "  " << nowp.y << endl;
//             que.pop();
//             for (int i = 0; i < 4; ++i) {
//                 int xx = nowp.x + dx[i];
//                 int yy = nowp.y + dy[i];
//                 // 如果在地图内并且可以走
//                 if (xx >= 0 && yy >= 0 && xx < R && yy < C && maplen[xx][yy] > maplen[nowp.x][nowp.y] + 1 && land[xx][yy] != '#') {
//                     Point nextp;
//                     nextp.x = xx;
//                     nextp.y = yy;
//                     que.push(nextp);
//                     maplen[xx][yy] = maplen[nowp.x][nowp.y] + 1;
//                     // cout << xx << "  " << yy << "  " << maplen[xx][yy] << endl;
//                     if (land[xx][yy] == 'E') {
//                         // cout << "找到终点" << endl;
//                         f = true;
//                         break;
//                     }
//                 }
//             }
//             if (f) {
//                 break;
//             }
//         }
//         for (int i = 0; i < R; ++i) {
//             for (int j = 0; j < C; ++j) {
//                 if (land[i][j] == 'E') {
//                     if (maplen[i][j] != 2139062143) {
//                         cout << maplen[i][j] << endl;
//                     } else {
//                         cout << "oop!" << endl;
//                     }
//                 }
//             }
//         }
//     }

//     return 0;
// }




// 离开中山路
//struct Point {
//    int x;
//    int y;
//};
//string land[1005];
//int mapLen[1005][1005];
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//int x1, y1_, x2, y2;
//int N;
//std::queue<Point> que;
//int main()
//{
//    memset(mapLen, 127, sizeof(mapLen));
//    cin >> N;
//    for (int i = 0; i < N; ++i) {
//        cin >> land[i];
//    }
//    cin >> x1 >> y1_ >> x2 >> y2;
//    x1 -= 1;
//    y1_ -= 1;
//    x2 -= 1;
//    y2 -= 1;
//    Point p;
//    p.x = x1;
//    p.y = y1_;
//    que.push(p);
//    mapLen[x1][y1_] = 0;
//    bool f = false;
//    while (!que.empty()) {
//        Point nowp = que.front();
//        que.pop();
//        for (int i = 0; i < 4; ++i) {
//            int xx = nowp.x + dx[i];
//            int yy = nowp.y + dy[i];
//            if (xx >= 0 && yy >= 0 && xx < N && yy < N && land[xx][yy] != '1' &&mapLen[xx][yy] > mapLen[nowp.x][nowp.y] + 1) {
//                mapLen[xx][yy] = mapLen[nowp.x][nowp.y] + 1;
//                Point newp;
//                newp.x = xx;
//                newp.y = yy;
//                que.push(newp);
//                if (xx == x2 && yy == y2) {
//                    f = true;
//                    break;
//                }
//            }
//        }
//        if (f) {
//            break;
//        }
//    }
//    cout << mapLen[x2][y2] << endl;
//    return 0;
//}





// A - B数对
// 过了100%
//long long N, c;
//int arr[200005];
//std::map<long long, int> ma; // 记录出现的次数
//long long cnt;
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> N >> c;
//    for (int i = 1; i <= N; ++i) {
//        cin >> arr[i];
//        ++ma[arr[i]];
//    }
//    for (int i = 1; i <= N; ++i) {
//        cnt = cnt + ma[arr[i] - c];
//    }
//    cout << cnt << endl;
//    return 0;
//}



// A - B数对
//long long N, c;
//int arr[200005];
//long long cnt;
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin.tie(0), cout.tie(0);
//    cin >> N >> c;
//    for (int i = 1; i <= N; ++i) {
//        cin >> arr[i];
//    }
//    std::sort(arr + 1, arr + N + 1);
//    // i遍历右边,j遍历左边
//    for (int i = 2, j = 1; i <= N && j <= N;) {
//        if (arr[i] - arr[j] == c) {
//            // 判断是否有重复的数
//            int ni = 1, nj = 1;
//            while (arr[i + 1] == arr[i]) {
//                ++i;
//                ++ni;
//            }
//            while (arr[j + 1] == arr[j]) {
//                ++j;
//                ++nj;
//            }
//            cnt = cnt + ni * nj;
//            ++j;
//        } else if (arr[i] - arr[j] < c) {
//            ++i;
//        } else {
//            ++j;
//        }
//    }
//    cout << cnt << endl;
//    return 0;
//}



// 最大食物链计数
// 思路就是构建单向图，还有防止重复搜索，第一次搜完的时候就要存下数字，下次可以直接返回
// 以顶级的掠食者为起点，单向图
//int mod = 80112002;
//int N, M; // 生物总数N,关系数M
//std::list<int> routes[5005]; // routes[i]表示以i为起点能到达哪些点
//bool flags[5005]; // 为true表示该点不是起点
//long long cnt;
//long long res[5005]; // res[i]存放以i为起点的所有路线条数 % mod

//int dfs(int x)
//{
//    if (res[x]) {
//        return res[x];
//    }
//    if (routes[x].size() == 0) {
//        return 1;
//    }
//    int r = 0;
//    for (int e : routes[x]) {
//        r = (r + dfs(e)) % mod;
//    }
//    res[x] = r;
//    return r;
//}

//int main()
//{
//    cin >> N >> M;
//    for (int i = 0; i < M; ++i) {
//        int a, b;
//        cin >> a >> b;
//        flags[a] = true;
//        routes[b].push_back(a);
//    }
//    for (int i = 1; i <= N; ++i) {
//        if (!flags[i]) {
//            int rr = dfs(i);
//            cnt = (cnt + rr) % mod;
//        }
//    }
//    cout << cnt << endl;

//    return 0;
//}



// 整数删除
// 做法是优先队列
// 这是自己再做了一遍，只过了80%
// 缺点是没有使用一个数组来进行存放一个下标的下一个下标和上一个下标 ,增加了遍历的时间
//int N, K;
//int arr[500005];
//std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> que;
//int main()
//{
//    cin >> N >> K;
//    for (int i = 1; i <= N; ++i) {
//        cin >> arr[i];
//        que.push({ arr[i], i });
//    }
//    for (int i = 0; i < K; ++i) {
//        std::pair<int, int> pa;
//        do {
//            pa = que.top();
//            que.pop();
//        } while (arr[pa.second] != pa.first); // 这个do while循环会将过期的数字筛选出去
//        int l = pa.second - 1, r = pa.second + 1;
//        while (l > 0 && arr[l] == -1) {
//            --l;
//        }
//        if (l > 0) {
//            arr[l] += pa.first;
//            //            cout << "l = " << l << "   arr[l] = " << arr[l] << endl;
//            que.push({ arr[l], l }); // 加入更新之后的数字
//        }
//        while (r <= N && arr[r] == -1) {
//            ++r;
//        }
//        if (r <= N) {
//            arr[r] += pa.first;
//            que.push({ arr[r], r }); // 加入更新之后的数字
//            //            cout << "r = " << r << "   arr[r] = " << arr[r] << endl;
//        }
//        arr[pa.second] = -1; // 删除该数
//    }
//    for (int i = 1; i <= N; ++i) {
//        if (arr[i] != -1) {
//            cout << arr[i] << " ";
//        }
//    }
//    cout << endl;

//    return 0;
//}


// 取球博弈
// 尝试的问题的时候就需要用到dfs
// 博弈问题的dfs需要交换变量
// 博弈的问题在于，但是当我无法选择的时候，就可以知道当前的对局情况
// 只过了25%
//int M = 5;
//int n[4];
//int minN;
//int arr[6]; // 存放初始球数
// me是准备抓球的人的当前的数目，you是当前对手的数目
//char dfs(int sum, int me, int you)
//{
//    if (sum < minN) {
//        // 已经无法取球
//        if (me % 2 == 0 && you % 2 == 1) {
//            return '-';
//        } else if (me % 2 == 1 && you % 2 == 0) {
//            return '+';
//        } else {
//            return '0';
//        }
//    }
//    cout << "sum = " << sum << endl;
//    bool f = false;
//    for (int i = 1; i <= 3; ++i) {
//        if (sum >= n[i]) {
//            char res = dfs(sum - n[i], you, me + n[i]); // 这边要交换变量
//            if (res == '-') {
//                return '+';
//            }
//            if (res == '0') {
//                f = true;
//            }
//        }
//    }
//    if (f) {
//        return '0';
//    } else {
//        return '-';
//    }
//}
//int main()
//{
//    cin >> n[1] >> n[2] >> n[3]; // 可以选择的取球的数目
//    for (int i = 1; i <= 5; ++i) {
//        cin >> arr[i];
//    }
//    while (M--) {
//        minN = std::min(n[1], std::min(n[2], n[3]));
//        char res = dfs(arr[5 - M], 0, 0);
//        cout << res << " ";
//    }

//    cout << endl;

//    return 0;
//}



// 回文数个数
//int n;
//long long cnt;
//int main()
//{
//    cin >> n;
//    // 枚举2到n
//    cnt = 9;
//    for (int i = 2; i <= n; ++i) {
//        long long res = 1;
//        int l = (i + 1) / 2;
//        for (int j = 0; j < l; ++j) {
//            if (j == 0) {
//                res = res * 9;
//            } else {
//                res = res * 10;
//            }
//        }
//        cnt += res;
//    }
//    cout << cnt << endl;
//    return 0;
//}


// 编辑距离
// int dp[1005][1005]; // dp[i][j]表示从str1的前i个字符改变到str2的前j个字符的最小步数
// string str1, str2;
// int main()
//{
//    cin >> str1 >> str2;
//    str1 = " " + str1;
//    str2 = " " + str2;
//    int len1 = str1.length();
//    int len2 = str2.length();
//    for (int i = 0; i < 1005; ++i) {
//        dp[0][i] = dp[i][0] = i;
//    }
//    for (int i = 1; i < len1; ++i) {
//        for (int j = 1; j < len2; ++j) {
//            if (str1[i] == str2[j]) {
//                dp[i][j] = dp[i - 1][j - 1];
//            } else {
//                dp[i][j] = dp[i - 1][j - 1] + 1;
//                dp[i][j] = std::min(dp[i][j], dp[i - 1][j] + 1);
//                dp[i][j] = std::min(dp[i][j], dp[i][j - 1] + 1);
//            }
//        }
//    }
//    cout << dp[len1 - 1][len2 - 1] << endl;
//    return 0;
//}


// 最优包含
// int dp[1005][1005]; // dp[i][j] 表示str1中的前i个字符，修改到包含str2中的前j个字符的最短步数
// string str1, str2;
// int main()
//{
//    cin >> str1 >> str2;
//    str1 = " " + str1;
//    str2 = " " + str2;
//    int len1 = str1.length();
//    int len2 = str2.length();
//    for(int i=1;i<str1.size();i++){
//        dp[0][i]=0x3f3f;    //这里将赋值为一个非常大的整数
//    }


//    for (int i = 1; i <= len1; ++i) {
//        for (int j = 1; j <= len2; ++j) {
//            if (str1[i] == str2[j]) {
//                dp[i][j] = dp[i - 1][j - 1];
//            } else {
//                dp[i][j] = std::min(dp[i - 1][j - 1] + 1, dp[i - 1][j]);
//            }
//        }
//    }
//    cout << dp[len1 - 1][len2 - 1] << endl;
//    return 0;
//}




// int main()
//{


//    return 0;
//}


// 单调栈(重要)
// 单调栈用于寻找一个序列中的一个元素的下一个更大元素或者下一个更小元素


// 优先队列的大小比较函数1（重要)
//struct compare1 {
//    bool operator()(int a, int b)
//    {
//        return a > b;     //定义了优先队列中较小的元素具有较高的优先级
//    }
//};

//struct compare2 {
//    bool operator()(int a, int b)
//    {
//        return a < b;     //定义了优先队列中较大的元素具有较高的优先级
//    }
//};

//int main()
//{
//    std::priority_queue<int, std::vector<int>, compare2> pq;
//    pq.push(22);
//    pq.push(6);
//    pq.push(51);
//    pq.push(89);
//    pq.push(100);
//    cout << pq.top() << endl;


//    return 0;
//}

//优先队列的大小比较函数2（重要)
//struct Point {
//    int x;
//    int y;
//    bool operator <(const Point &p1){
//        return x < p1.x;
//    }
//};
//Point points[10005];
//bool compare(const Point& p1, const Point& p2)
//{
//    return p1.x < p1.y;
//}

//std::priority_queue<Point, std::vector<Point>> que;
//int main()
//{
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n;++i){

//    }

//    return 0;
//}


// 单调栈（找下一个更大的数字）
// 当栈为空或者下一个数字大于栈顶的元素，就入栈
//int n;
//int arr[1005];
//std::stack<int> st;
//int main()
//{

//    cin >> n;
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//        if (st.empty() || arr[i] > st.top()) {
//            st.push(arr[i]);
//        } else {
//            while (!st.empty() && arr[i] <= st.top()) {
//                st.pop();
//            }
//            st.push(arr[i]);   //当前元素入栈
//        }
//    }

//    return 0;
//}




// 每日温度
// 单调栈应用  快速找出每个元素后面下一个比ta大的元素
// 有着一定的问题
//int n;
//int arr[500005];
//std::vector<int> vec;
//std::stack<int> st; // 栈中存放下标
//int main()
//{
//    cin >> n;
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//        if (st.empty() || arr[st.top()] < arr[i]) {
//            st.push(i);
//        } else {
//            while (!st.empty() && arr[i] <= arr[st.top()]) {
//                st.pop();
//            }
//            st.push(i); // 当前元素入栈
//        }
//    }

//    while (!st.empty()) {
//        vec.push_back(st.top());
//        st.pop();
//    }
//    for (int i = 0; i < vec.size(); ++i) {
//        cout << vec[i] << " ";
//    }
//    cout << endl;

//    return 0;
//}




// floyd算法
// void floydWarshall(int arr[4][4])
//{
//    int n = 4; // n是路径点的数量
//    for (int k = 0; k < n; k++) {
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                if (arr[i][k] != 2100000000 && arr[k][j] != 2100000000 && arr[i][k] + arr[k][j] < arr[i][j]) {
//                    arr[i][j] = arr[i][k] + arr[k][j];
//                }
//            }
//        }
//    }
//}
// int main()
//{
//    const int INF = 2100000000;
//    // 初始化地图
//    int arr[4][4] = {
//        { 0, 5, INF, 10 },
//        { INF, 0, 3, INF },
//        { INF, INF, 0, 1 },
//        { INF, INF, INF, 0 }
//    };
//    floydWarshall(arr);
//    for (int i = 0; i < 4; i++) {
//        for (int j = 0; j < 4; j++) {
//            if (arr[i][j] == INF)
//                cout << "INF ";
//            else
//                cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}


// 差分
// 问题:对一个数字进行m次操作，每次操作选定一个l 和 r
// 对[l,r]区间内的每个元素加上一个value
// 打印m次操作之后的数组
// 差分数组的性质:差分数组的前缀和等于原数组
// 方法:差分
// 1.先求一个差分数组
// 比如 1 3 7 5 2对应的差分数组是d[] = 1 2 4 -2 -3(后一位减前一位)
// 2.使用差分的结论转换原来的操作 [l,r]区间加上v 等价于 d[l] + v,d[r + 1] - v
// 3. 对差分操作进行前缀和得到原数组
//int n, m;
//int arr[50005];
//int d[50005];
//int main()
//{
//    cin >> n >> m;
//    // 初始化
//    for (int i = 1; i <= n; ++i) {
//        cin >> arr[i];
//        d[i] = arr[i] - arr[i - 1];
//    }
//    // 修改差分数组
//    for (int i = 0; i < m; ++i) {
//        int l, r, v;
//        cin >> l >> r >> v;
//        d[l] += v;
//        d[r + 1] -= v;
//    }
//    // 使用前缀和还原数组
//    for (int i = 1; i <= n; ++i) {
//        arr[i] = d[i] + arr[i - 1];
//        cout << arr[i] << " ";
//    }
//    cout << endl;

//    return 0;
//}


// 二维前缀和
//int n, m, w; // w个问询
//int arr[1005][1005];
//int sum[1005][1005]; // sum[i][j]是1,1到i,j元素的和
//// 如果我要求 x1,y1到x2,y2的元素的和
//// sum[x2][y2] - sum[x2][y1 - 1] - sum[x1 - 1][y2] + sum[x1 - 1][y1 - 1]

//// 这个函数用于初始化二维前缀和
//void pre_sum()
//{
//    sum[1][1] = arr[1][1];
//    for (int i = 2; i <= n; ++i) {
//        sum[i][1] = sum[i - 1][1] + arr[i][1];
//    }
//    for (int i = 2; i <= m; ++i) {
//        sum[1][i] = sum[1][i - 1] + arr[1][i];
//    }
//    for (int i = 2; i <= n; ++i) {
//        for (int j = 2; j <= m; ++j) {
//            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + arr[i][j];
//        }
//    }
//}

//int main()
//{
//    cin >> n >> m >> w;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//    pre_sum();   //初始化前缀和
//    for (int i = 0; i < w; ++i) {
//        int x1, x2, y1, y2;
//        cin >> x1 >> y1 >> x2 >> y2;
//        int res = sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
//        cout << res << endl;
//    }

//    return 0;
//}



// 最大加权矩形
// 二维前缀和刷题
//int arr[150][150];
//int sum[150][150];
//int N;
//void pre_sum()
//{
//    sum[1][1] = arr[1][1];
//    for (int i = 2; i <= N; ++i) {
//        sum[i][1] = sum[i - 1][1] + arr[i][1];
//    }
//    for (int i = 2; i <= N; ++i) {
//        sum[1][i] = sum[1][i - 1] + arr[1][i];
//    }
//    for (int i = 2; i <= N; ++i) {
//        for (int j = 2; j <= N; ++j) {
//            sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + arr[i][j];
//        }
//    }
//}
//int main()
//{
//    cin >> N;
//    for (int i = 1; i <= N; ++i) {
//        for (int j = 1; j <= N; ++j) {
//            cin >> arr[i][j];
//        }
//    }
//    pre_sum();
//    // 遍历每一个左上  右下的点
//    int maxS = -9999999;
//    for (int x1 = 1; x1 <= N; ++x1) {
//        for (int y1 = 1; y1 <= N; ++y1) {
//            for (int x2 = x1; x2 <= N; ++x2) {
//                for (int y2 = y1; y2 <= N; ++y2) {
//                    int res = sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
//                    maxS = std::max(maxS, res);
//                }
//            }
//        }
//    }
//    cout << maxS << endl;
//    return 0;
//}



















