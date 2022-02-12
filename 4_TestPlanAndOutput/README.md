
# TEST PLAN:


## Table no: High level test plan

|Test ID | Description |  Input   |   Exp O/P   |   Actual Out   |   Type Of Test   |
|:-------|:------------|:-----------|:------------|:---------------|:-----------------|
|HLR1 | Checking customer record| Name:abc   Account Number:123 |   displays the customer records     |      displays the customer records    | Requirement based| 
|HLR2 |Deposit Amount|	1000  | 	Your current available bank balance is 1000|	Your current available bank balance is 1000   |  Requirement based |                   
|HLR3	|withdraw Amount|	3000 |	Sorry, Insufficient balance|Sorry, Insufficient balance	| Requirement based|
|HHR4|	Entering wrong account no|	qqqrdfcf|	Record not found |	Record not found	|Boundary based|
|HHR4 |Entering wrong name	|Lakshmi|	invaild |invaild		|Boundary based|



## Table no: Low level test plan

|Test ID|	Description|	 Input | Exp O/P |	Actual Out	| Type Of Test |
|:-----|:------------|:---------|:--------|:------------|:-------------|
|LLR1	|If user enters wrong Account Number|	000000000	|Record not found |	Record not found | Requirement based |
|LLR2	|If wrong choice choosen|	7	| Invalid choice	| Exit|	Scenario based|


