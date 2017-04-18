//
//  main.cpp
//  set
//
//  Created by 郭悟清 on 2017/4/16.
//  Copyright © 2017年 郭悟清. All rights reserved.
//

#include <iostream>
#include <set>
using namespace std;

template <class T>
void Print(T first,T last)
{
    for(;first!=last;++first)
        cout<<*first<<" ";
    cout<<endl;
}
class A
{
private:
    int n;
public:
    A(int n_){n=n_;}
    friend bool operator<(const A &a1,const A &a2)//注意是bool类型
    {
        return (a1.n%10)<(a2.n%10);
    }
    friend ostream &operator<<(ostream &o,const A &a2)
    {
        o<<a2.n;
        return o;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    set<A> a;
    int a_[5]={12,14,44,56,67};
    a.insert(a_,a_+5);
    Print(a.begin(), a.end());//输出结果为：12，14，56，67
    return 0;
}
