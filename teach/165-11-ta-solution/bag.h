#ifndef BAG_H
#define BAG_H

/***********************************************************
 * Class: Bag
 * Description: Holds ints...for now
 ***********************************************************/
template<class T>
class Bag
{
	private:
		int capacity;
		int size;
		int currentAddIndex;
		T* data;

	public:
		Bag(); // Default constructor
		~Bag(); // Destructor to free any memory
				
		// Getters
		int getCapacity() const { return capacity; }
		int getCount() const { return size; }

		T getItem(int index);
		void addItem(T item);
};

// Recall from the reading that the bodies of template class methods
// must be in the .h file (not in a separate .cpp file).

template<class T>
Bag<T>::Bag()
{
	data = new T[5];
	capacity = 5;
	size = 0;
	currentAddIndex = 0;
}

template<class T>
Bag<T>::~Bag()
{
	if (data != NULL)
	{
		delete[] data;
		data = NULL;
	}
}

template<class T>
T Bag<T>::getItem(int index)
{
	if (index < 0 || index > (size - 1))
	{
		// We should really throw an out_of_range exception here...
		return 0;
	}

	return data[index];
}

template<class T>
void Bag<T>::addItem(T item)
{
	if (size == capacity)
	{
		// The bag is full, we need to increase the capacity

		// first allocate the new array
		capacity *= 2;
		T* tempArray = new T[capacity];

		// now copy everything over
		for (int i = 0; i < size; i++)
		{
			tempArray[i] = data[i];
		}

		// free the old memory
		delete[] data;

		// set data to point to our new array
		data = tempArray;
	}

	// Insert the item into the array and increment the size
	data[currentAddIndex] = item;
	currentAddIndex++;
	size++;
}

#endif

