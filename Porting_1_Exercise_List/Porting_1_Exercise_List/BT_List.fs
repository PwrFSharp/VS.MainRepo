namespace BT
module List =
    let palindrome aList1= List.rev aList1= aList1

    let rec length aList1= 
      if aList1= [] then 0
      else 1 + length (List.tail aList1)

    let rec sqr aList1= 
      if aList1=[] then []
      else ( List.head aList1* List.head aList1)::sqr(List.tail aList1)

    let rec append (aList1, aList2) = 
      if aList1=[] then aList2  
      else List.head aList1 :: append(List.tail aList1, aList2)

    let rec count (aObject,aList1) = 
      if aList1=[] then 0
      else if List.head aList1= aObject then 1+count(aObject,List.tail aList1)
      else count(aObject,List.tail aList1)

    let rec sum aList = 
      if aList = [] then 0.
      else List.head aList + sum (List.tail aList)

module List_Checkers =
      let rec AreAllLowerThan(aList1, aVal) = 
        if aList1 = [] then true
        else if ( ( List.head aList1 ) < aVal ) then true && AreAllLowerThan(List.tail aList1, aVal)
        else false
        