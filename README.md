Object Oriented Queue:
•	A simple circular queue system with the ability to enqueue an element to the back of the list, dequeue the front element, see all elements in the queue, and also see the current capacity of the queue.
•	When the capacity is reached, the array storing the queue is copied to a new array with twice the capacity.

Time Complexity (where the n input is the size of the queue):
•	Enqueue: O(1) generally, O(n) if the capacity is reached. Since the queue keeps track of the index corresponding to the “new front/back” of the queue whenever an element is dequeued/enqueued, this process happens in one step unless the capacity is reached and the queue contents need to be copied over to a new, larger list.
•	Dequeue: O(1)

Space Complexity (where the n input is the size of the queue):
•	Enqueue: O(1) generally, O(n) if the capacity is reached and the queue contents need to be copied over to a new, larger list.
•	Dequeue: O(1)

Running the program:
•	An example main program is included to demonstrate how the queue behaves; to run this sample program, simply open the project file in an IDE such as Visual Studio and run the “QueueMain.cpp” file.

