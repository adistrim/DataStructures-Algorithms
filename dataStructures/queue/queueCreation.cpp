/*
This program creates a queue of integers using std::queue<int>. It then enqueues three elements onto the queue using
q.push(). It prints the front element using q.front(). It then dequeues two elements from the queue using q.pop(),
prints the front element again, and checks if the queue is empty using q.empty(). Finally, it prints the size of the
queue using q.size().
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
  // Create a queue of integers
  queue<int> q;

  // Enqueue elements onto the queue
  q.push(10);
  q.push(20);
  q.push(30);

  // Print the front element
  cout << "Front element: " << q.front() << endl;

  // Dequeue elements from the queue
  q.pop();
  q.pop();

  // Print the front element again
  cout << "Front element after dequeue: " << q.front() << endl;

  // Check if the queue is empty
  if (q.empty())
  {
    cout << "Queue is empty" << endl;
  }
  else
  {
    cout << "Queue is not empty" << endl;
  }

  // Get the size of the queue
  cout << "Size of queue: " << q.size() << endl;

  return 0;
}
