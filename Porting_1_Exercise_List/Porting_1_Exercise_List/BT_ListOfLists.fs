namespace BT
  module ListOfLists =

  let rec flatten (aList1) = 
    if aList1 =[] then []
    else (List.head aList1) @ flatten(List.tail aList1)

