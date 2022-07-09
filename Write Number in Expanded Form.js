/*
Write Number in Expanded Form

You will be given a number and you will need to return it as a string in Expanded Form. For example:

expandedForm(12); // Should return '10 + 2'
expandedForm(42); // Should return '40 + 2'
expandedForm(70304); // Should return '70000 + 300 + 4'

NOTE: All numbers will be whole numbers greater than 0.

If you liked this kata, check out part 2!!

*/


function expandedForm(num) {
  var res="";
  res+=num.toString()[0]
  for(var i=0;i<num.toString().length-1;++i)
    res+="0"
  for(var i=1;i<num.toString().length;++i)
    if(num.toString()[i]!="0")
      {
        res+=" + "
        res+=num.toString()[i]
  for(var k=i;k<num.toString().length-1;++k)
    res+="0"
      }
  return res      
}
