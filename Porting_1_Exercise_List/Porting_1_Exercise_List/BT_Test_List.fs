namespace BT.Test
  module List =

open System
open System.Collections
open NUnit.Framework
open NUnit.Framework.Constraints
open BT.List

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
let BT_ListAppend() =
  let _inputVal1 = [1;2;3]
  let _inputVal2 = [3;2;1]

  let _expectedVal = [1;2;3;3;2;1]
  let _reachedVal = append (_inputVal1,_inputVal2)

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

