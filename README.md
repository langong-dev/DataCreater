# C++ DataCreater

> 
> 由蓝光科技开发。
> 

# 更新日志

[更新日志见 5+1CenterBlog](http://victorwoo.synology.me:516/)

# 如何使用 DataCreater

1. 将```head.hpp```中的```filename```数组赋予您希望生成数据后的文件名
1. 将您要生成数据的c++代码复制到```creat_out.hpp```中，并将```main```函数改名为```creat_output```
2. 将您要生成数据的代码的输入部分放到```creat_in.hpp```中，并将输入语句改为输出语句
3. 将```creat_in.hpp```中所要输出（原输入部分）的变量赋予随机数，我们为您提供随机数函数```maxrand()```、```betrand()```。

# 随机数函数

## maxrand(int high)

您需要填写参数high，代表最大是多少，maxrand将返回一个小于high的```int```整数。

## betrand(int low,int high)

您需要填写参数low和high，分别代表最小数、最大数，betrand将返回一个大于low且小于high的```int```整数。

