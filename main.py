import serial

def main():
	# open communication with arduino using port from macbook and specify baud rate
    ardunino_data = serial.Serial('/dev/cu.usbserial-1420', 9600)

    # read data from arduino
    battery_volt = arduino_data.read()

    # open log file to overwrite existing data
    file_output = open("log.txt", "w")

    # write arduino data to file
    file_output.write(battery_volt)

    file_ouput.close()

if __name__ == "__main__":
	main()
