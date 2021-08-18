
template <typename T>

class Vector
{
    //data members
private:
    T *arr;
    int cs;
    int cap;

    //constructors
public:
    Vector(int mxS = 1)
    {
        cs = 0;
        cap = mxS;
        arr = new T[cap];
    }

    //functions
    void push_back(const T val)
    {
        // cout<<cap<<" "<<cs<<endl;
        if (cs == cap)
        {
            // cap = cap*2;
            T *oldArr = arr;
            cap = cap * 2;
            arr = new T[cap];
            for (int i = 0; i < cs; i++)
            {
                arr[i] = oldArr[i];
            }
            delete[] oldArr;
        }
        arr[cs] = val;
        cs++;
    }

    void pop_back()
    {
        if (cs >= 0)
        {
            cs--;
        }
    }

    bool isEmpty() const
    {
        if (cs == 0)
        {
            return true;
        }
        return false;
    }

    T last() const
    {
        return arr[cs - 1];
    }

    T front() const
    {
        return arr[0];
    }

    T at(const int i) const
    {
        return arr[i];
    }

    int capacity() const
    {
        return cap;
    }

    int size() const
    {
        return cs;
    }

    //operator overloading
    T operator[](const int i)
    {
        return arr[i];
    }
};