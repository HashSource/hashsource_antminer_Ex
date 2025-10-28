int __fastcall sub_A549C(int a1, __int64 *a2)
{
  __int64 v6; // [sp+8h] [bp-19Ch] BYREF
  char v7[64]; // [sp+10h] [bp-194h] BYREF
  _BYTE v8[286]; // [sp+50h] [bp-154h] BYREF
  int v9; // [sp+170h] [bp-34h]
  _BYTE v10[32]; // [sp+174h] [bp-30h] BYREF
  __int16 v11; // [sp+194h] [bp-10h] BYREF
  char v12; // [sp+196h] [bp-Eh]
  size_t n; // [sp+198h] [bp-Ch]
  size_t *v14; // [sp+19Ch] [bp-8h]

  v14 = (size_t *)*((_DWORD *)a2 + 283);
  if ( v14 )
  {
    n = 3 - *v14;
    v6 = *a2;
    strcpy(v7, *((const char **)a2 + 281));
    v9 = target_to_diff_kda((_DWORD *)a2 + 258);
    memcpy(v10, a2 + 129, sizeof(v10));
    memcpy(&v11, v14 + 1, *v14);
    memcpy((char *)&v11 + *v14, (char *)a2 + 286 - n + 8, n);
    memcpy(v8, a2 + 1, sizeof(v8));
    *(_WORD *)&v8[283] = v11;
    v8[285] = v12;
    (*(void (__fastcall **)(int, __int64 *))(a1 + 36))(a1, &v6);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
