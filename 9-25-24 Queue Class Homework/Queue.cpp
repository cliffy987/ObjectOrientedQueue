#include <stdlib.h>
#include <stdio.h>
#include "Queue.h";

//Constructer
Queue::Queue() {
	capacity = initialCapacity;
	data = (int*) malloc(capacity * sizeof(int));
	size = 0;
	front = -1;
	back = -1;
}

//Destructer (free allocated memory to allow other objects to use it)
Queue::~Queue() {
	free(data);
}

//Runs in O(n) time complexity if the queue capacity has been reached, otherwise runs in O(1) time complexity.
int Queue::enqueue(int newData) {

	//Check if capacity increase is needed
	if (size >= capacity) {

		//New array's capacity will be twice the current capacity; good balance between memory usage and not having to refactor the array too often.
		int oldCapacity = capacity;
		capacity *= 2;
		int* _data = (int*)malloc(capacity * sizeof(int));

		//Get elements starting from the front of the old array and add them to the new array starting from index 0.
		int i = front;
		int index = 0;
		_data[index] = data[i];
		if (size > 1) {
			do {
				i++;
				index++;
				if (i >= oldCapacity)
					i = 0;
				_data[index] = data[i];
			} while (i != back);
		}

		//Set front and back to their proper positions on the new array
		front = 0;
		back = size - 1;

		//Free the old array and set the new array as data
		free(data);
		data = _data;
	}

	//Enqueue functionality

	if (size == 0) {
		//Empty behavior; initialize front and back, then add new element to the back index
		front = 0;
		back = 0;
		data[back] = newData;
	}
	else {
		//Normal behavior; increment back, wrap if neccesary, then add the new element to the back index
		back++;
		if (back >= capacity)
			back = 0;
		data[back] = newData;
	}

	size += 1;

	return 0;
}

//Runs in O(1) time complexity.
int Queue::dequeue() {
	//Return a garbage value if the queue is empty.
	if (size <= 0)
		return -1;

	//Save the dequeue value to return.
	int value = data[front];

	size--;

	if (size == 0) {
		//If the list is empty, set front and back as their "empty list" values.
		front = -1;
		back = -1;
	}
	else {
		//If not empty, set front to the next-oldest element in the queue.
		front++;
		if (front >= capacity)
			front = 0;
	}

	return value;
}

//Getters
int Queue::getSize() {
	return size;
}

int Queue::getCapacity() {
	return capacity;
}

//For debug purposes
//Runs in O(n) time complexity
int Queue::display() {

	//Return a garbage value if the queue is empty.
	if (size <= 0)
		return -1;
	
	//Print values starting from the front index of the queue.
	int i = front;
	printf("{%d", data[i]);
	if (size > 1) {
		do {
			i++;
			if (i >= capacity)
				i = 0;
			printf(", %d", data[i]);
		} while (i != back);
	}
	printf("}");

	return 0;
}