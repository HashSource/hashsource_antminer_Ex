int __fastcall sub_292C54(int a1, int a2)
{
  int v2; // r12

  if ( (dword_48AAA0 & 0x1000) == 0 )
    sub_291244(a1, a2);
  v2 = dword_48B6F8 - (dword_48AADC - 1);
  *(_BYTE *)(dword_48B700 + v2) = 0;
  dword_48B6F8 = v2;
  dword_48AAA0 &= ~0x1000u;
  return sub_292BA8(a1 - 1, 0);
}
