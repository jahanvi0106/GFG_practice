class myQueue {
        int* queue;
        int front, rear;
        int max_size;
  public:
    myQueue(int n) {
        max_size=n;
        front=0;
        rear=0;
        queue = new int[n];
    }

    bool isEmpty() {
        if(rear==front)
            return true;
        else
            return false;
    }

    bool isFull() {
        if(rear==max_size)
            return true;
        else
            return false;
    }

    void enqueue(int x) {
        if(isFull())
            return;
        queue[rear++]=x;
    }

    void dequeue() {
        if(isEmpty())
            return;
        for(int i=1; i<rear; i++){
            queue[i-1]=queue[i];
        }
        rear--;
    }

    int getFront() {
        if(isEmpty())
            return -1;
        return queue[0];
    }

    int getRear() {
        if(isEmpty())
            return -1;
        return queue[rear-1];
    }
};