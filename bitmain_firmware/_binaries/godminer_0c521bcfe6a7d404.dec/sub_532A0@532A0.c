int __fastcall sub_532A0(int a1, __int64 *a2)
{
  __int64 v2; // r2
  int *v5; // r6
  const char *v6; // r1
  char *v7; // r5
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  char *v11; // lr
  int v12; // r2
  int v13; // r3
  int *v14; // r4
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  void (__fastcall *v19)(int, __int64 *); // r5
  int v20; // r1
  int v21; // r2
  int v22; // r3
  __int64 v24; // [sp+0h] [bp-84h] BYREF
  char dest[32]; // [sp+8h] [bp-7Ch] BYREF
  char v26; // [sp+28h] [bp-5Ch] BYREF
  int v27; // [sp+58h] [bp-2Ch]
  int v28; // [sp+5Ch] [bp-28h]
  int v29; // [sp+60h] [bp-24h]
  int v30; // [sp+64h] [bp-20h]
  int v31; // [sp+68h] [bp-1Ch]
  int v32; // [sp+6Ch] [bp-18h]
  int v33; // [sp+70h] [bp-14h]
  int v34; // [sp+74h] [bp-10h]
  int v35; // [sp+78h] [bp-Ch]

  v2 = *a2;
  v5 = (int *)(a2 + 7);
  v6 = (const char *)*((_DWORD *)a2 + 281);
  v7 = &v26;
  v24 = v2;
  strcpy(dest, v6);
  v8 = (int *)(a2 + 1);
  do
  {
    v9 = *v8;
    v8 += 4;
    v10 = *(v8 - 3);
    v11 = v7;
    v12 = *(v8 - 2);
    v7 += 16;
    v13 = *(v8 - 1);
    *(_DWORD *)v11 = v9;
    *((_DWORD *)v11 + 1) = v10;
    *((_DWORD *)v11 + 2) = v12;
    *((_DWORD *)v11 + 3) = v13;
  }
  while ( v8 != v5 );
  v14 = (int *)(a2 + 129);
  v15 = target_to_diff_ckb((int)v14);
  v16 = v14[1];
  v17 = v14[2];
  v18 = v14[3];
  v27 = v15;
  v19 = *(void (__fastcall **)(int, __int64 *))(a1 + 32);
  v28 = *v14;
  v29 = v16;
  v30 = v17;
  v31 = v18;
  v20 = v14[5];
  v21 = v14[6];
  v22 = v14[7];
  v32 = v14[4];
  v33 = v20;
  v34 = v21;
  v35 = v22;
  v19(a1, &v24);
  return 0;
}
