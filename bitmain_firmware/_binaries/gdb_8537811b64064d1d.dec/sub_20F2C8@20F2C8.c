int sub_20F2C8()
{
  int v0; // r4
  int v1; // r5
  int result; // r0
  int v3; // r6
  int v4; // r3
  _DWORD *v5; // r0
  _DWORD v6[7]; // [sp+0h] [bp-40h] BYREF
  int v7; // [sp+1Ch] [bp-24h] BYREF
  _DWORD v8[7]; // [sp+20h] [bp-20h] BYREF
  int v9; // [sp+3Ch] [bp-4h]

  v0 = sub_15F810((_BOOL4)"No frame selected.");
  v1 = *(_DWORD *)sub_242FB4(v0);
  if ( !sub_15E14C(v0, &v7) )
    return sub_25A440(v1, "PC unavailable, cannot determine args.\n");
  v3 = sub_C3438(v0);
  if ( !v3 )
    return sub_25A440(v1, "No symbol table info available.\n");
  ((void (__fastcall *)(_DWORD *, int))loc_15CFC8)(v6, v0);
  v8[0] = v6[0];
  v8[1] = v6[1];
  v8[2] = v6[2];
  v8[3] = v6[3];
  v8[5] = 0;
  v8[4] = v6[4];
  v4 = *(_DWORD *)sub_242FB4(v6[0]);
  v5 = *(_DWORD **)(v3 + 8);
  v9 = 0;
  v8[6] = v4;
  result = sub_20F21C(v5, (void (__fastcall *)(int, int, int))sub_20C82C, (int)v8);
  if ( !v9 )
    return sub_25A440(v1, "No arguments.\n");
  return result;
}
