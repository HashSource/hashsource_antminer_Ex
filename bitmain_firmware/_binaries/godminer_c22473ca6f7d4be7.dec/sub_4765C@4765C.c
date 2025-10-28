int __fastcall sub_4765C(int a1, __int64 *a2)
{
  __int64 v2; // r2
  __int64 *v3; // r4
  const char *v6; // r1
  int v7; // r9
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  size_t v16; // r4
  void (__fastcall *v17)(int, __int64 *); // r3
  __int64 v19; // [sp+0h] [bp-194h] BYREF
  char dest[64]; // [sp+8h] [bp-18Ch] BYREF
  _BYTE v21[286]; // [sp+48h] [bp-14Ch] BYREF
  int v22; // [sp+168h] [bp-2Ch]
  int v23; // [sp+16Ch] [bp-28h]
  int v24; // [sp+170h] [bp-24h]
  int v25; // [sp+174h] [bp-20h]
  int v26; // [sp+178h] [bp-1Ch]
  int v27; // [sp+17Ch] [bp-18h]
  int v28; // [sp+180h] [bp-14h]
  int v29; // [sp+184h] [bp-10h]
  int v30; // [sp+188h] [bp-Ch]
  __int16 v31; // [sp+18Ch] [bp-8h] BYREF
  char v32; // [sp+18Eh] [bp-6h]

  v2 = *a2;
  v3 = a2 + 129;
  v6 = (const char *)*((_DWORD *)a2 + 288);
  v19 = v2;
  v7 = *((_DWORD *)a2 + 289);
  strcpy(dest, v6);
  v8 = target_to_diff_kda(v3);
  v9 = *((_DWORD *)v3 + 1);
  v10 = *((_DWORD *)v3 + 2);
  v11 = *((_DWORD *)v3 + 3);
  v22 = v8;
  v23 = *(_DWORD *)v3;
  v24 = v9;
  v25 = v10;
  v26 = v11;
  v12 = *((_DWORD *)v3 + 7);
  v13 = *((_DWORD *)v3 + 4);
  v14 = *((_DWORD *)v3 + 5);
  v15 = *((_DWORD *)v3 + 6);
  v16 = *((_DWORD *)a2 + 289);
  v27 = v13;
  v28 = v14;
  v29 = v15;
  v30 = v12;
  memcpy(&v31, *((const void **)a2 + 290), v16);
  memcpy((char *)&v31 + v16, (char *)a2 + v7 + 291, 3 - v7);
  memcpy(v21, a2 + 1, sizeof(v21));
  *(_WORD *)&v21[283] = v31;
  v17 = *(void (__fastcall **)(int, __int64 *))(a1 + 24);
  v21[285] = v32;
  v17(a1, &v19);
  return 0;
}
