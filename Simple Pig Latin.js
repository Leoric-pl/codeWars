/*Move the first letter of each word to the end of it, then add "ay" to the end of the word. Leave punctuation marks untouched.
Examples

pigIt('Pig latin is cool'); // igPay atinlay siay oolcay
pigIt('Hello world !');     // elloHay orldway !
*/
function transformWord(str){
  return str.substring(1)+str[0]+'ay'
}

function pigIt(str){
  var tab=str.split(' ')
  var res=""
  for (var i=0;i<tab.length;++i){
    if (tab[i]=='!')res+="! "
    else if (tab[i]=='?')res+="? "
    else res+=transformWord(tab[i])+" "
    
    }
   res=res.substring(0,res.length-1)
  return (res)
}
