The in-plant movement of vehicles leads to dust generation. This dust can make the air quality poor, which can lead to difficulty in movement and other health issues. Currently, sprinkling systems are installed by the side of the road to help reduce dust. However, these sprinkling systems are operated manually, which means that someone has to manually turn the valves on. This can be inconvenient and time-consuming. An automated sprinkling system as a solution would be more efficient and effective. This system would be able to operate automatically based on the present air quality. This means that the system would only activate when the air quality is poor, which would help to reduce water usage. Also, it won't activate if it detects motion around it (caused by people or vehicles), so that people or vehicles are not caught by surprise and get wet.

**OUR APPROACH INCLUDES:-**

1. An Arduino Uno board is first programmed according to the required function.
2. The MQ135 (sensor) i.e., Air Quality detector & PIR (sensor) i.e., Motion detector is interfaced with the Arduino Uno board.
3. Then the Water Sprinkler is too interfaced with the System.
4. Hence the System is ready to be deployed in the real world and solve the required problem.


Working of the Model:-

Our implementation works according to the following actions:-

1. Firstly detects pollution level in the air.
         a. if pollution is less than the marked limit, then nothing happens.
         b. if pollution is more than a certain level -
->--------2. It checks if there is motion around the sprinkling area:-
              a. if YES, then the sprinkler doesn't turn on.
              b. if No, then the sprinkler turns on and sprays water around it.
_>------------3. It will keep refreshing the air pollution stats; the sprinkler stops when it goes below the limit.


**Benefits :-**

1. An automated sprinkling system would be a more efficient, effective, and eco-friendly way to reduce dust in plants.
2. It would be more efficient, only activating when necessary.
3. It would be more effective, as it would help to reduce dust levels more than a manual system.
4. It would be more eco-friendly, as it would help to reduce water usage.
![ardF](https://github.com/CodingDunno/vedanta_hackathon/assets/126494630/3525e863-d36d-42bd-8d29-2207a5778369)
![PXL_20230622_062320412](https://github.com/CodingDunno/vedanta_hackathon/assets/126494630/cf95817b-e258-4b88-a73c-51cac934d2c4)
