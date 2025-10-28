// local variable allocation has failed, the output may be wrong!
int __fastcall sub_A6714(int a1, __int64 *a2)
{
  __int64 v6; // [sp+8h] [bp-E4h] BYREF
  char v7[64]; // [sp+10h] [bp-DCh] BYREF
  _BYTE v8[80]; // [sp+50h] [bp-9Ch] BYREF
  int v9; // [sp+A0h] [bp-4Ch]
  _BYTE v10[32]; // [sp+A4h] [bp-48h] BYREF
  _DWORD v11[5]; // [sp+C4h] [bp-28h] BYREF
  _BYTE _D8[24]; // [sp+D8h] [bp-14h] OVERLAPPED BYREF

  *(_DWORD *)&_D8[12] = *((_DWORD *)a2 + 283);
  if ( *(_DWORD *)&_D8[12] )
  {
    v6 = *a2;
    strcpy(v7, *((const char **)a2 + 281));
    memcpy(v8, a2 + 1, sizeof(v8));
    v9 = target_to_diff_ltc((int)(a2 + 129));
    memcpy(v10, a2 + 129, sizeof(v10));
    memcpy(v11, (const void *)(*(_DWORD *)&_D8[12] + 4), **(_DWORD **)&_D8[12]);
    v11[4] = **(_DWORD **)&_D8[12];
    memcpy(_D8, (char *)a2 + 1100, sizeof(_D8));
    (*(void (__fastcall **)(int, __int64 *))(a1 + 36))(a1, &v6);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
