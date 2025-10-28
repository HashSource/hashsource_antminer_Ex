int sub_221024()
{
  unsigned int v1; // r3
  unsigned int v3; // [sp+0h] [bp-Ch] BYREF
  unsigned int v4; // [sp+4h] [bp-8h]

  v3 = 0;
  v4 = 0;
  do
  {
    fpga_read(1336, &v3);
    if ( v3 >> 31 == 1 )
      return 1;
    usleep(0x3E8u);
    v1 = v4++;
  }
  while ( v1 <= 0xBB7 );
  return 0;
}
