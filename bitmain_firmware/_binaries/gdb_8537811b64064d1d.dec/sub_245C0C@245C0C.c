int __fastcall sub_245C0C(int a1)
{
  int v2; // r5
  int v3; // r4
  int v4; // r0
  _DWORD *v5; // r7
  bool v6; // cc
  int v7; // r1
  int result; // r0
  _DWORD *v9; // r3

  v2 = sub_1DD5B4(a1);
  v3 = 0;
  v4 = sub_24B5D4();
  v5 = sub_D1930(v4);
  while ( 1 )
  {
    v6 = v3 < ((int (__fastcall *)(int))loc_166EC4)(v2);
    v7 = v3;
    result = a1;
    if ( !v6 )
      break;
    ++v3;
    ((void (__fastcall *)(int, int, _DWORD))loc_1DE9F0)(a1, v7, 0);
  }
  if ( v5 )
  {
    v9 = (_DWORD *)v5[7];
    if ( v9 )
    {
      if ( *v9 )
      {
        return sub_946D8("Tracepoint %d has multiple locations, cannot infer $pc", v5[6]);
      }
      else
      {
        if ( (int)v5[34] <= 0 )
          JUMPOUT(0x16DB18);
        return sub_946D8("Tracepoint %d does while-stepping, cannot infer $pc", v5[6]);
      }
    }
  }
  return result;
}
