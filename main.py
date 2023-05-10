from serial import Serial
from pynput.mouse import Button, Controller

mouse = Controller()
ser = Serial('COM3',9600) 
while(True):
	if ser.isOpen():
		input_data=ser.readline().strip().decode("utf-8")
		input_data = int(input_data)
		#print(input_data)
		if(input_data <= 20):
			print(input_data)
			mouse.click(Button.left,1)