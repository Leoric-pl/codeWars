/*

Write a function that when given a URL as a string, parses out just the domain name and returns it as a string. For example:

* url = "http://github.com/carbonfive/raygun" -> domain name = "github"
* url = "http://www.zombie-bites.com"         -> domain name = "zombie-bites"
* url = "https://www.cnet.com"                -> domain name = cnet"

*/
function domainName(url){
  if (url.startsWith("https://"))url=url.substr(8)
  if (url.startsWith("http://"))url=url.substr(7)
  if (url.startsWith("www."))url=url.substr(4)
  var dotpos=url.indexOf('.')
  return url.substr(0,dotpos)
}
