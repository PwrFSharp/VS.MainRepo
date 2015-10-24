﻿module Test_List

open System
open System.Collections
open NUnit.Framework
open NUnit.Framework.Constraints
open MyNamespace.Lists

// ======== Lists 1.1 ============
[<Test>]
let ListPalindromeWithRev() =
  let _inputVal1 = [1;2;3]

  let _expectedVal = [3;2;1]
  let _reachedVal = palindrome _inputVal1

  Assert.AreEqual(_expectedVal,_reachedVal)

[<Test>]
let TestOfLengthList() =
  let _inputVal1 = [1;2;3]

  let _expectedVal = 3
  let _reachedVal = length _inputVal1

  Assert.AreEqual(_expectedVal,_reachedVal)

[<Test>]
let TestOfReversingList() =
  let _inputVal1 = [1;2;3]

  let _expectedVal = [3;2;1]
  let _reachedVal = palindrome _inputVal1

  Assert.AreEqual(_expectedVal,_reachedVal)