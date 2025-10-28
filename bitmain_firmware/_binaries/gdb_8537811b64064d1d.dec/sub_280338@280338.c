int __fastcall sub_280338(int a1)
{
  int v1; // r0
  unsigned int v2; // r0
  int v3; // r2

  dword_48AAA0 |= 0x40u;
  v1 = sub_293374(a1);
  dword_48AAA0 &= ~0x40u;
  if ( v1 == 96 )
  {
    dword_4900D8 = dword_4900D4;
    return 0;
  }
  else
  {
    v2 = v1 - 97;
    if ( v2 > 0x19 || (v3 = dword_48AB10[v2 + 1], v3 == -1) )
    {
      sub_2945F0();
      return -1;
    }
    else
    {
      dword_4900D8 = v3;
      return 0;
    }
  }
}
