#include <iostream>
using namespace std;
#define Max_size=10

template<typename T>
class ArrayList
{
private:
    T* Array;
    int index;
    int capacity;
    void Kaydir(int start)
    {
        int iteration = index - start - 1; // capacity=10 start aynı zamanda index demek o yüzden tutmuyor. -1 koymak lazım.
        for (size_t i = start; i<index-1; i++)
        {
            cout << "index " << index << endl;
            cout << "start " << start << endl;
            cout << "i " << i << endl;
            cout << "itera " << iteration << endl;
            Array[i] = Array[i + 1];
        }
    }
    void Nullation()  // boş bırakırsan sonuncu elemanı silecek
    {
        Array[index-1] = 0;
    }
    void Nullation(int sayi )  // boş bırakırsan sonuncu elemanı silecek
    {
        Array[sayi] = 0;
    }
    void Resize()
    {
        int newCapacity = capacity * 2;
        T* tempArray = new T[newCapacity];
        for (size_t i = 0; i < capacity; i++)
        {
            tempArray[i] = Array[i];
        }
        delete[] Array;
        Array = tempArray;
        capacity = newCapacity;
    }
public:

    ArrayList(int capacity = Max_size)
    {
        this->capacity = capacity;
        Array = new T[capacity];
        index = 0;
    }
    void Add(int number)
    {
        if (index >= capacity)
            Resize();
        Array[index] = number;
        ++index;
    }

    void Remove(T value)
    {
        for (size_t i = 0; i < index; i++)
        {
            if (Array[i] == value)
            {
                Kaydir(i);
                Nullation();   
                --index;
                break;
            }
        }
    }
    // void RemovePosition(int position)
    // {

    // }
    void List()
    {
        for (size_t i = 0; i < index; i++)
        {
            cout << Array[i] << " ";
        }
        cout << endl;
    }
    T Get(int position)
    {
        return Array[position];
    }
    int Length()
    {
        return index;

    }
    void Clear()
    {
        delete[] Array;
        Array = new T[capacity];
    }
    ~ArrayList()
    {
        delete[] Array;
    }


};



int main(int agrc, char** argv)
{
    ArrayList<int>* myArray = new ArrayList<int>(10);

    for (size_t i = 0; i < 8; i++)
    {
        myArray->Add(i + 2);
    }

    myArray->List();
    myArray->Remove(4);
    myArray->List();

}