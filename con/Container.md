STL容器满足：
1. 提供"value"语意,而非"reference"语意
2. 所有元素形成一个次序(order)
3. 各项操作一般并非绝对安全

共通操作：
1. initialization
    default + copy + 析构
    ConType c           产生一个未含任何元素的空容器
    ConType c1(c2)      产生一个同型容器
    ConType c(beg,end)  复制[beg;end]区间内的任何元素，作为容器处值
    c.~ConType()        删除所有元素，释放内存
    c.size()            返回容器中的元素数量
    c.empty()           判断是否为空（相当于size()==0,但可能更快）
    c.max_size()        返回元素的最大可能数量
    c1 == c2
    c1 != c2
    c1 < c2
    c1 > c2
    c1 <= c2
    c1 >= c2
    c1 = c2
    c1.swap(c2)
    swap(c1,c2)
    c.begin()   c.end()             c.rbegin()       c.rend()
    c.insert()  c.insert(pos,elem)  c.erase(beg,end) c.clear()
    c.get_allocator()       返回容器的内存模型(memory model)











