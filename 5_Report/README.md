# REPORT :
this is C programming Bank management application Project.The project helps the user to perform banking activities similar to  real bank.this system provides the access for  the customer to create an account,deposit/withdraw the cash from his account

# Description :

Bank Management system  :  and it is an application for maintanining a persons account in a bank and this system provides the access for  the customer to create an account,deposit/withdraw the cash from his account, and also helps to view the details of transaction.and the data to be stored is Account number,Name,Balance in account and we can Assume maximun of 20 customers in the bank .This particular file contains all the details of requirement collection from user end.

# Detail requirements
## High Level Requirements:

 |--ID| Description |	Status (Implemented/Future) |
 |:---------------|:----------------------------|:-----------|
 |HLR1| System Shall be able to see customer records  |	Implemented |
 |HLR2|	User shall Deposit Money	 | Implemented |
 |HLR3|	User shall Withdraw Money	| Implemented |
 |HLR4| User shall View the transaction Details |	Implemented |

## Low Level Requirements :
|-- ID | Description	| Status (Implemented/Future) |
|:---------------|:----------------------------|:------------|
| LLR1 |	User can have transaction only if user has Account |Implemented |
| LLR2| System Shall be able to check customer records |Implemented |



# SWOT ANALYSIS
Strength : 
* with help of customers name  and account number , User can check all the banking Activities.
* user can perform safe transaction.

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



# Behavior Diagram:

# High level Design

## figure 1.1 Use Case Diagram

![usecase2](https://user-images.githubusercontent.com/98826329/153616762-4e042ea7-7aa5-427f-8546-23aff43f29b5.png)

# Low Level Design

## Figure 1.2 Activity Diagram

![Activity diagram](https://user-images.githubusercontent.com/98826329/153613389-9dadc25b-f038-4688-833c-f068fcab5847.png)


# Structural Diagram:


## High Level Design

## Figure 2.1 Architecture Diagram:

![architeture Daigram](https://user-images.githubusercontent.com/98826329/153602067-234b894d-7efe-4f2f-8c6d-1fe0aeb50b98.png)



## Low Level Design

## Figure 2.2 Data Flow Diagram:

![dataflow diagram](https://user-images.githubusercontent.com/98826329/153602368-829bf866-742e-468c-b608-c22a80611c5a.png)



# Testplan :



## Table no: High level test plan

|Test ID | Description |  Input   |   Exp O/P   |   Actual Out   |   Type Of Test   |
|:-------|:------------|:-----------|:------------|:---------------|:-----------------|
|HLR1 | Checking customer record| Name:abc   Account Number:123 |   display the customer records     |      display the customer records    | Requirement based| 
|HLR2 |Deposit Amount|	1000  | 	Your current available bank balance is 1000|	Your current available bank balance is 1000   |  Requirement based |                   
|HLR3	|withdraw Amount|	3000 |	Sorry, Insufficient balance|Sorry, Insufficient balance	| Requirement based|
|HHR4|	Entering wrong account no|	qqqrdfcf|	Record not found |	Record not found	|Boundary based|
|HHR4 |Entering wrong name	|Lakshmi|	invaild |invaild		|Boundary based|



# Table no: Low level test plan

|Test ID|	Description|	Input	| Exp OUT |	Actual Out	| Type Of Test |
|:-----|:------------|:---------|:--------|:------------|:-------------|
|LLR1	|If user enters wrong Account Number|	000000000	|Record not found |	Record not found | Requirement based |
|LLR2	|If wrong choice choosen|	7	| Invalid choice	| Exit|	Scenario based|





# Tested Output :


## First output after running makefile

![IMG-20220212-WA0134](https://user-images.githubusercontent.com/98826329/153706710-0d68dd7e-e6a3-47a3-9940-dbb0d4fcf259.jpg)

## Storing the customers data and by entering 1 ,it displaying the customers records

![IMG-20220212-WA0144](https://user-images.githubusercontent.com/98826329/153709831-b51b6d04-8dfc-4d8e-8b28-e10a136c2ba3.jpg)


## Deposit Amount :
![IMG-20220212-WA0143](https://user-images.githubusercontent.com/98826329/153709882-4edba1ef-d740-463b-ac01-983cb593d3f0.jpg)

## Withdrawing Amount:
![IMG-20220212-WA0145](https://user-images.githubusercontent.com/98826329/153709939-082d6be4-2c9c-41ae-a3bd-98f5030909ef.jpg)

# Viewing (Searching )the data :
![IMG-20220212-WA0146](https://user-images.githubusercontent.com/98826329/153709987-929522ad-0cec-476c-9745-fcb7c319e031.jpg)

# withdrawing the amount more than balance:
![insuffient ](https://user-images.githubusercontent.com/98826329/153712508-0010a17e-bc5e-4d6a-b9f0-4d777e5fe584.png)

# Entering the unsaved record :
![record not found](https://user-images.githubusercontent.com/98826329/153712554-fb9d1417-9c3b-4399-b267-fa780a2c3f60.png)


## Resources: 

[Reference_1](https://www.cselectricalandelectronics.com/c-programming-projects-with-source-code-coding-projects-ideas/)

[Reference_2](https://www.codewithc.com/mini-project-in-c-bank-management-system/)













## References 

https://youtu.be/Oh3-4_evGNE
https://www.cselectricalandelectronics.com/c-programming-projects-with-source-code-coding-projects-ideas/



                                    
                                                                













                


   
