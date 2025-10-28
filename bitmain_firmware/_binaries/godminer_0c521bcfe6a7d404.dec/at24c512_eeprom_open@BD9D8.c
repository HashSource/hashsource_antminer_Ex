int __fastcall at24c512_eeprom_open(int a1, int a2)
{
  int v3; // r0
  int v4; // r4

  v3 = open64(a1);
  v4 = v3;
  if ( v3 <= 0 )
  {
    v4 = -1;
    perror("failed to open i2c dev");
  }
  else if ( ioctl(v3, 0x703u, a2) < 0 )
  {
    v4 = -1;
    perror("failed to get i2c_slave ioctl");
  }
  return v4;
}
