int __fastcall sub_D1998(_BYTE *a1)
{
  int v2; // r4
  int v4; // [sp+4h] [bp-4h] BYREF

  v2 = 6;
  while ( 1 )
  {
    v4 = 0;
    fpga_read(48, &v4);
    if ( v4 < 0 )
      break;
    usleep(0xC350u);
    if ( !--v2 )
      return 0;
  }
  *a1 = v4;
  return 1;
}
