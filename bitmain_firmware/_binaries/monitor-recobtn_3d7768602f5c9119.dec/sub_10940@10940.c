int __fastcall sub_10940(int a1)
{
  int v1; // r5
  const char *v2; // r4
  char v4[68]; // [sp+0h] [bp-44h] BYREF

  v1 = a1;
  LOWORD(v2) = (unsigned __int16)"echo %d > /sys/class/gpio/gpio%d/value";
  if ( a1 )
    v1 = 1;
  HIWORD(v2) = (unsigned int)"echo %d > /sys/class/gpio/gpio%d/value" >> 16;
  memset(v4, 0, 0x40u);
  sprintf(v4, v2, v1, 943);
  system(v4);
  sprintf(v4, v2, v1, 944);
  return system(v4);
}
