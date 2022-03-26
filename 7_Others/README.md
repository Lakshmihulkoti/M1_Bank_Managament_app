## MULTIPLE INPUT DC-DC CONVERTER TOPOLOGY FOR HYBRID ENERGY SYSTEM 
 # Abstract :
 
Power electronics DC-DC converters are being widely used in various applications like hybrid Vehicles , aerospace, satellite applications and portable electronics. 
The proposed multiple-input DC/DC converter is proficient for energy diversification from renewable and storage energy sources individually or simultaneously. 
* The major advantage of system is that when solar and wind power production are used together, the power producing capacity of the system is enhanced. When there is no sun, there could be  plenty of wind and the vice-versa could also be true. Additionally, the size of battery storage can also be reduced because we get day and night production of power by relying on solar and/or wind and this project is implemnted using MATLLAB simulink Software.

 # Introduction :
 The system consists of several input energy sources, integrated through a multi-input 
power electronics converters that could accommodate a variety of input sources and 
combine their advantages to deliver a controlled output for diversified applications. 
These are further divided into two categories. (a)isolated 
and (b) non-isolated converters.
* Isolated converters are used to isolate the low voltage DC side from high voltage side to 
avoid shock hazard, to achieve high voltage conversion, for voltage matching and to avoid 
large current/voltage rating semiconductor devices.
* High frequency transformers are used for this purpose. But the disadvantage of this system 
is that it needs to accommodate a transformer core which makes it bulky and in terms 
increases the cost.
* The non-isolated converters on the other hand are simple in structure and are used where 
the galvanic insulation between source and load not required.
 
## Requirements :

# Requirements :
## High level Requirements :

|    ID      |              Description                  |  
|-------------------------------|------------------------------------------|
| HLR1 |  It shall combining the Hybrid Energy systems |  
| HLR2 | It shall reduced the cost for integration due to their minimum components | 
| HLR3 | It shall reduced switching losses with the use of lossless of switching circuits and has increased reliability and power security	


## Low level Requirements:

|    ID                        |              Description                  | 
 |-------------------------------|:------------------------------------------|
 | LLR1                          |   | 
 |  LLR2                        |   |
 | LLR3                          |  | 
 | LLR4                          |  | 

 
## 5W's and 1H
![Screenshot (174)](https://user-images.githubusercontent.com/98826329/160225518-25ac285a-08b2-452b-bab5-a50e538bbba2.png)

## SWOT Analysis 
![Screenshot (179)](https://user-images.githubusercontent.com/98826329/160227038-c3924b34-9f54-477d-ab30-f10915825c04.png)

## Block Daigram 
![Screenshot (185)](https://user-images.githubusercontent.com/98826329/160233216-810d1b31-4038-40b5-895a-ab03b0e0b616.png)

## Multi port structure for Hybrid Energy system
![Screenshot (170)](https://user-images.githubusercontent.com/98826329/160224713-d2380057-d05d-400c-b1fc-b474dc214fb9.png)

## Flow Chart :
![Screenshot (183)](https://user-images.githubusercontent.com/98826329/160233368-282535e5-46b6-4457-ab03-fdf35ab05fa1.png)



For construct of the hybrid energy system we need the following part
## Solar Power system :
Solar energy is one of the major renewable energy source that can consist of three major block namely solar panel,
solar photovoltaic cell, battery. The electrical energy generated using solar panel can be stored in battery or directly
used for equipment.
Solar panel works by allowing photons, or particles of light, to knock electron free from atoms, generating a flow of
electricity. Solar panels actually comprises many, smaller units called photovoltaic cells. Many cells linked together
make up a solar panel. Each photovoltaic cell is basically a sandwich made up of two slices of semi conducting

## Wind power system :
Wind energy is also one of the renewable energy source that can used for generating electrical energy with wind
turbine coupled with generator.

Output :
## Simulation of Subsystem :

![solar system](https://user-images.githubusercontent.com/98826329/160229723-f58c934f-90ac-40ec-85e4-4c9293c374f2.png)

## Simulation using MPPT Method:

![mppt](https://user-images.githubusercontent.com/98826329/160229732-c8aa9db6-4a5d-48f2-ba01-29609da16152.png)

## Simulation of Multi-Input DC-DC Converter:
![dual input](https://user-images.githubusercontent.com/98826329/160229737-44cd5b77-7dea-441d-a0b4-63d8d4c4a42f.png)

## Simulation of Complete Module :
![cmplt system](https://user-images.githubusercontent.com/98826329/160229749-b58560e5-9f97-4e73-952f-4bca8109f56c.png)


## Test Plan :
|Test ID | Description |  Input   |   Expected output   |   Actual output   |   Status   |
|:-------|:------------|:-----------|:------------|:---------------|:-----------------|
| HLR_1 | Wind Power system   |  24v   |   12v    |  12v |  ✅ |
| HLR_1    | Solar Power system   |  12v   |    24v   | 12v    |  ✅ |

