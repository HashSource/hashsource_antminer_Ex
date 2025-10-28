int sub_BB9C8()
{
  int v0; // r4
  int v2; // [sp+4h] [bp-4h] BYREF

  v0 = 6;
  while ( 1 )
  {
    fpga_read(48, &v2);
    if ( v2 < 0 )
      break;
    usleep(0xC350u);
    if ( !--v0 )
      return 0;
  }
  return 1;
}
