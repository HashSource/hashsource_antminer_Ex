_DWORD *__fastcall update_chip_status(int a1, int a2, int a3)
{
  int v3; // r12
  int v6; // r1
  _DWORD *v7; // r7
  int v8; // r12
  _DWORD *v9; // r3
  int v10; // r1

  v3 = *(_DWORD *)(a1 + 136);
  v6 = byte_166980[v3];
  v7 = (_DWORD *)(a3 + 48);
  if ( !byte_166980[v3] )
  {
    v8 = v3 << 10;
    v9 = (_DWORD *)((char *)&dword_166984[-1] + v8);
    do
    {
      v9[1] = v6;
      ++v9;
    }
    while ( v9 != (_DWORD *)((char *)&dword_166984[255] + v8) );
    *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 272);
    update_str_and_flag(a1, a2, v7);
    v10 = *(_DWORD *)(a1 + 236);
    byte_166980[*(_DWORD *)(a1 + 136)] = 1;
    *(_DWORD *)(a2 + 56) = v10;
    return v7;
  }
  if ( !*(_BYTE *)(a1 + 146) )
    return v7;
  *(_DWORD *)(a2 + 64) = *(_DWORD *)(a1 + 272);
  chip_speed_test(a1, (int)&dword_166984[256 * v3]);
  if ( (*(int (__fastcall **)(int, _DWORD *))(a1 + 84))(a1, &dword_166984[256 * *(_DWORD *)(a1 + 136)]) )
    *(_DWORD *)(a3 + 48) |= 8u;
  update_str_and_flag(a1, a2, v7);
  if ( strcmp(*(const char **)(a1 + 188), "dash") )
    return v7;
  (*(void (__fastcall **)(int))(a1 + 124))(a1);
  return v7;
}
