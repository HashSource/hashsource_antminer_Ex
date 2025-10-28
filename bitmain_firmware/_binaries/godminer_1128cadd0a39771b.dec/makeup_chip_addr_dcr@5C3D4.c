int __fastcall makeup_chip_addr_dcr(_BYTE *a1, int a2)
{
  int v4; // r0
  int v5; // r6
  _BYTE *v6; // r2
  char v7; // r3

  v4 = sub_12E0D8(256, a2);
  v5 = v4;
  if ( a2 )
  {
    v6 = a1;
    v7 = 0;
    do
    {
      *v6++ = v7;
      v7 += v4;
    }
    while ( &a1[a2] != v6 );
  }
  *a1 = rand();
  return v5;
}
