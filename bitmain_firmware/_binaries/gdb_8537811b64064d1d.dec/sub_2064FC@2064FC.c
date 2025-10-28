int __fastcall sub_2064FC(int a1, int a2)
{
  int v4; // r7
  int v5; // r6
  int v6; // r6
  int v7; // r8
  const char *v8; // r12

  v4 = ((int (__fastcall *)(int, _DWORD))loc_1674F8)(a2, *(_DWORD *)(a1 + 8));
  if ( v4 < 0 || (v5 = ((int (__fastcall *)(int))loc_166EC4)(a2), v5 + ((int (__fastcall *)(int))loc_166F70)(a2) <= v4) )
  {
    v6 = ((int (__fastcall *)(int))loc_166EC4)(a2);
    v7 = ((int (__fastcall *)(int))loc_166F70)(a2);
    if ( dword_46D448 )
      v8 = (const char *)sub_21B3EC(a1);
    else
      v8 = *(const char **)a1;
    if ( dword_47AC88 > 0 )
      sub_F43DC(&off_46D334, "bad register number %d (max %d) in symbol %s", v4, v6 + v7 - 1, v8);
    JUMPOUT(0x167318);
  }
  return v4;
}
