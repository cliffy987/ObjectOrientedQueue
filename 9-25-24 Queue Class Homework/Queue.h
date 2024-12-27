class Queue
{
private:
	int* data;
	int size;
	int capacity;
	int front;
	int back;
	static const int initialCapacity = 20;

public:
	Queue();
	~Queue();

	int enqueue(int newData);
	int dequeue();
	int getSize();
	int getCapacity();
	int display();
};