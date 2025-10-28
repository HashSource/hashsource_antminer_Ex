int __fastcall sub_2AD6E8(int a1, int a2)
{
  int v3; // r0
  int v4; // r4

  if ( !a1 )
  {
    a1 = sub_2AAEF0(a2, 184);
    if ( !a1 )
      return 0;
  }
  v3 = sub_2AAFA4(a1, a2);
  v4 = v3;
  if ( v3 )
    memset((void *)(v3 + 16), 0, 0xA8u);
  return v4;
}
