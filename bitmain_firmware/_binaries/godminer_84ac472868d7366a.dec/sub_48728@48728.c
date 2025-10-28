int __fastcall sub_48728(int a1, __int64 *a2)
{
  __int64 v2; // r2
  int *v4; // r4
  const char *v6; // r1
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  size_t v11; // r8
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r2
  void (__fastcall *v16)(int, __int64 *); // r3
  __int64 v18; // [sp+0h] [bp-D8h] BYREF
  char dest[64]; // [sp+8h] [bp-D0h] BYREF
  _BYTE v20[80]; // [sp+48h] [bp-90h] BYREF
  int v21; // [sp+98h] [bp-40h]
  int v22; // [sp+9Ch] [bp-3Ch]
  int v23; // [sp+A0h] [bp-38h]
  int v24; // [sp+A4h] [bp-34h]
  int v25; // [sp+A8h] [bp-30h]
  int v26; // [sp+ACh] [bp-2Ch]
  int v27; // [sp+B0h] [bp-28h]
  int v28; // [sp+B4h] [bp-24h]
  int v29; // [sp+B8h] [bp-20h]
  _BYTE v30[16]; // [sp+BCh] [bp-1Ch] BYREF
  size_t v31; // [sp+CCh] [bp-Ch]
  int v32; // [sp+D0h] [bp-8h]

  v2 = *a2;
  v4 = (int *)(a2 + 128);
  v6 = (const char *)*((_DWORD *)a2 + 288);
  v4 += 2;
  v18 = v2;
  strcpy(dest, v6);
  memcpy(v20, a2 + 1, sizeof(v20));
  v7 = target_to_diff_ltc(v4);
  v8 = v4[1];
  v9 = v4[2];
  v10 = v4[3];
  v21 = v7;
  v11 = *((_DWORD *)a2 + 289);
  v22 = *v4;
  v23 = v8;
  v24 = v9;
  v25 = v10;
  v12 = v4[5];
  v13 = v4[6];
  v14 = v4[7];
  v26 = v4[4];
  v27 = v12;
  v28 = v13;
  v29 = v14;
  memcpy(v30, *((const void **)a2 + 290), v11);
  v15 = *((_DWORD *)a2 + 312);
  v31 = v11;
  v16 = *(void (__fastcall **)(int, __int64 *))(a1 + 24);
  v32 = v15;
  v16(a1, &v18);
  return 0;
}
