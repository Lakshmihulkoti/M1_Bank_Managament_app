
# TEST PLAN:
## Table no: High level test plan
|Test ID | Description |  Exp I/P   |   Exp O/P   |   Actual Out   |   Type Of Test   |
|:-------|:------------|:-----------|:------------|:---------------|:-----------------|
|HLR1 | Creation of new account| Name:abc Account Number:123456789 Initia Deposit:1000 |Congratulations !Your account has been created|Congratulations... Your account has been created.|Requirement| 
|HLR2 |Deposit Amount|	1000  | 	Your current available bank balance is 2000|	Your current available bank balance is 2000   |  Requirement based |                   
|HLR3	|withdraw Amount|	3000 |	Sorry, You dont have enough money in your account	|Sorry, You dont have enough money in your account	| Requirement based|
|HHR4|	Entering Password|	qqqrdfcf|	Wrong Password|	Wrong Password	|Boundary based|
|HHR4 |Entering Password	|Lakshmigh|	password match|	password match	|Boundary based|



# Table no: Low level test plan
|Test ID|	Description|	Exp IN	| Exp OUT |	Actual Out	| Type Of Test |
|:-----|:------------|:---------|:--------|:------------|:-------------|
|LLR1	|If user enters wrong Account Number|	000000000	|Wrong account number |	Wrong account number | Requirement  |
|LLR2	|If wrong choice choosen|	7	| Invalid choice	| Exit|	Scenario based|

                                    
                                                                

