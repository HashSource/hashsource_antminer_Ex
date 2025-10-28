int __fastcall sub_1E2FC4(int a1, int a2)
{
  int v3; // r0
  int v4; // r7
  int result; // r0
  int v6; // r5
  int v7; // r4
  int v8; // r0
  int v10; // r3

  v3 = sub_1DD5B4(a2);
  v4 = ((int (__fastcall *)(int))loc_1E2798)(v3);
  result = ((int (__fastcall *)(int))loc_1E21C0)(3);
  if ( !result || result == 2 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = sub_1DD5B4(a2);
      result = ((int (__fastcall *)(int))loc_166EC4)(v8);
      if ( v7++ >= result )
        break;
      v10 = *(_DWORD *)(v4 + 4) + v6;
      v6 += 24;
      if ( *(_DWORD *)(v10 + 16) )
        ((void (__fastcall *)(int, _DWORD))loc_1DDDA8)(a2, *(_DWORD *)(v10 + 4));
    }
  }
  return result;
}
