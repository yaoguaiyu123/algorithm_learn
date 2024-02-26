# algorithm_learn
**算法学习**<br/>
写在一个文件里面<br/>

## 语法知识点
**1.解除c++输入输出流和c语言输入输出流的绑定**<br>
```
std::ios::sync_with_stdio(false);
cin.tie(0), cout.tie(0);
```
---------

**2.获得int类型的最大值**<br>
```
int num = std::numeric_limits<int>::max();  //需要头文件 #include <limits> 
```
---------

**3.c++万能头**<br>
```
#include <bits/stdc++.h>
```
---------
