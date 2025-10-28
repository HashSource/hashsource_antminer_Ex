int __fastcall sub_A4E00(int a1, __int64 *a2)
{
  int *v2; // r2
  int v3; // r1
  __int64 v7; // [sp+8h] [bp-DCh] BYREF
  int v8; // [sp+10h] [bp-D4h]
  int v9; // [sp+14h] [bp-D0h]
  _BYTE v10[48]; // [sp+18h] [bp-CCh] BYREF
  _BYTE v11[32]; // [sp+48h] [bp-9Ch] BYREF
  double v12; // [sp+C8h] [bp-1Ch]
  char v13; // [sp+D7h] [bp-Dh]
  __int64 *v14; // [sp+D8h] [bp-Ch]
  int v15; // [sp+DCh] [bp-8h]

  v15 = *((_DWORD *)a2 + 283);
  v14 = a2 + 1;
  v13 = 0;
  v7 = *a2;
  v2 = (int *)*((_DWORD *)a2 + 281);
  v3 = v2[1];
  v8 = *v2;
  v9 = v3;
  memcpy(v10, a2 + 1, sizeof(v10));
  memcpy(v11, a2 + 129, sizeof(v11));
  v10[42] = *(_BYTE *)(v15 + 9);
  v12 = (double)(unsigned int)target_to_diff_kas((int)(a2 + 129));
  *(_DWORD *)(a1 + 532) = 0;
  (*(void (__fastcall **)(int, __int64 *))(a1 + 36))(a1, &v7);
  return 0;
}
