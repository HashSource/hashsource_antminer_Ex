bool __fastcall sub_283F24(_DWORD *a1)
{
  int v2; // r0
  int v4; // r5

  v2 = sub_28B760(a1);
  if ( sub_283BF8((int)a1, v2) )
    return 1;
  v4 = sub_283918(a1);
  if ( v4 < 0 )
    return 1;
  sub_28B5FC(a1, 0);
  dword_48ABE4 = 0;
  dword_48AAA0 &= ~0x100u;
  return v4 != 1;
}
