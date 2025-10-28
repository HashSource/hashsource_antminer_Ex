void __fastcall get_core_regdata(int a1, unsigned __int8 a2)
{
  _BYTE v3[10]; // [sp+18h] [bp-2Ch] BYREF
  __int16 v4; // [sp+22h] [bp-22h]
  char v5; // [sp+24h] [bp-20h]
  int v6; // [sp+28h] [bp-1Ch] BYREF
  void *s; // [sp+2Ch] [bp-18h]
  int v8; // [sp+30h] [bp-14h]
  int v9; // [sp+34h] [bp-10h]

  v6 = 0;
  v9 = *(_DWORD *)(a1 + 372);
  v8 = *(_DWORD *)(a1 + 380);
  v3[8] = 1;
  v3[9] = 0;
  v5 = -1;
  v4 = a2;
  s = malloc(12 * v8 * v9);
  memset(s, 0, 12 * v8 * v9);
  (*(void (__fastcall **)(int, _BYTE *, int, void *, int *))(a1 + 336))(a1, v3, v8 * v9, s, &v6);
  free(s);
}
