int __fastcall sub_3D780(int a1, __int64 *a2)
{
  __int64 v2; // r2
  const char *v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  void (__fastcall *v10)(int, __int64 *); // r6
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  __int64 v16; // [sp+0h] [bp-B4h] BYREF
  char dest[32]; // [sp+8h] [bp-ACh] BYREF
  _BYTE v18[80]; // [sp+28h] [bp-8Ch] BYREF
  int v19; // [sp+78h] [bp-3Ch]
  int v20; // [sp+7Ch] [bp-38h]
  int v21; // [sp+80h] [bp-34h]
  int v22; // [sp+84h] [bp-30h]
  int v23; // [sp+88h] [bp-2Ch]
  int v24; // [sp+8Ch] [bp-28h]
  int v25; // [sp+90h] [bp-24h]
  int v26; // [sp+94h] [bp-20h]
  int v27; // [sp+98h] [bp-1Ch]
  int v28; // [sp+9Ch] [bp-18h]
  int v29; // [sp+A0h] [bp-14h]
  __int64 v30; // [sp+A8h] [bp-Ch]

  v2 = *a2;
  v5 = (const char *)*((_DWORD *)a2 + 288);
  v16 = v2;
  strcpy(dest, v5);
  v30 = a2[157];
  memcpy(v18, a2 + 1, sizeof(v18));
  v6 = target_to_diff_dash((int)(a2 + 129));
  v7 = *((_DWORD *)a2 + 259);
  v8 = *((_DWORD *)a2 + 260);
  v9 = *((_DWORD *)a2 + 261);
  v19 = v6;
  v10 = *(void (__fastcall **)(int, __int64 *))(a1 + 24);
  v20 = *((_DWORD *)a2 + 258);
  v21 = v7;
  v22 = v8;
  v23 = v9;
  v11 = *((_DWORD *)a2 + 263);
  v12 = *((_DWORD *)a2 + 264);
  v13 = *((_DWORD *)a2 + 265);
  v24 = *((_DWORD *)a2 + 262);
  v25 = v11;
  v26 = v12;
  v27 = v13;
  v14 = *((_DWORD *)a2 + 320);
  v28 = *((_DWORD *)a2 + 319);
  v29 = v14;
  v10(a1, &v16);
  return 0;
}
