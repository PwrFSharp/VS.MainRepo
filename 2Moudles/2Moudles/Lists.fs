namespace MyNamespace
  module Lists =

  let palindrome aList = List.rev aList

  let rec length aList = 
    if aList = [] then 0
    else 1 + length (List.tail aList)
