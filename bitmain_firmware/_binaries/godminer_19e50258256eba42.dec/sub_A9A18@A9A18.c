int __fastcall sub_A9A18(int a1, const char **a2)
{
  __int64 v5; // [sp+8h] [bp-DCh] BYREF
  char v6[32]; // [sp+10h] [bp-D4h] BYREF
  _BYTE v7[140]; // [sp+30h] [bp-B4h] BYREF
  int v8; // [sp+BCh] [bp-28h]
  _BYTE v9[32]; // [sp+C0h] [bp-24h] BYREF

  v5 = *(_QWORD *)a2;
  strcpy(v6, a2[281]);
  memcpy(v7, a2 + 2, sizeof(v7));
  memcpy(v9, a2 + 258, sizeof(v9));
  v8 = target_to_diff_zec((int)v9);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 36))(a1, &v5);
  return 0;
}
