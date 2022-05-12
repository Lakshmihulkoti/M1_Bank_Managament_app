# Test plan and output :

|Test ID | Description |  Input   |   Expected Output   |  Actual Output | status |
|:-------|:------------|:-----------|:------------|:--------------------|-------|
|1 | The sensor shall detect the object while backing up | Input from sensor | sensor should detect object | sensor should detect object |
| 2| If any obstacle is there in a path | signal from Sensor should detect | driver will get notify with warning sound | driver will apply the brake |
| 3| If there is no obstacle in a path | signal from sensor should not detect | driver will not get any warning sound| driver will not apply the brake |
| 4| medium proximity Alert |
| 5 | Short proximity Alert |
| 6 | Closet proximity Alert |

