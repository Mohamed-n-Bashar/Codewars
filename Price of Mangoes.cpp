int mango(int quantity, int price)
{
  int totalPrice = 0;
  for(int i=1 ; i <= quantity ; i++){
    if(i % 3 == 0)
      continue;
    totalPrice += price;
  }
  return totalPrice;
}

//=============================================================
//=====================| Better solution |====================
//=============================================================

int mango(int quantity, int price)
{
    return (quantity - quantity/3)*price;
}