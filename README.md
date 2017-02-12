#ThreadStudyQt

基于Qt5.7 mingw windows开发

由Qt来处理任务，用的是队列机制
TestThread 是线程类与工作类的整合
WorkObject 是费时工作类
例子中，将WorkObject对象放到TestThread对象里面的QThread线程中
WorkObject对象与QThread对象 用信号与槽合作
处理费时的操作
另外WorkObject对象下面的一些参数
可直接用函数调用对其进行操作
例如：void setOneData(QString data);

注：
Sleep(5000);为windows下面  用于延时5秒
