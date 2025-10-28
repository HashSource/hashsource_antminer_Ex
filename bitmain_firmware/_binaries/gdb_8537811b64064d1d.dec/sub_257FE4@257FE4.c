int __fastcall sub_257FE4(int a1, int a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r0

  v4 = ((int (*)(void))loc_166EC4)();
  v5 = v4 + ((int (__fastcall *)(int))loc_166F70)(a1);
  if ( a2 < 0 )
    return 0;
  if ( v5 > a2 )
    JUMPOUT(0x1677E8);
  v6 = sub_257C4C(a1, a2 - v5);
  if ( v6 )
    return *(_DWORD *)v6;
  else
    return 0;
}
