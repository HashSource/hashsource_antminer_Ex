int __fastcall at24c512_eeprom_write_byte(int a1, int a2, __int16 a3, int a4)
{
  int v7; // r0
  int v8; // r4
  _BYTE v10[4]; // [sp+0h] [bp-34h] BYREF
  int v11; // [sp+4h] [bp-30h]
  __int16 *v12; // [sp+8h] [bp-2Ch]
  __int16 v13; // [sp+Ch] [bp-28h] BYREF

  if ( ioctl(a1, 0x703u, a2) < 0 )
  {
    v8 = -1;
    perror("failed to get i2c_slave ioctl");
    return v8;
  }
  v10[0] = 0;
  v10[1] = HIBYTE(a3);
  v13 = (unsigned __int8)a3 | (unsigned __int16)((_WORD)a4 << 8);
  v11 = 3;
  v12 = &v13;
  v7 = ioctl(a1, 0x720u, v10, (unsigned __int8)a3 | (a4 << 8));
  v8 = v7;
  if ( v7 < 0 )
  {
    perror("failed to get i2c_smbus ioctl");
    return v8;
  }
  else
  {
    if ( v7 )
      return v8;
    usleep(0xBB8u);
    return v8;
  }
}
