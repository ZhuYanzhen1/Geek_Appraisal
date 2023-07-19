# 任务书

## 项目简介

本次项目数据来源于简化后的ICCAD赛题测试用例，项目目标是采用**穷举**的方法完成一个小数目的模块布局任务，布局目标为总线长最短。本项目将完全模拟比赛环境，我们将提供服务器资源、测试用例及评估器，希望大家能在此次项目中获得提升。

------

## 环境搭建
### 本地开发环境
Ubuntu中安装CLion：
1. 安装参考：https://blog.csdn.net/feimeng116/article/details/105898892
2. 破解参考1：https://www.bilibili.com/read/cv24307324/
3. 破解参考2：https://www.quanxiaoha.com/clion-pojie/clion-pojie-202313.html

CMake语法练习：https://github.com/ttroy50/cmake-examples

### 服务器环境使用

```bash
$ ssh -p <PORT> ubuntu@<IP ADRESS>    #连接到服务器
$ scp -P <PORT> -r <SOURCE PATH> ubuntu@<IP ADRESS>:<DESTINATION PATH>    #向服务器传输文件
# 注：每次连接都需要输入密码，第一次连接有一个认证，输入yes然后回车
```

------

## 问题建模

采用二次线长模型，假设所有标准单元两两互连，pin的位置为标准单元中心，且所有标准单元大小是固定且相等的，我们通过穷举的方法来计算移动标准单元之后的总线长

<img src="https://raw.githubusercontent.com/Yixin-Gong/figure/main/typora/202307151133830.png" alt="image-20230715113341792" style="zoom:67%;" />

$$
Quadratic\ Wirelength = (x_i-x_j)^2
$$

### 情况说明

为了简化问题我们布局只能布在格子中，给定文件的DieSize 指定了格子的行数和列数，同时，每个格子恰好放下一个标准单元，而且标准单元的大小假设是一样的。

### 输入文件格式
以下提供一个最简测试用例以说明输入文件，需注意每个词中间都是一个空格，请大家在写文件解析的时候注意：
```text
DieSize 3 3     # 可布局的行列数为3x3

NumInstances 4  # 共有4个单元需要放置
Inst C1         # 单元名称为C1，以此类推
Inst C2
Inst C3
Inst C4

NumNets 3       # 共有3个线网将上述的单元连接
Net N1 3        # 第一个线网名称为N1，连接了3个单元
Pin C1          # N1连接的第一个单元为C1
Pin C2          # N1连接的第二个单元为C2
Pin C3          # N1连接的第三个单元为C3
Net N2 3 
Pin C1
Pin C2
Pin C3
Net N3 2
Pin C1
Pin C4
```

### 输出文件格式

以下提供一个例子以说明输出文件，需注意每个词中间都是一个空格，请大家在写文件输出器的时候注意：

```text
C1 0 1           # 单元C1的位置为(0, 1)
C2 1 1           # 单元C2的位置为(1, 1)
C3 0 0           # 单元C3的位置为(0, 0)
C4 0 2           # 单元C4的位置为(0, 2)
```

------

## 开发方法

首先要写一个parser，用来将要解析的文件读入到我们的数据结构中存起来

要写一个parser.h文件，parser.h文件(写解析器类的声明)和一个parser.cpp(写解析器的方法实现)文件

实现一个parser要学习文件读取方法，请大家自行查阅相关的书籍帖子



然后要写一个parser_db.h文件，在里面写一个存储文件数据的数据结构

数据结构可以去自己找资料来学习，学会基本的原理以及不同数据结构的性能比较



还需要写一个处理逻辑的函数文件，可以写一个place.h,和一个place.cpp，里面实现布局的方法

这两个文件中可以写一些计算线长的函数，以及穷举的方法函数

算法需要大家自己去学习以及实现



然后还要写一个exporter，用来输出布局结果，可以创建一个exporter.h和exporter.cpp

这里需要学习文件输出方法



最后在main.cpp文件，调用之前写的头文件，并实现整个程序的处理逻辑

学会写CMakeLists.txt，参考之前发的那个cmake-example仓库

------

## 代码规范

一定要注意代码规范。一个好的代码规范可以使代码几乎无需注释就能让人理解代码的用途和功能，这使得在协同开发时对接更为容易。 通常我们使用4空格为一个tab的修改版google-style的规范来进行开发。

CLion为我们内置了clang-format工具，可以帮助我们自动格式化代码。CLion配置代码风格格式化参考链接：https://zh-google-styleguide.readthedocs.io/en/latest/google-cpp-styleguide/
