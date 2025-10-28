bool __fastcall sub_297128(char a1)
{
  int v2; // r0
  int v3; // r4
  int v5; // r0

  v2 = sub_296D1C();
  v3 = v2;
  if ( (dword_490154 & 4) == 0 )
    return sub_296D70(a1, v2) != 1;
  dword_490154 &= ~4u;
  v5 = sub_28D4A0();
  sub_28D534(v5);
  dword_48AAA0 &= ~0x400u;
  sub_293324(v3);
  return 0;
}
