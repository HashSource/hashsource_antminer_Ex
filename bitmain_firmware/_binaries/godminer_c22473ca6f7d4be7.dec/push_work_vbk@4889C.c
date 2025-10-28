int __fastcall push_work_vbk(int a1, __int64 *a2)
{
  __int64 *v2; // r12
  __int64 v3; // r2
  __int64 *v5; // r8
  int (__fastcall *v6)(int, __int64 *); // r7
  int v8; // r1
  char *v9; // r5
  int v10; // r0
  int v11; // r1
  char *v12; // lr
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  __int64 v21; // [sp+0h] [bp-78h] BYREF
  int v22; // [sp+8h] [bp-70h]
  int v23; // [sp+Ch] [bp-6Ch]
  char v24; // [sp+10h] [bp-68h] BYREF
  int v25; // [sp+50h] [bp-28h]
  int v26; // [sp+54h] [bp-24h]
  int v27; // [sp+58h] [bp-20h]
  int v28; // [sp+5Ch] [bp-1Ch]
  int v29; // [sp+60h] [bp-18h]
  int v30; // [sp+64h] [bp-14h]
  int v31; // [sp+68h] [bp-10h]
  int v32; // [sp+6Ch] [bp-Ch]

  v2 = a2 + 1;
  v3 = *a2;
  v5 = a2 + 9;
  v6 = *(int (__fastcall **)(int, __int64 *))(a1 + 24);
  v8 = *((_DWORD *)a2 + 309);
  v9 = &v24;
  v21 = v3;
  v23 = 0;
  v22 = v8;
  do
  {
    v10 = *(_DWORD *)v2;
    v2 += 2;
    v11 = *((_DWORD *)v2 - 3);
    v12 = v9;
    v13 = *((_DWORD *)v2 - 2);
    v9 += 16;
    v14 = *((_DWORD *)v2 - 1);
    *(_DWORD *)v12 = v10;
    *((_DWORD *)v12 + 1) = v11;
    *((_DWORD *)v12 + 2) = v13;
    *((_DWORD *)v12 + 3) = v14;
  }
  while ( v2 != v5 );
  v25 = *((_DWORD *)a2 + 310);
  v15 = target_to_diff_vbk((int)(a2 + 129));
  v16 = *((_DWORD *)a2 + 259);
  v26 = v15;
  v17 = *((_DWORD *)a2 + 260);
  v18 = *((_DWORD *)a2 + 261);
  v27 = *((_DWORD *)a2 + 258);
  v28 = v16;
  v29 = v17;
  v30 = v18;
  v19 = *((_DWORD *)a2 + 263);
  v31 = *((_DWORD *)a2 + 262);
  v32 = v19;
  return v6(a1, &v21);
}
