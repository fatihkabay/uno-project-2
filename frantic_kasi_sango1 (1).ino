void setup()
{
    pinMode(3, OUTPUT);
    pinMode(2, OUTPUT);
}
void loop()
{
    digitalWrite(2, 1); // 2 numaralı portu 1 yap
    digitalWrite(3, 0); // 3 numaralı portu 0 yap
    delay(1000); // 1000 milisaniye (1 saniye) Bekle
    digitalWrite(2, 0); // 2 numaralı portu 0 yap
    digitalWrite(3, 1); // 3 numaralı portu 1 yap
    delay(1000); // 1000 milisaniye (1 saniye) Bekle
}