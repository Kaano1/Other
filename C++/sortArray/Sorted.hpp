#include <iostream>
#include <string.h>
using namespace std;

class Array
{
	protected:
		int	*data;
		int	size;
		int	capacity;
		int	find_index(int number, int b = 0);
	public:
		Array(int user_capacity = 5);
		~Array();
		Array(const Array& oth);
		int	get_capacity() const
		{
			return (capacity);
		}
		int	get_size() const
		{
			return (size);
		}
		void	addItem(int number);
		void	PrintItems();
		void	removeItemIndex(int index);
		void	removeItem(int	number);
		void	findElement(int number, int index = 0);
};

class unsorted : public Array
{
	public:
		unsorted(int user_capacity = 5) : Array(user_capacity) {};
		unsorted(const unsorted& oth) : Array(oth) {};
		void	PrintItems()
		{
			cout << "Unsorted Array" << endl;
			Array::PrintItems();
		}
};

class sorted: public Array
{
	public:
		sorted(int capacity = 5) : Array(capacity) {};
		sorted(const sorted& oth) : Array(oth) {};
		void	addItem(int number)
		{
			int	i;

			if (size == capacity)
			{
				int	*tmp = new int[capacity * 2];
				for (int i = 0; i < size; i++)
					tmp[i] = data[i];
				delete[] data;
				data = tmp;
				capacity *= 2;
			}
			for (i = size - 1; i >= 0 && data[i] > number; i--)
			{
				data[i + 1] = data[i];
			}
			data[i + 1] = number;
			size++; 
		}
		void	PrintItems()
		{
			cout << "Sorted Array" << endl;
			Array::PrintItems();
		}
};

Array::Array(int user_capacity)
{
	capacity = user_capacity;
	size = 0;
	data = new int[capacity];
	cout << "constructor created " << capacity << " data" << endl;
}

Array::~Array()
{
	delete[] data;
	cout << "Destroyed Array" << endl;
}

Array::Array(const Array& copy)
{
	capacity = copy.capacity;
	size = copy.size;
	data = new int[capacity];
	for (int i = 0; i < size; i++)
		data[i] = copy.data[i];
	cout << "Array copied to target" << endl;
}

void	Array::addItem(int	number)
{
	if (size == capacity)
	{
		int	*tmp_data = new int[capacity * 2];
		for (int i = 0; i < size; i++)
			tmp_data[i] = data[i];
		delete[] data;
		data = tmp_data;
		capacity *= 2;
	}
	data[size] = number;
	size++;
}

void	Array::PrintItems()
{
	if (size != 0)
	{
		for (int i = 0; i < size; i++)
			cout << data[i] << "-";
	}
	cout << "\n" << "capacity: " << capacity << " size:" << size << endl;
}

void	Array::removeItemIndex(int index)
{
	if (index < 0 || index >= size)
	{
		cout << "Error! No item at the array " << index << endl;
		return ;
	}
	int	Item = data[index];
	for (int i = index; i < size; i++)
		data[i] = data[i + 1];
	size -= 1;
	cout << "Items: " << Item << " is deleted" << endl;
}

void	Array::removeItem(int number)
{
	int counter = 0;

	for (int i = 0; i < size; i++)
	{
		if (data[i] == number)
		{
			for (int j = i; j < size; j++)
				data[j] = data[j + 1];
			counter += 1;
			i--;
		}
	}
	size -= counter;
	cout << counter << " Items (" << number << ")" << " are deleted from the array" << endl; 
}

int	Array::find_index(int number, int index)
{
	for (int i = index; i < size; i++)
	{
		if (data[i] == number)
			return (i);
	}
	return (-1);
}

void	Array::findElement(int number, int index)
{
	int	result = find_index(number, index);

	if (result != -1)
		cout << number << " found at the index. index: " << result << endl;
	else
		cout << "not found at the index" << endl;
}
