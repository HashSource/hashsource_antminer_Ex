int __fastcall sub_3EAFC(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // r2
  const char *v4; // r1
  char *v6; // r0
  int v7; // r0
  int *v8; // r3
  _BYTE *v9; // r2
  int v10; // r0
  int v11; // lr
  int v12; // r12
  int v13; // r0
  char v14; // r12
  int v15; // r3
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  void (__fastcall *v20)(_DWORD *, __int64 *); // r5
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r0
  int v25; // r1
  _WORD v27[90]; // [sp+14h] [bp-11CCh] BYREF
  __int64 v28; // [sp+C8h] [bp-1118h] BYREF
  char dest[16]; // [sp+D0h] [bp-1110h] BYREF
  _BYTE v30[180]; // [sp+F0h] [bp-10F0h] BYREF
  int v31; // [sp+1A4h] [bp-103Ch]
  int v32; // [sp+1A8h] [bp-1038h]
  int v33; // [sp+1ACh] [bp-1034h]
  int v34; // [sp+1B0h] [bp-1030h]
  int v35; // [sp+1B4h] [bp-102Ch]
  int v36; // [sp+1B8h] [bp-1028h]
  int v37; // [sp+1BCh] [bp-1024h]
  int v38; // [sp+1C0h] [bp-1020h]
  int v39; // [sp+1C4h] [bp-101Ch]
  int v40; // [sp+1C8h] [bp-1018h]
  int v41; // [sp+1CCh] [bp-1014h]
  _DWORD v42[1024]; // [sp+1E0h] [bp-1000h] BYREF

  v2 = *a2;
  v4 = (const char *)*((_DWORD *)a2 + 288);
  v28 = v2;
  v6 = strcpy(dest, v4);
  v27[89] = 0;
  *(_DWORD *)&v27[87] = 0;
  V_LOCK(v6);
  v7 = logfmt_raw((int)v42, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_dcr/frontend_dcr.c",
    157,
    "push_work_dcr",
    13,
    349,
    60,
    v42);
  memcpy(v27, a2 + 1, 0x8Cu);
  v8 = (int *)((char *)a2 + 155);
  v9 = &v27[71];
  do
  {
    v10 = *v8;
    v8 += 4;
    v11 = *(v8 - 3);
    v9 += 16;
    v12 = *(v8 - 2);
    *((_DWORD *)v9 - 4) = v10;
    v13 = *(v8 - 1);
    *((_DWORD *)v9 - 3) = v11;
    *((_DWORD *)v9 - 2) = v12;
    *((_DWORD *)v9 - 1) = v13;
  }
  while ( v8 != (int *)((char *)a2 + 187) );
  v14 = *(_BYTE *)v8;
  v15 = dword_165FC0 | (a1[34] << 22);
  *v9 = v14;
  v42[0] = v15;
  v27[70] = v15;
  LOBYTE(v27[71]) = BYTE2(v15);
  memcpy(v30, v27, sizeof(v30));
  v16 = target_to_diff_dcr(a2 + 129);
  v17 = *((_DWORD *)a2 + 259);
  v18 = *((_DWORD *)a2 + 260);
  v31 = v16;
  v19 = *((_DWORD *)a2 + 261);
  v20 = (void (__fastcall *)(_DWORD *, __int64 *))a1[6];
  v32 = *((_DWORD *)a2 + 258);
  v33 = v17;
  v34 = v18;
  v35 = v19;
  v21 = *((_DWORD *)a2 + 263);
  v22 = *((_DWORD *)a2 + 264);
  v23 = *((_DWORD *)a2 + 265);
  v36 = *((_DWORD *)a2 + 262);
  v37 = v21;
  v38 = v22;
  v39 = v23;
  v24 = *((_DWORD *)a2 + 321);
  v25 = *((_DWORD *)a2 + 322);
  a1[76] = 1;
  v40 = v24;
  v41 = v25;
  v20(a1, &v28);
  return 0;
}
