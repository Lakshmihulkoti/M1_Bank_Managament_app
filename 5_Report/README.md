

# Requirements:

Bank Management system  : The project helps the user to perform banking activities similar to  real bank. and it is an application for maintanining a persons account in a bank and this system provides the access for  the customer to create an account,deposit/withdraw the cash from his account, and also helps to view the details of transaction.and the data to be stored is Account number,Name,Balance in account and we can Assume maximun of 20 customers in the bank .This particular file contains all the details of requirement collection from user end.

# SWOT ANALYSIS
Strength : with help of customers name  and account number , User can check all the banking Activities.

* checking customers records 
* Depositing Amount :This feature is used to add money to an existing customers account 
  and the added money will be updated in the data base.
* Withdrawing Amount : This features is used to withdraw money from an account.
* viewing tansaction details :An option for checking available balance and also helps to view the details of transaction.

Weakness : If the account number is wrong No activities can be done.

Opportunity : user can Deposit, withdraw amount and can view details.

Threats  : If the account number is wrong No activities can be done.

# 4W's and 1'H

# Who:
Everyone can use the bank management system who want to have benifit of banking.

# What:
Bank management sysem is mainly concerned to Cover the major Banking activities in sigle application.

# When:
User can use this application by the time he decides to deposit/withdraw/view the transaction details.

# Where:
User can can access this application using any C compiler.

# How:
Implementation is done using C language. And also used multifile concept.

# Detail requirements
High Level Requirements:
* System Shall be able to see customer records
* User shall Deposit Money
* User shall Withdraw Money
* User shall View the transaction Details

Low Level Requirements :
* User can have transaction only if user has Account
* System Shall be able to check customer records



# Behavior Diagram:

# High level Design

## figure 1.1 Use Case Diagram

![usecase2](https://user-images.githubusercontent.com/98826329/153616762-4e042ea7-7aa5-427f-8546-23aff43f29b5.png)

# Low Level Design

## Figure 1.2 Activity Diagram

![Activity diagram](https://user-images.githubusercontent.com/98826329/153613389-9dadc25b-f038-4688-833c-f068fcab5847.png)


# Structural Diagram:


## High Level Design

##  Architecture Diagram:

![architeture Daigram](https://user-images.githubusercontent.com/98826329/153602067-234b894d-7efe-4f2f-8c6d-1fe0aeb50b98.png)



## Low Level Design

## Data Flow Diagram:

![dataflow diagram](https://user-images.githubusercontent.com/98826329/153602368-829bf866-742e-468c-b608-c22a80611c5a.png)



# Testplan :



## Table no: High level test plan

|Test ID | Description |  Exp I/P   |   Exp O/P   |   Actual Out   |   Type Of Test   |
|:-------|:------------|:-----------|:------------|:---------------|:-----------------|
|HLR1 | Checking customer record| Name:abc Account Number:123456789  |                         |                                |Requirement| 
|HLR2 |Deposit Amount|	1000  | 	Your current available bank balance is 1000|	Your current available bank balance is 1000   |  Requirement based |                   
|HLR3	|withdraw Amount|	3000 |	Sorry, You dont have enough money in your account	|Sorry, You dont have enough money in your account	| Requirement based|
|HHR4|	Entering wrong account no|	qqqrdfcf|	wrong account no |	invaild	|Boundary based|
|HHR4 |Entering wrong name	|Lakshmi|	wrong name |invaild		|Boundary based|



# Table no: Low level test plan

|Test ID|	Description|	Exp IN	| Exp OUT |	Actual Out	| Type Of Test |
|:-----|:------------|:---------|:--------|:------------|:-------------|
|LLR1	|If user enters wrong Account Number|	000000000	|Wrong account number |	Wrong account number | Requirement  |
|LLR2	|If wrong choice choosen|	7	| Invalid choice	| Exit|	Scenario based|





# Tested Output :


                                    
                                                                













                


   
