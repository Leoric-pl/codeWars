/*Implement a function that receives two IPv4 addresses, and returns the number of addresses between them (including the first one, excluding the last one).

All inputs will be valid IPv4 addresses in the form of strings. The last address will always be greater than the first one.
Examples

* With input "10.0.0.0", "10.0.0.50"  => return   50 
* With input "10.0.0.0", "10.0.1.0"   => return  256 
* With input "20.0.0.10", "20.0.1.0"  => return  246

*/


function ipsBetween(start, end){
  var ip1=start.split('.')
  var ip2=end.split('.')
  var num1=parseInt(ip1[3])+256*(parseInt(ip1[2])+256*(parseInt(ip1[1])+256*parseInt(ip1[0])))
  console.log(ip1)
  var num2=parseInt(ip2[3])+256*(parseInt(ip2[2])+256*(parseInt(ip2[1])+256*parseInt(ip2[0])))
  return num2-num1
}
