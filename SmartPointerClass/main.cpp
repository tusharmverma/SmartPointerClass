#include <string>
#include <iostream>
using namespace std;
/* Reference Count: A simple class for maanging the number of active smart pointers*/
class ReferenceCount
{
private:
    int m_RefCount{ 0 };
public:
    void Increment()
    {
        ++m_RefCount;
    }
    int Decrement()
    {
        return --m_RefCount;
    }
    int GetCount() const
    {
        return m_RefCount;
    }
};
