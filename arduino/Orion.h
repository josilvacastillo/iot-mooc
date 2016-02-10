

#ifndef Orion_h
#define Orion_h
#include "Arduino.h"
#include <SoftwareSerial.h>

#define 	_RXPIN_ 	2
#define 	_TXPIN_ 	3
#define		BaudRate 	9600

extern SoftwareSerial esp8266;

class Orion
{
public: 
	Orion(void);
	void Post(String _id, String _type, String _name1, String _name2);
	void Get(String _id, String _type);
	void Put(String _id, String _type, String _name1, String _name2, String valor);
	void send_AT_command(String _request, int _timeout);
	void send_AT_command2(String _request);
	void AT();
	void Reset();
	void Modo();
	void Mux();
	void Iniciar(String _ssid, String _password);
	void Conectar(String port);
	void Desconectar();
};
#endif
