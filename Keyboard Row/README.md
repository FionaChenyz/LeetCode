这个程序完全不是自己写的！！！！

程序中的知识点：

for_each（books.begin(),books.end(),ShowReview）;

//可由下述基于范围的for循环代替：

for(auto &x:books)ShowReview(x);

根据books的类型（vector<Review>）,编译器将推断出x的类型为Review，而循环将依次将books中的每个Review对象传递给ShowReview。

不会用vector，需要一点一点学习！！！！！！！！
--------------------------------------------------

vector(向量): C++中的一种数据结构,确切的说是一个类.它相当于一个动态的数组,当程序员无法知道自己需要的数组的规模多大时,用其来解决问题可以达到最大节约空间的目的.
     
     用法:

          1.文件包含:     

           首先在程序开头处加上#include<vector>以包含所需要的类文件vector

          还有一定要加上using namespace std;

 

          2.变量声明:

               2.1 例:声明一个int向量以替代一维的数组:vector <int> a;(等于声明了一个int数组a[],大小没有指定,可以动态的向里面添加删除)。

               2.2 例:用vector代替二维数组.其实只要声明一个一维数组向量即可,而一个数组的名字其实代表的是它的首地址,所以只要声明一个地址的向量即可,即:vector <int *> a.同理想用向量代替三维数组也是一样,vector <int**>a;再往上面依此类推.
          
          
          3.详细的函数实现功能：其中vector<int> c.

                c.clear()           移除容器中所有数据。

                c.empty()           判断容器是否为空。

                c.erase(pos)        删除pos位置的数据

                c.erase(beg,end)    删除[beg,end)区间的数据

                c.front()           传回第一个数据。

                c.insert(pos,elem)  在pos位置插入一个elem拷贝

                c.pop_back()        删除最后一个数据。
 
                c.push_back(elem)   在尾部加入一个数据。

                c.resize(num)       重新设置该容器的大小

                c.size()            回容器中实际数据的个数。

                c.begin()           返回指向容器第一个元素的迭代器
                
                c.end()             返回指向容器最后一个元素的迭代器
