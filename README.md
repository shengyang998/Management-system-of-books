Management-system-of-books
==========================

This is my first project at college. It is built to manage books. It is built by Visual Studio community


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

班级：****

姓名：******

学号：************

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

程序将以链表的方式实现如下功能：

	1、从文件读取书籍信息（包括ISBN、类别、书名、作者、售价、销量）

	2、书籍的查找、插入、删除

	3、记录并处理（排序）书籍按照(销量、售价)

	4、按照特定格式输出书籍信息到文件

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

各文件作用：

	main.h：
		包含BOOK结构的定义
		include所有需要的头文件

	main.cpp：
		略

	menu.cpp：
		菜单

	ifempty.cpp：
		包含函数ifempty()用来判断链表是否为空

	input.cpp：
		包含函数input()用来从文件读入数据构建链表

	insert.cpp：
		包含函数insert()用来在链表中插入元素

	search.cpp：
		包含函数search()用来搜索匹配的书本

	sort.cpp：
		包含函数sortbyprice()用来按照价钱从小到大排序（简单选择排序）
				sortbySV()用来按照销量排序（简单选择排序）

	chooseprice.cpp：
		包含函数choosePrice()用来选择出所要求的价格区间的书本并将选择出来的书本
		保存至vector容器

	output.cpp：
		包含函数output()和一个重载，用来输出链表或者输出vector容器中的数据到文件


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

备注：

	输入文件格式：
				ISBN Category BookName AuthorName Price SalesVolume*12

	输出文件格式：
				ISBN Category BookName AuthorName Price TotalSalesVolume

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

起始日期：

	2014年12月19日

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

终止日期：
	
	2014年12月29日

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

其他备注：

	使用了部分C++11标准的特性，旧版编译器可能报错。

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
