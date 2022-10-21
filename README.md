# Geek_Appraisal

&nbsp;&nbsp;&nbsp;&nbsp;本仓库为广东工业大学集电GEEK俱乐部考核仓库。下面将描述每个任务的要求以及相关的学习资料。请同学们认证阅读本文件并学习相关资料。有关信息的更新或更正将在本README文件中完成。

***

### 任务一
#### 任务背景

&nbsp;&nbsp;&nbsp;&nbsp;微分方程是指含有未知函数及其导数的关系式。解微分方程就是找出未知函数。微分方程是伴随着微积分学一起发展起来的。微积分学的奠基人Newton和Leibniz的著作中都处理过与微分方程有关的问题。微分方程的应用十分广泛，可以解决许多与导数有关的问题。物理中许多涉及变力的运动学、动力学问题，如空气的阻力为速度函数的落体运动等问题，很多可以用微分方程求解。此外，微分方程在化学、工程学、经济学和人口统计等领域都有应用。
&nbsp;&nbsp;&nbsp;&nbsp;数学领域对微分方程的研究着重在几个不同的面向，但大多数都是关心微分方程的解。只有少数简单的微分方程可以求得解析解。不过即使没有找到其解析解，仍然可以确认其解的部分性质。在无法求得解析解时，可以利用数值分析的方式，利用电脑来找到其数值解。 动力系统理论强调对于微分方程系统的量化分析，而许多数值方法可以计算微分方程的数值解，且有一定的准确度。
&nbsp;&nbsp;&nbsp;&nbsp;计算机求解微分方程的数值解有多种方法，常用的有Euler法、梯形法、改进Euler法、Taylor级数法、Runge-Kutta法、线性多步法等。他们具有不同的精度和稳定性。

#### 任务要求
&nbsp;&nbsp;&nbsp;&nbsp;运用C语言，使用上述的任意一种方法，实现对下述简单微分方程的各个瞬时值与最终定态求解：

&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;![1](https://latex.codecogs.com/svg.latex?\\left\\{\\begin{matrix}y'&plus;y=0&space;\\\\y(0)=a\\end{matrix}\\right.)

注：a为常数，可由用户输入确定该值。你可以使用scanf()函数来获取输入的a值。瞬时值求解时步长为0.001，定态误差应小于0.001。

#### 学习资料
+ [C语言教程（看至P12即可）](https://www.bilibili.com/video/BV1je4y187mp/?spm_id_from=333.337.search-card.all.click&vd_source=eed252f33e7aee5137cb946b2562f583)
+ [Dev-C++工具安装及使用教程](https://blog.csdn.net/qq_40160605/article/details/82940228)
+ [微分方程数值解简要](https://zhuanlan.zhihu.com/p/70255604)
+ [Euler法求解微分方程](https://www.bilibili.com/video/BV1v3411b7DK/?spm_id_from=333.788&vd_source=eed252f33e7aee5137cb946b2562f583)

***
