int __fastcall sub_221098(int a1)
{
  unsigned int v2; // r3
  unsigned int v5; // [sp+8h] [bp-Ch] BYREF
  unsigned int v6; // [sp+Ch] [bp-8h]

  v5 = 0;
  v6 = 0;
  do
  {
    if ( a1 == 4 )
    {
      fpga_read(48, &v5);
    }
    else if ( a1 )
    {
      if ( a1 == 1 )
        fpga_read(1316, &v5);
      else
        fpga_read(1336, &v5);
    }
    else
    {
      fpga_read(1296, &v5);
    }
    if ( v5 >> 31 == 1 )
      return 1;
    usleep(0x3E8u);
    v2 = v6++;
  }
  while ( v2 <= 0xBB7 );
  return 0;
}
