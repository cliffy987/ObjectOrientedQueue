Object Oriented Queue:

- A simple circular queue system with the ability to enqueue an element to the back of the list, dequeue the front element, see all elements in the queue, and also see the current capacity of the queue.
- When the capacity is reached, the array storing the queue is copied to a new array with twice the capacity.

Time Complexity (where the n input is the size of the queue):

- Enqueue: O(1) generally, O(n) if the capacity is reached. Since the queue keeps track of the index corresponding to the “new front/back” of the queue whenever an element is dequeued/enqueued, this process happens in one step unless the capacity is reached and the queue contents need to be copied over to a new, larger list.
- Dequeue: O(1)

Space Complexity (where the n input is the size of the queue):
- Enqueue: O(1) generally, O(n) if the capacity is reached and the queue contents need to be copied over to a new, larger list.
- Dequeue: O(1)

Using the Queue class:
Opening "9-25-24 Queue Class Homework.sln" in Visual Studio will give you an overview of the project, there are three important files all stored in the "9-25-24 Queue Class Homework" folder;

- MainProgram.cpp; a sample program you can run in Visual Studio that demonstrates enqueue, dequeue, displaying the current size and capacity of the queue, and displaying the contents of the queue in order from front-index to back-index.
- Queue.h; a header file containing the declaration and function definitions for the queue class.
- Queue.cpp; a file containing the code for the queue class functions.

