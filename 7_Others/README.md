# Soil Moisture Sensor( YL-69) :

## Abstract : 
Soil Moisture Sensor is an electronic component and it is also called hygrometer ,it is usually used to measure the moisuture content in soil, this sensor measures the volumentric content of water inside the soil and it gives moisture level as output and this sensor reminds the user to water their plants and also monitord the moisture content of soil it has been widely used in agriculture,land irrigation and botanical gardening.


## Introduction :       
Soil Moisture Sensors also enable us to develop smart agricultural systems that respond to environmental conditions automatically.It can also use it to measure water level by using multiple moisture sensors,and it can measure the levels of moisture in the soil so it can be extremely useful if you want to monitor the soil moisture of your plants or automate the watering procedure.

# Requirements :
* It shall measure soil moisture content accurately and precisely
* sensor shall measures the volumentric content of water inside the soil
* it shall gives moisture level as output 
* It shall reminds the user to water their plants 
* It Shall be able to take input from user when the manual water supply is needed


## Benifits :
* They reduce the time.
* Improve the fertility of the soil.
* Decrease the use of water.
* They increase the price and demand of the products.


## SWOT Analysis :
![Screenshot (267)](https://user-images.githubusercontent.com/98826329/163223449-2af96068-e4c5-4495-b837-5da4e3455c51.png)

## 5W's and 1H :
![Screenshot (265)](https://user-images.githubusercontent.com/98826329/163223565-945b45b5-5b0a-48a6-96f1-41cb3d688261.png)

## Photography of soil moisture sensor :
![Screenshot (260)](https://user-images.githubusercontent.com/98826329/162587527-dd2daeee-668e-4d63-a1ab-f8cac5a5bec5.png)

## soil moisture sensor connection : 
  |Sl No | YL-69 | STM32 |
|:---------------|:----------------------------|:------------|
| 1 |	VCC |PA7|
| 2| GND | GND |
| 3 |	A0 |PB1 |
| 4| Red Led |PA5 |
| 5 | Green Led |PA3 |
| 6| Blue Led|PA1 |
  
  * VCC pin is used for power
  * A0 pin is an analog output
  * D0 pin is a digital output
  * GND pin is a Ground

## circuit connection :
![IMG-20220413-WA0041](https://user-images.githubusercontent.com/98826329/163231610-55554792-876c-4299-be87-ee7682a80960.jpg)

## Test Plan and Output :
|-- ID | Description	| Exp O/P | Actual Output |Status (Implemented/Future) |
|:---------------|:----------------------------|:------------|:-----------------|:--------------|
| 01 |	soil with No water | RED led will Glow | RED led will Glow |  ✅  |
| 02| Soil with suffient water | Green led will Glow| Green led will Glow |  ✅  |
| 03| Soil with too much water | Blue led will Glow  |Blue led will Glow |  ✅  |




## Applications :
![Screenshot (259)](https://user-images.githubusercontent.com/98826329/162587093-cf349fb0-36b6-4df1-b053-25c07494fc61.png)

* Soil Moisture detection
* It’s used in an irrigation system when soil is dry it starts the watering system automatically.
* Landscape irrigation.
* Household Gardening.
