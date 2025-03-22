int basicOp(char op, int val1, int val2) {
  switch(op){
      case '+':
        return val1+val2;
        break;
      case '-':
        return val1-val2;
        break;
      case '*':
        return val1*val2;
        break;
      case '/':
        return val1/val2;
        break;
  }
}

//================================

int basicOp(char op, int val1, int val2) {
  return op == '+' ? val1+val2 : (op == '-' ? val1-val2 : (op == '*' ? val1*val2 : (val1/val2 )));
}