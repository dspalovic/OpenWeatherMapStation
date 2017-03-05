# OpenWeatherMapStation

## Weather parametars

| Parameter | Unit | Description |
| --------- | ---- | ----------- |
| ~~wind_dir~~ | Degrees| Wind direction |
| ~~wind_speed~~ | m/s | Wind speed |
| ~~wind_gust~~ | m/s | Wind gust speed |
| ~~temp~~ | Celsius | Temperature |
| ~~humidity~~ | RH% | Relative humidity |
| ~~pressure~~ |  | Atmospheric pressure |
| ~~rain_1h~~ | mm | Rain in the last hour
| ~~rain_24h~~ | mm | Rain in the last 24 hours |
| ~~rain_today~~ | mm | Rain since midnight |
| ~~snow~~ | mm | Snow in the last 24 hours |
| ~~lum~~ | W/m^2 | Brightness |
| ~~lat~~ |  | Decimal degrees	Latitude |
| ~~long~~ |  | Decimal degrees	Longitude|
| ~~alt~~ | m | Altitude |
| ~~radiation~~ |  | Radiation |
| ~~dewpoint~~ | Celsius | Dew point |
| ~~uv~~ |  | UV index|
| ~~name~~ | String | Weather station name |

## Hardware
* Arduni Pro Mini (compatibile) 5V 16MHz
* DHT22 Temperature - Humidity sensor
* DS18B20 Temperature sensor

## Library
* Adafruit DHT22
* Adafruit Unified Sensors
* DallasTemperature

## ToDo
- [ ] Add temperature sensor
- [ ] Add pressure sensor
- [ ] Add humidity sensor
- [ ] Add internet connection
- [ ] Add wind sensor
- [ ] Add rain sensor
- [ ] Cleanup README

## Links
* http://tinkersphere.com/boards/722-pro-mini-5v-16mhz-arduino-compatible-atmega328p-breakout.html
* http://openweathermap.org/api
* https://learn.adafruit.com/dht/
* https://create.arduino.cc/projecthub/TheGadgetBoy/ds18b20-digital-temperature-sensor-and-arduino-9cc806
* https://www.sparkfun.com/products/12009

### other
curl -d 'temp=20&lat=49.11&long=24.11&alt=200' --user 'username:****' http://openweathermap.org/data/post

Simple calculation of Dewpoint Td = T - ((100 - RH)/5.)
