namespace BT.Test
  module List =

open System
open System.Collections
open NUnit.Framework
open NUnit.Framework.Constraints
open BT.List
open BT.List_Checkers

// ======== Lists 1.1 ============
[<Test>]
let BT_ListPalindromeWithRev() =
  let _inputVal1 = [3;2;3]

  let _expectedVal = true
  let _reachedVal = palindrome _inputVal1

  Assert.AreEqual(_expectedVal,_reachedVal)

[<Test>]
let BT_ListLength() =
  let _inputVal1 = [1;2;3]

  let _expectedVal = 3
  let _reachedVal = length _inputVal1

  Assert.AreEqual(_expectedVal,_reachedVal)

[<Test>]
let BT_ListSquare() =
  let _inputVal1 = [1;2;3;-4]

  let _expectedVal = [1;4;9;16]
  let _reachedVal = sqr _inputVal1

  Assert.AreEqual(_expectedVal,_reachedVal)

[<Test>]
let BT_ListAppendToList() =
  let _inputVal1 = [1;2;3]
  let _inputVal2 = [3;2;1]

  let _expectedVal = [1;2;3;3;2;1]
  let _reachedVal = appendLists (_inputVal1,_inputVal2)

  Assert.AreEqual(_expectedVal,_reachedVal)

[<Test>]
let BT_ListEnqueue() =
  let _inputVal1 = [1;2;3]
  let _inputVal2 = [4]

  let _expectedVal = [1;2;3;4]
  let _reachedVal = enqueue (_inputVal1,_inputVal2)

  Assert.AreEqual(_expectedVal,_reachedVal)

[<Test>]
let BT_ListCounter() =
  let _inputVal1 = 1
  let _inputVal2 = [1;2;1]
  
  let _expectedVal = 2
  let _reachedVal = count ( _inputVal1,_inputVal2 )

  let _reachedLogic = _expectedVal = _reachedVal

  Assert.True(_reachedLogic)

[<Test>]
let BT_ListSummer() =
  let _inputVal1 = [5.;3.;2.]
  
  let _expectedVal = 10.
  let _reachedVal = sum _inputVal1

  let _reachedLogic = _expectedVal = _reachedVal

  Assert.True(_reachedLogic)

[<Test>]
let BT_ListValuesLowerComparator() =
  let _inputVal1 = [1;2;3;4]
  let _inputVal2 = 5
  
  let _expectedVal = true
  let _reachedVal = areAllLowerThan ( _inputVal1,_inputVal2 )

  let _reachedLogic = _expectedVal = _reachedVal

  Assert.True(_reachedLogic)

[<Test>]
let BT_ListFactoryBetweenScopes() =
  let _inputVal1 = 4
  let _inputVal2 = 8
  
  let _expectedVal = [4;5;6;7;8]
  let _reachedVal = generateAllInclusive ( _inputVal1,_inputVal2 )

  let _reachedLogic = _expectedVal = _reachedVal

  Assert.True(_reachedLogic)

[<Test>]
let BT_ListOfStringsJoiner() =
  let _inputVal1 = ["To"; "jest"; "napis"]
  let _inputVal2 = "-"
  
  let _expectedVal = "To-jest-napis"
  let _reachedVal = toString ( _inputVal1,_inputVal2 )

  printfn "%s" _expectedVal
  printfn "%s" _reachedVal

  let _reachedLogic = _expectedVal = _reachedVal

  Assert.True(_reachedLogic)

