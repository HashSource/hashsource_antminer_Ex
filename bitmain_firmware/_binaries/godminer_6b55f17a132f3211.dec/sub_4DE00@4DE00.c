int __fastcall sub_4DE00(int a1, __int64 *a2)
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
  void (__fastcall *v20)(int, __int64 *); // r5
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  _WORD v26[90]; // [sp+14h] [bp-11CCh] BYREF
  __int64 v27; // [sp+C8h] [bp-1118h] BYREF
  char dest[16]; // [sp+D0h] [bp-1110h] BYREF
  _BYTE v29[180]; // [sp+F0h] [bp-10F0h] BYREF
  int v30; // [sp+1A4h] [bp-103Ch]
  int v31; // [sp+1A8h] [bp-1038h]
  int v32; // [sp+1ACh] [bp-1034h]
  int v33; // [sp+1B0h] [bp-1030h]
  int v34; // [sp+1B4h] [bp-102Ch]
  int v35; // [sp+1B8h] [bp-1028h]
  int v36; // [sp+1BCh] [bp-1024h]
  int v37; // [sp+1C0h] [bp-1020h]
  int v38; // [sp+1C4h] [bp-101Ch]
  int v39; // [sp+1C8h] [bp-1018h]
  int v40; // [sp+1CCh] [bp-1014h]
  _DWORD v41[1024]; // [sp+1E0h] [bp-1000h] BYREF

  v2 = *a2;
  v4 = (const char *)*((_DWORD *)a2 + 281);
  v27 = v2;
  v6 = strcpy(dest, v4);
  v26[89] = 0;
  *(_DWORD *)&v26[87] = 0;
  V_LOCK(v6);
  v7 = logfmt_raw((int)v41, 0x1000u);
  V_UNLOCK(v7);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/dhash_content/dcr/dcr_1727/dcr_1727_content.c",
    172,
    "push_work_dcr_1727",
    18,
    64,
    20,
    v41);
  memcpy(v26, a2 + 1, 0x8Cu);
  v8 = (int *)((char *)a2 + 155);
  v9 = &v26[71];
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
  v15 = dword_166008 | (*(_DWORD *)(a1 + 208) << 22);
  *v9 = v14;
  v41[0] = v15;
  v26[70] = v15;
  LOBYTE(v26[71]) = BYTE2(v15);
  memcpy(v29, v26, sizeof(v29));
  v16 = target_to_diff_dcr((int)(a2 + 129));
  v17 = *((_DWORD *)a2 + 259);
  v18 = *((_DWORD *)a2 + 260);
  v30 = v16;
  v19 = *((_DWORD *)a2 + 261);
  v20 = *(void (__fastcall **)(int, __int64 *))(a1 + 32);
  v31 = *((_DWORD *)a2 + 258);
  v32 = v17;
  v33 = v18;
  v34 = v19;
  v21 = *((_DWORD *)a2 + 263);
  v22 = *((_DWORD *)a2 + 264);
  v23 = *((_DWORD *)a2 + 265);
  v35 = *((_DWORD *)a2 + 262);
  v36 = v21;
  v37 = v22;
  v38 = v23;
  v24 = *((_DWORD *)a2 + 276);
  v39 = *((_DWORD *)a2 + 275);
  v40 = v24;
  v20(a1, &v27);
  return 0;
}
