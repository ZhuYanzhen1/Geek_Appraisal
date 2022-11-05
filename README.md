# Geek_Appraisal

&nbsp;&nbsp;&nbsp;&nbsp;本仓库为广东工业大学集电GEEK俱乐部考核仓库。下面将描述每个任务的要求以及相关的学习资料。请同学们认证阅读本文件并学习相关资料。有关信息的更新或更正将在本README文件中完成。任务一、二和三分别进行评分，没有先后顺序（即任务一没做出来不影响任务二和三）。

***

### 任务一
#### 任务背景

&nbsp;&nbsp;&nbsp;&nbsp;微分方程是指含有未知函数及其导数的关系式。解微分方程就是找出未知函数。微分方程是伴随着微积分学一起发展起来的。微积分学的奠基人Newton和Leibniz的著作中都处理过与微分方程有关的问题。微分方程的应用十分广泛，可以解决许多与导数有关的问题。物理中许多涉及变力的运动学、动力学问题，如空气的阻力为速度函数的落体运动等问题，很多可以用微分方程求解。此外，微分方程在化学、工程学、经济学和人口统计等领域都有应用。

&nbsp;&nbsp;&nbsp;&nbsp;数学领域对微分方程的研究着重在几个不同的面向，但大多数都是关心微分方程的解。只有少数简单的微分方程可以求得解析解。不过即使没有找到其解析解，仍然可以确认其解的部分性质。在无法求得解析解时，可以利用数值分析的方式，利用电脑来找到其数值解。 动力系统理论强调对于微分方程系统的量化分析，而许多数值方法可以计算微分方程的数值解，且有一定的准确度。

&nbsp;&nbsp;&nbsp;&nbsp;计算机求解微分方程的数值解有多种方法，常用的有Euler法、梯形法、改进Euler法、Taylor级数法、Runge-Kutta法、线性多步法等。他们具有不同的精度和稳定性。

#### 任务要求

&nbsp;&nbsp;&nbsp;&nbsp;运用C语言，使用上述的任意一种方法，实现对下述简单微分方程的各个瞬时值与最终定态（收敛值）求解：

&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;![1](https://latex.codecogs.com/svg.latex?\\left\\{\\begin{matrix}y'&plus;y=0&space;\\\\y(0)=a\\end{matrix}\\right.)

&nbsp;&nbsp;&nbsp;&nbsp;注：a为常数，可由用户输入确定该值。你可以使用scanf()函数来获取输入的a值。瞬时值求解时步长为0.001，当迭代计算时前后两个值的差小于0.001倍的步长时，该值就认为是定态值。

#### 学习资料

+ [C语言教程（看至P12即可）](https://www.bilibili.com/video/BV1je4y187mp/?spm_id_from=333.337.search-card.all.click&vd_source=eed252f33e7aee5137cb946b2562f583)
+ [Dev-C++工具安装及使用教程](https://blog.csdn.net/qq_40160605/article/details/82940228)
+ [微分方程数值解简要](https://zhuanlan.zhihu.com/p/70255604)
+ [Euler法求解微分方程](https://www.bilibili.com/video/BV1v3411b7DK/?spm_id_from=333.788&vd_source=eed252f33e7aee5137cb946b2562f583)

***

### 任务二
#### 任务背景

&nbsp;&nbsp;&nbsp;&nbsp;计算机中的文件（文本、图片、音频、视频）本质上都是磁盘上的一系列0和1.这些0和1可以按特定规则排列，符合特定的文件格式的要求，可以被读取成人类易读的形式，也可以将人类易读的形式按照格式进行转换并写入磁盘中持久存储。简单的格式可以起作用，但是这样文件占用的空间就太大了，浪费存储空间以及降低传输速度。数据压缩就应运而生。

&nbsp;&nbsp;&nbsp;&nbsp;哈夫曼编码是一种字符编码方式，是可变长编码的一种，1952年提出，依据字符在文件中出现的频率来建立一个用0,1串表示各字符，使平均每个字符的码长最短的最优表现形式。

#### 任务要求

&nbsp;&nbsp;&nbsp;&nbsp;对一串给定的英文字符串（只含有ASCII码）进行各个字母的出现频率统计，并根据词频构造哈夫曼树。权值低放左节点，权值高放右节点，并且左节点编码0，右节点编码1，最终将该字符串压缩成一个长度更短的二进制串。

#### 学习资料

+ [数据压缩与哈夫曼编码](https://www.bilibili.com/video/BV1dE411Z7Zw/?spm_id_from=333.337.search-card.all.click&vd_source=eed252f33e7aee5137cb946b2562f583)
+ [哈夫曼编码](https://blog.csdn.net/qq_19887221/article/details/125322754)
+ [哈夫曼树与哈夫曼编码](https://www.bilibili.com/video/BV1hK4y1k7Wr/?spm_id_from=333.337.search-card.all.click)

***

### 任务三
#### 任务背景

&nbsp;&nbsp;&nbsp;&nbsp;逻辑门（Logic Gates)是在集成电路(Integrated Circuit)上的基本组件。简单的逻辑门可由晶体管组成。这些晶体管的组合可以使代表两种信号的高低电平在通过它们之后产生高电平或者低电平的信号。高、低电平可以分别代表逻辑上的“真”与“假”或二进制当中的1和0，从而实现逻辑运算。

&nbsp;&nbsp;&nbsp;&nbsp;大部分的逻辑结构都是通过逻辑门来实现的。逻辑门又称“数字逻辑电路基本单元”。执行“或”、“与”、“非”、“或非”、“与非”等逻辑运算的电路。任何复杂的逻辑电路都可由这些逻辑门组成。广泛用于计算机、通信、控制和数字化仪表。

#### 任务要求
&nbsp;&nbsp;&nbsp;&nbsp;请同学们阅读任务三的[报告模板](./task3/报告模板.md)，从中选择两个题目进行思考并给出思考过程和答案。

#### 学习资料

+ [逻辑门的种类与符号](https://www.eefocus.com/baike/481031)
+ [真值表](https://www.zhihu.com/question/275618526)
+ [常见七种逻辑门真值表](https://blog.csdn.net/weixin_52487896/article/details/125889966)