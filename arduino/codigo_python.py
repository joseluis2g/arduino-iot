## Codigo para leer texto de la serial 9600 en arduino
## y guardarlo en un documento de texto
import serial

puerto = '/dev/ttyACM0';
numero_puerto = 9600;
texto_guardar = "texto.txt";

documento_guardar = open(texto_guardar, "w+");
numero_serial = serial.Serial(puerto, numero_puerto)
while True:
    line = numero_serial.readline();
    line = line.decode("utf-8") # de binario a texto
    print(line);
    documento_guardar.write(line);