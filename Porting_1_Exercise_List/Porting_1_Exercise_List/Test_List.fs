module Test_List

open System
open System.Collections
open NUnit.Framework
open NUnit.Framework.Constraints
open MyNamespace.Lists

// ======== Lists 1.1 ============
[<Test>]
let ListPalindromeWithRev() =
  let _inputVal1 = [3;2;3]

  let _expectedVal = true
  let _reachedVal = palindrome _inputVal1

  Assert.AreEqual(_expectedVal,_reachedVal)

[<Test>]
let ListLength() =
  let _inputVal1 = [1;2;3]

  let _expectedVal = 3
  let _reachedVal = length _inputVal1

  Assert.AreEqual(_expectedVal,_reachedVal)

[<Test>]
let ListSquare() =
  let _inputVal1 = [1;2;3;-4]

  let _expectedVal = [1;4;9;16]
  let _reachedVal = sqr _inputVal1

  Assert.AreEqual(_expectedVal,_reachedVal)

