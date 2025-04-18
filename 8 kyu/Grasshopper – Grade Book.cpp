char getGrade(int a, int b, int c) {
  int average = (a+b+c)/3;
  switch(average){
    case 90 ... 100: return 'A';
    case 80 ... 89: return 'B';
    case 70 ... 79: return 'C';
    case 60 ... 69: return 'D';
    default: return 'F';
  }
}