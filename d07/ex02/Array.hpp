#include <iostream>
#include <string>
#include <exception>

class IndexOutOfBounds : public std::exception
{
	const char* what() const throw()
	{
		return "Index Out Of Bounds";
	};
};

template <typename T>
class Array
{
    private:
        T *elements;
        size_t s;
    public:
        //constructors, destructor
        Array()
        {
            elements = new T[0];
            s = 0;
        };
        Array(unsigned int n)
        {
            elements = new T[n];
            T *tmp = new T();
            for (size_t i = 0; i < n; i++)
                elements[i] = *tmp;
            delete tmp;
            s = n;
        };

        Array(Array const &arr)
        {
            elements = new T[arr.size()];
            s = arr.size();
            for (size_t i = 0; i < s; i++)
                elements[i] = arr[i];
        }
        ~Array()
        {
            delete elements;
        };

        // operators
        T &operator[](size_t idx) const
        {
            if (idx >= s)
                throw IndexOutOfBounds();
            return (elements[idx]);
        }

        Array &operator=(Array const &arr)
        {
            if (elements) delete elements;
            elements = new T[arr.size()];
            s = arr.size();
            for (size_t i = 0; i < s; i++)
                elements[i] = arr[i];
            return (*this);
        }

        size_t  size(void)const  { return s; };

};