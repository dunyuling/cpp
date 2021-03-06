#ifndef ARRAY_H
#define ARRAY_H

class Array
{
public:
    Array(int count);
    Array(const Array &arr);
    ~Array();
    void setCount(int count);
    int getCount(); 
    void printAddr();
    void printArr();
    void changeArrLast(int x);
private:
    int m_iCount;
    int *m_pArr;
};
#endif
