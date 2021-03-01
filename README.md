# Login-statistic
登录信息统计

------

### 日期    2021/02/26

   今天新建并初始化了git项目，user_login.txt文件只保留了30条记录，方便进行调试。
   添加了单链表相关函数(未完成)，待测试。


------

### 日期    2021/02/27

   今天将单链表的相关函数都写完了，并在在main.c里面添加了测试函数，对链表相关函数进行了测试。
   单链表补充合并结点的函数，即在插入结点时先判断是否已存在该用户的登录信息，若存在则计数加1；否则插入新结点。


------

### 日期    2021/02/28

   从文件中读取信息并将姓名截取出来的函数已完成，并且测试没有问题。
   文件读取姓名后创建链表函数完成，但是在测试时发现产生崩溃，

![](https://raw.githubusercontent.com/Yezi1306/Picture_Store/main/1.png)

​	使用gdb调试后发现了问题所在：链表合并函数中当姓名不存在插入时，应该从尾部插入，而不是从临时结点后面插入， 因为当需要插入时，临时结点为NULL，此时对该结点进行操作就产生了崩溃，现已修复该问题。

![](https://raw.githubusercontent.com/Yezi1306/Picture_Store/main/4.png)

![](https://raw.githubusercontent.com/Yezi1306/Picture_Store/main/2.png)

![](https://raw.githubusercontent.com/Yezi1306/Picture_Store/main/3.png)

   将结果写入文件的函数已完成，并且测试通过。

![](https://raw.githubusercontent.com/Yezi1306/Picture_Store/main/5.png)

   将user_login.txt恢复为10万条数据的文件进行测试，发现登陆次数比正确的少了一次，初始化时应该将次数写为1，而不是0，该问题已修复。

![](https://raw.githubusercontent.com/Yezi1306/Picture_Store/main/6.png)

   冒泡排序完成，并测试通过，结果写入了文件sort.txt。
   快速排序完成，并测试通过，结果写入了文件sort.txt。
   将链表转数组和数组转链表的函数搬到list.c中并加到头文件list.h里面，方便其他文件调用。
   堆排序完成，并测试通过，结果写入了文件sort.txt。


------

### 日期    2021/03/01

   基排序基本完成，还存在问题。
   经过排查发现是基排序中桶的大小设置过小，导致数据没有全部排序完，现已解决。
   所有任务已完成。