# 斯坦福挑战 Stanford Challenge

在看过 Scott Young 的 MIT Challenge 以后就总琢磨着自己也来一个。正好过去已经打着酱油上过斯坦福的编程方法学、数据库入门课程、以及Coursera上的Machine Learning，加上自己也在斯坦福上过课，比较有感情，所以……事情就这样决定了。

不过，斯坦福的课程资源（主要是视频）没有MIT的丰富，所以部分课程只能用MIT的来取代。我还没决定最后是用斯坦福的习题还是MIT的。对于部分没太多资料的课程，就得依赖教材了。

实在保证不了12个月全职学习，所以试着用18个月挑战一下吧！今天是2017年6月8日。Flag就这么立下了。

目前整理的资源见下：

# 斯坦福计算机系本科生人工智能方向课程资源

Version 1.2 By [Liu Xiaozhen](http://tech.liuxiaozhen.com) Updated on 2017/2/24

2016年8月我研究了一下斯坦福计算机系本科生人工智能方向的课程设置，最近整理出了相关资源作了汇总。本文侧重自然语言处理方向，遵循 [CC BY-NC-SA 3.0](https://creativecommons.org/licenses/by-nc-sa/3.0/deed.zh) 协议。若有意补充完善其他课程信息或报告错误，欢迎[在此](https://www.zybuluo.com/xiaozhenliu/note/665756)批注。

## 毕业要求

[2016-2017 AI Track Program Sheet](http://csmajor.stanford.edu/ProgramSheets/CS_AI_1617PS.pdf)

## 课程解读

### 基础课

- 数学 (26学分＋)： 微积分(MATH41 & 42)、计算数学基础(CS103)、计算机科学家的概率导论(CS109)、两门选修

- 科学（11学分＋）：力学、电磁学、一门选修

- 社会中的科技（略）

- 工程基础(13学分＋)：抽象编程(CS106B/X)、电子学导论(ENGR40)、一门选修

### 核心课程 （15学分）

- 计算机组成与系统 CS107/107E 
- 计算机系统原理 CS110
- 算法设计与分析 CS161

### AI Track 进阶课程（25学分，至少7门）

- 人工智能原理及技术 CS221
- Track B 课程中选两门：CS223A, 224M, 224N, 228,229, 131/231A
- Track B 课程中再选一门，或Track C课程中选一门（略）
- 三门选修：Track B/C 或其他计算机系课程中选


## 学习资源

本列表去除了与AI不相关的通识课程和最基础的微积分等，选修部分是自己研究了可选课程后选择的。总的来说，如果你把这些课全学完，就达到了专业课程部分的要求。Stanford可选的课程很多，在[Program Sheet](http://csmajor.stanford.edu/ProgramSheets/CS_AI_1617PS.pdf)中已有列表，恕不一一列出。

### 基础与核心课程

部分无视频课程添加了来自Coursera, edx 或 MIT OCW 对应课程的链接。

- CS103 计算数学基础: [最新课程](http://web.stanford.edu/class/cs103/), [MIT课程](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-042j-mathematics-for-computer-science-spring-2015/)(含视频)
- CS106B 抽象编程: [课堂录制](https://see.stanford.edu/Course/CS106B), [最新课程](http://web.stanford.edu/class/cs106b/)
- CS107 计算机组成: [最新课程](http://web.stanford.edu/class/cs107/), [MIT课程](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-004-computation-structures-spring-2009/calendar/), [MOOC on edX](https://www.edx.org/course/computation-structures-part-1-digital-mitx-6-004-1x-0)
- CS109: 计算机科学家的概率导论: [最新课程](https://web.stanford.edu/class/cs109/), [MIT课程](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-041sc-probabilistic-systems-analysis-and-applied-probability-fall-2013/), [MOOC on edX](https://www.edx.org/course/introduction-probability-science-mitx-6-041x-2?utm_source=OCW&utm_medium=CHP&utm_campaign=OCW)
- CS161 算法设计与分析: [课堂录制](http://openclassroom.stanford.edu/MainFolder/CoursePage.php?course=IntroToAlgorithms), [最新课程](http://web.stanford.edu/class/cs161/), [MOOC on Coursera](https://www.coursera.org/specializations/algorithms)
- CS110: 计算机系统原理: [最新课程](http://web.stanford.edu/class/cs110/winter-2017/), [MIT课程](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-033-computer-system-engineering-spring-2009/)(含视频)
- EE263: 线性动态系统导论（选修）：[课堂录制](https://see.stanford.edu/Course/EE263), [最新课程](http://ee263.stanford.edu/) （注，此处原为MATH113, 根据Quora上Stanford的学生推荐，这门课对于AI Track更有帮助）
- CS157: 逻辑与自动推理（选修）：[最新课程](http://logic.stanford.edu/classes/cs157/current/), [MOOC on Coursera](https://www.coursera.org/learn/logic-introduction)
- ENGR 62 最优化导论（选修）：[最新课程](http://web.stanford.edu/class/engr62/), [MIT课程](https://ocw.mit.edu/courses/sloan-school-of-management/15-093j-optimization-methods-fall-2009/)


### AI Track 进阶课程（自然语言处理相关）

- CS221: 人工智能原理及技术：[最新课程](http://web.stanford.edu/class/cs221/)
- CS224N: 自然语言处理（选修Track B）[课堂录制](https://see.stanford.edu/Course/CS224N), [最新课程](http://cs224n.stanford.edu)
- CS228: 概率图模型（选修Track B）: [最新课程](http://cs228.stanford.edu/), [MOOC on Coursera](https://www.coursera.org/specializations/probabilistic-graphical-models)
- CS229: 机器学习（选修Track B）:[课堂录制](https://see.stanford.edu/Course/CS229), [最新课程](http://cs229.stanford.edu/)
- CS224U: 自然语言理解（选修）: [课堂录制](https://www.youtube.com/playlist?list=PLfmUaIBTH8exY7fZnJss508Bp8k1R8ASG)（部分）, [最新课程](http://web.stanford.edu/class/cs224u/)
- EE376A: 信息论（选修）: [最新课程](http://web.stanford.edu/class/ee376a/), [MIT课程](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-050j-information-and-entropy-spring-2008/)(含视频)
- CS124/LING180: 从语言到信息（选修）[最新课程](http://web.stanford.edu/class/cs124/)

