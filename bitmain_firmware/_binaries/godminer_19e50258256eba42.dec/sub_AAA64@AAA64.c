int __fastcall sub_AAA64(int a1, __int64 *a2)
{
  __int64 v6; // [sp+8h] [bp-BCh] BYREF
  char v7[32]; // [sp+10h] [bp-B4h] BYREF
  _BYTE v8[80]; // [sp+30h] [bp-94h] BYREF
  int v9; // [sp+80h] [bp-44h]
  _BYTE v10[32]; // [sp+84h] [bp-40h] BYREF
  _BYTE v11[8]; // [sp+A4h] [bp-20h] BYREF
  __int64 v12; // [sp+B0h] [bp-14h]
  int v13; // [sp+BCh] [bp-8h]

  v13 = *((_DWORD *)a2 + 283);
  if ( v13 )
  {
    v6 = *a2;
    strcpy(v7, *((const char **)a2 + 281));
    v12 = *(_QWORD *)(v13 + 8);
    memcpy(v8, a2 + 1, sizeof(v8));
    v9 = target_to_diff_dash((int)(a2 + 129));
    memcpy(v10, a2 + 129, sizeof(v10));
    memcpy(v11, (char *)a2 + 1100, sizeof(v11));
    (*(void (__fastcall **)(int, __int64 *))(a1 + 36))(a1, &v6);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
