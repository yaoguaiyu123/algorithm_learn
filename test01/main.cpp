#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;

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





























