std::string to_alternating_case(const std::string& str)
{
  std::string Nstr;
  for(int i = 0; i < str.length() ; i++){
    if(islower(str[i])){
      Nstr += toupper(str[i]);
    }
    else{
      Nstr += tolower(str[i]);
    }
  }
	return Nstr;
}