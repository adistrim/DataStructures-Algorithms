/*
This program creates a stack of integers using std::stack<int>. It then pushes three elements onto the stack using
s.push(). It prints the top element using s.top(). It then pops two elements from the stack using s.pop(), prints the
top element again, and checks if the stack is empty using s.empty(). Finally, it prints the size of the stack using
s.size().
*/

#include <iostream>
#include <stack>

using namespace std;

int main()
{
  // Create a stack of integers
  stack<int> s;

  // Push elements onto the stack
  s.push(10);
  s.push(20);
  s.push(30);

  // Print the top element
  cout << "Top element: " << s.top() << endl;

  // Pop elements from the stack
  s.pop();
  s.pop();

  // Print the top element again
  cout << "Top element after pop: " << s.top() << endl;

  // Check if the stack is empty
  if (s.empty())
  {
    cout << "Stack is empty" << endl;
  }
  else
  {
    cout << "Stack is not empty" << endl;
  }

  // Get the size of the stack
  cout << "Size of stack: " << s.size() << endl;

  return 0;
}
