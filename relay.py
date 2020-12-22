import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)

pinList = [17, 27, 22]

for i in pinList:
	GPIO.setup(i, GPIO.OUT)
	
while(1):
	
	x = input("Switch port: ")
	
	if x == -1:
		
		GPIO.cleanup()
		print("GPIO Clean up")
		break
        
	else:
		if x <= 3 and x > 0:
			if GPIO.input(pinList[x-1]):
				# High
				GPIO.output(pinList[x-1], GPIO.LOW)
			else:
				# Low
				GPIO.output(pinList[x-1], GPIO.HIGH)
		else:
			print("Incorrect")
