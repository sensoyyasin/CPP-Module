#ifndef STACK_H
#define STACK_H

#include <deque>

template <typename T>
class Stack
{
public:
    T& top()
    {
        //Stack'in en üstündeki elemanı getirir.
        return stack.front();
    }
    void push(const T &pushValue)
    {
        //Stacke yeni eleman ekler.
        stack.push_front(pushValue);
    }
    void pop()
    {
        //stackten eleman çıkarır.
        stack.pop_front();
    }
    bool isEmpty() const
    {
        return stack.empty();
    }
    size_t size() const
    {
        return stack.size();
    }
    private:
        std::deque <T> stack;
};


#endif