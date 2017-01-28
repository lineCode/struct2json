

目前类型只支持  long/int/unsigned int/string/vector/自定义

1.使用一种格式


namespace Test
{
    struct A
    {
        int a;
        string b;
        unsigned int c;
        vector<int> d;
    };
    struct B
    {
        A a;
        vector<A> aa;
    };
};

注意要用;结尾

2.生成代码
./struct2json xxx.xxx

3.编译需要rapidjson的支持，把rapidjson的include文件夹放在example目录下


example文件夹有例子
