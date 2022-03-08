# M2_Embsys
## Description:
This project is about conservation of electricity using people counting method. By using IR sensor and some other components this automation is achieved. The IR sensor is placed
parallely near the entrance of the classroom and will be sensing the environment. When a person enters the classroom the IR1 senses the entry first,so this will be counted as an
entry and vice versa. These IR sensors transmits the detected signal to LCD via Arduino Uno(processing unit)and the count is displayed in the LCD. When the people count is greater
than zero the relay circuit gets triggered(switched ON) eventually the main supply for that classroom gets turned ON. When total strength(count) becomes zero the main supply gets 
disconnected.
