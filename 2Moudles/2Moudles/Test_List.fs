﻿module Test_List

open System
open System.Collections
open NUnit.Framework
open NUnit.Framework.Constraints

// ======== Lists 1.1 ============
[<Test>]
let TestOfReversingList() =
  let _inputVal1 = [1;2;3]

  let _expectedVal = [3;2;1]
  let _reachedVal = Lists.palindrome _inputVal1

  Assert.AreEqual(_expectedVal,_reachedVal)

