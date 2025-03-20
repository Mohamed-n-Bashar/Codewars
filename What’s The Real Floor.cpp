int getRealFloor(int f) {
  return f <= 0 ? f : f<13 ? --f : f -=2 ;
}