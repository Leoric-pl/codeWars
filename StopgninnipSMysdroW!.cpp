/*
Write a function that takes in a string of one or more words, and returns the same string, but with all five or more letter words reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.

Examples: spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw" spinWords( "This is a test") => returns "This is a test" spinWords( "This is another test" )=> returns "This is rehtona test"
*/
std::string reverse(std::string word)
  {std::string Nword="";for(int a=word.length()-1;a>=0;a--){Nword+=word[a];}return Nword;}
std::string spinWords(const std::string &str)
{std::string res="";
 int space=str.find(" ");
 if(space<0&&str.length()>=5)return reverse(str);
 else if(space<0&&str.length()<5)return str;
  else{std::string str1=str;
       std::vector<std::string> words;
    while (space>0){words.push_back(str1.substr(0,space));str1=str1.substr(space+1,str1.length());space=str1.find(" ");}
       words.push_back(str1);
    for(unsigned long i=0;i<words.size();i++){if(words[i].length()>=5)res+=reverse(words[i]);else res+=words[i];res+=" ";}
       res=res.substr(0,res.length()-1);
      }
  return res;
}
