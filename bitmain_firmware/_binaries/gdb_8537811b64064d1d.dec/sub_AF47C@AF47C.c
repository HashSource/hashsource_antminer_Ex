int __fastcall sub_AF47C(int a1, int a2)
{
  _BYTE v4[32]; // [sp+0h] [bp-20h] BYREF

  if ( a2 )
  {
    sub_1636E0(v4, a2, 8, "invalid regular expression");
    ((void (__fastcall *)(int, _BYTE *))loc_AEFA4)(a1, v4);
    sub_163764(v4);
  }
  else
  {
    ((void (*)(void))loc_AEFA4)();
  }
  return a1;
}
