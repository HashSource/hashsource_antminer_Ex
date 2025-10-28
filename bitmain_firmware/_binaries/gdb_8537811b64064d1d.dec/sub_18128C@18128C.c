int __fastcall sub_18128C(int a1)
{
  _BOOL4 v2; // r4
  int v4; // r0
  _BYTE v5[36]; // [sp+4h] [bp-24h] BYREF

  if ( !sub_22EBE4(a1) )
    sub_94708("The program is not being run.");
  sub_17E890();
  v2 = a1 != 0;
  if ( !dword_487950 )
    v2 = 0;
  if ( v2 )
  {
    ((void (__fastcall *)(_BYTE *))loc_23FF48)(v5);
    v4 = sub_23E4C8(sub_17F42C, 0);
    if ( !*(_DWORD *)(dword_487668 + 68) )
      sub_22EFA4(v4);
    return ((int (__fastcall *)(_BYTE *))loc_23FCB4)(v5);
  }
  else
  {
    sub_17E8AC();
    sub_17E8EC();
    sub_187D98(0);
    return sub_18BAFC(-1, 144);
  }
}
