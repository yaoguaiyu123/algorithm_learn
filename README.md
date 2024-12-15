# algorithm_learn

## 前言

本仓库包含两个主要目录：

- **./algorithm_analysis_and_design/**
  包含算法分析与设计课程的答辩代码与文档

- **./test01/**
  包含蓝桥杯竞赛的C++练习代码



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
