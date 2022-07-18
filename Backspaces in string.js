/*
Assume "#" is like a backspace in string. This means that string "a#bc#d" actually is "bd"

Your task is to process a string with "#" symbols.
Examples

"abc#d##c"      ==>  "ac"
"abc##d######"  ==>  ""
"#######"       ==>  ""
""              ==>  ""
*/

function cleanString(s) {
  var res=""
  for (var i=0;i<s.length;i++)
  {
    if (s[i]=='#')
      {if (res.length>0)
        res=res.substring(0,res.length-1)
      }
    else res+=s[i]
  }
  return res
}
