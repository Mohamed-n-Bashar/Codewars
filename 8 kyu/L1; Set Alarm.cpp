bool set_alarm( const bool& employed, const bool& vacation )
{
  return (employed && !vacation);
}


//==============================================================



bool set_alarm(bool employed,bool vacation){
  bool res;
  return !employed ? 0 : vacation ? 0 : 1 ;
}