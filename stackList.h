template <typename T>
class stackList
{
private:
    int capacity;
    T *buffer;
    int Top;

public:
    stackList();
    ~stackList();
    void push(const T &value);
    void pop();
    bool empty() const;
    int size() const;
    T &top() const;
};

// CONSTRUCTOR
template <typename T>
stackList<T>::stackList() : capacity(4), Top(-1)
{
    buffer = new T[capacity];
}

// DESTRUCTOR
template <typename T>
stackList<T>::~stackList()
{
    delete[] buffer;
    buffer = nullptr;
}

// Get size of list
template <typename T>
int stackList<T>::size() const
{
    return Top + 1;
}

// Get latest element
template <typename T>
T &stackList<T>::top() const
{
    return buffer[Top];
}

// Check if list is empty
template <typename T>
bool stackList<T>::empty() const
{
    return Top == -1;
}

// add element to stack
template <typename T>
void stackList<T>::push(const T &value)
{
    ++Top;
    if (capacity == Top)
    {
        capacity = capacity * 2;
        T *temp = new T[capacity];

        for (int i = 0; i < Top; i++)
            temp[i] = buffer[i];

        delete[] buffer;
        buffer = temp;
    };

    buffer[Top] = value;
}

// remove element from stack
template <typename T>
void stackList<T>::pop()
{

    if (Top == -1)
        return;

    buffer[Top] = {};
    Top--;
}
