void setup()
{
	Serial.begin(9600);

	int startTime;
	int endTime;


	Serial.println("Calculating float:");
	delay(100);
	startTime = millis();
	float x;
	x = 10000;


	for (byte i = 0; i < 100; i++)
		for (byte i2 = 0; i2 < 100; i2++)
		{
			x = 10000;

			for (byte i3 = 0; i3 < 7; i3++)
			{
				x = x * 0.999;
			}
		}

	endTime = millis();
	Serial.print(endTime - startTime);
	Serial.println("ms");
	Serial.println(x);


	Serial.println("Calculating int:");
	delay(100);
	startTime = millis();
	uint32_t x2;

	for (uint32_t i = 0; i < 100; i++)
		for (uint32_t i2 = 0; i2 < 100; i2++)
		{
			x2 = 1;

			for (uint32_t i3 = 0; i3 < 7; i3++)
			{
				x2 = x2 * 2;
			}
		}


	endTime = millis();
	Serial.print(endTime - startTime);
	Serial.println("ms");
	Serial.println(x2);


	Serial.println("Calculating byte:");
	delay(100);
	startTime = millis();
	byte x3;

	for (byte i = 0; i < 100; i++)
		for (byte i2 = 0; i2 < 100; i2++)
		{
			x3 = 1;

			for (byte i3 = 0; i3 < 7; i3++)
			{
				x3 = x3 * 2;
			}
		}

	endTime = millis();
	Serial.print(endTime - startTime);
	Serial.println("ms");
	Serial.println(x3);

}

void loop() {}


