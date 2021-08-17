void loop()
{
  if (dotTimer.isReady())
  {
    calculateTime(); // каждые 500 мс пересчёт и отправка времени
  }
  if (newTimeFlag && curMode == 0)
  {
    flipTick(); // перелистывание цифр
  }
  dotBrightTick();   // плавное мигание точки
  backlBrightTick(); // плавное мигание подсветки ламп
  if (GLITCH_ALLOWED)
  {
    glitchTick(); // глюки
  }
  buttonsTick();  // кнопки
  settingsTick(); // настройки
}
