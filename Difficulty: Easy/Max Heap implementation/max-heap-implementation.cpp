class maxHeap {
    private:
      priority_queue<int> heap; // max-heap by default

    public:
      // Insert x into the heap
      void push(int x) { 
          heap.push(x); 
      }
      // Remove the top (maximum) element
      void pop() {
          if (!heap.empty()) {
              heap.pop();
          }
      }
      // Return the top element or -1 if empty
      int peek() {
          if (heap.empty())
              return -1;
          return heap.top();
      }
      // Return the number of elements in the heap
      int size() { 
          return heap.size(); 
      }
  };