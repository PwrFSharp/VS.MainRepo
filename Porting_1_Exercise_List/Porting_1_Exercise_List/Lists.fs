namespace MyNamespace
  module Lists =

    let palindrome aList = List.rev aList = aList

    let rec length aList = 
      if aList = [] then 0
      else 1 + length (List.tail aList)

    let rec sqr aList = 
      if aList=[] then []
      else ( List.head aList * List.head aList )::sqr(List.tail aList)
