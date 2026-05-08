#include <iostream>

using value_type = int;

template <typename T> class stack {
private:
  int capacity{0}, top_stack{-1};
  T *stack_data;

public:
  stack(int capacity = 10) { T *stack_data = new T[capacity]; }
  ~stack() { delete[] stack_data; }

  void push(T value) {
    if (isEmpty()) {
      std::cerr << "Erro: stack cheia !" << std::endl;
    } else {
      top_stack++;
      stack_data[top_stack] = value;
    }
  }

  bool pop() {
    if (top_stack < 0) {
      std::cerr << "Erro: stack vazia!" << std::endl;
      return false;
    }
    top_stack--;
    return true;
  }

  T peek() {
    if (isEmpty()) {
      return std::cerr << "Erro: stack vazia!" << std::endl;
    }
    return stack_data[top_stack];
  }

  bool isEmpty() {
    if (top_stack == -1) {
      return true;
    }
    return false;
  }
};
