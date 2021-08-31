// отправить на индикаторы
void sendTime(byte hours, byte minutes)
{
  indicatorDigits[0] = (byte)hours / 10;
  indicatorDigits[1] = (byte)hours % 10;

  indicatorDigits[2] = (byte)minutes / 10;
  indicatorDigits[3] = (byte)minutes % 10;
}

// для эффектов
void setNewTime()
{
  newTime[0] = (byte)hrs / 10;
  newTime[1] = (byte)hrs % 10;

  newTime[2] = (byte)mins / 10;
  newTime[3] = (byte)mins % 10;
}
