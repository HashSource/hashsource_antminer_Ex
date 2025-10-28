int __fastcall at24c512_eeprom_read_byte(int a1, int a2, __int16 a3, _BYTE *a4)
{
  int v7; // r0
  int v8; // r4
  int v9; // r0
  char v10; // r3
  int v11; // r4
  __int16 v13; // [sp+0h] [bp-30h] BYREF
  int v14; // [sp+4h] [bp-2Ch]
  _BYTE *v15; // [sp+8h] [bp-28h]
  _BYTE v16[36]; // [sp+Ch] [bp-24h] BYREF

  if ( ioctl(a1, 0x703u, a2) < 0 )
  {
    v11 = -1;
    perror("failed to get i2c_slave ioctl");
    return v11;
  }
  LOBYTE(v13) = 0;
  HIBYTE(v13) = HIBYTE(a3);
  v16[0] = a3;
  v14 = 2;
  v15 = v16;
  v7 = ioctl(a1, 0x720u, &v13, 2);
  v8 = v7;
  if ( v7 < 0 )
  {
    perror("failed to get i2c_smbus ioctl");
    return v8;
  }
  else
  {
    if ( !v7 )
      usleep(0xBB8u);
    v15 = v16;
    v13 = 1;
    v14 = 1;
    v9 = ioctl(a1, 0x720u, &v13, 1);
    v11 = v9;
    if ( v9 >= 0 )
    {
      if ( v9 )
        v11 = -1;
      else
        v10 = v16[0];
      if ( !v9 )
        *a4 = v10;
      return v11;
    }
    perror("failed to get i2c_smbus ioctl");
    return -1;
  }
}
