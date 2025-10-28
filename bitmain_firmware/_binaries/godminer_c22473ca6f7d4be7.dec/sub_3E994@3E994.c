int __fastcall sub_3E994(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // r2
  const char *v4; // r1
  __int64 *v6; // r3
  _BYTE *v7; // r2
  int v8; // r0
  int v9; // lr
  int v10; // r12
  int v11; // r0
  char v12; // r12
  int v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  void (__fastcall *v18)(_DWORD *, __int64 *); // r5
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r0
  int v23; // r1
  _WORD v25[90]; // [sp+14h] [bp-11CCh] BYREF
  __int64 v26; // [sp+C8h] [bp-1118h] BYREF
  char dest[16]; // [sp+D0h] [bp-1110h] BYREF
  _BYTE v28[180]; // [sp+F0h] [bp-10F0h] BYREF
  int v29; // [sp+1A4h] [bp-103Ch]
  int v30; // [sp+1A8h] [bp-1038h]
  int v31; // [sp+1ACh] [bp-1034h]
  int v32; // [sp+1B0h] [bp-1030h]
  int v33; // [sp+1B4h] [bp-102Ch]
  int v34; // [sp+1B8h] [bp-1028h]
  int v35; // [sp+1BCh] [bp-1024h]
  int v36; // [sp+1C0h] [bp-1020h]
  int v37; // [sp+1C4h] [bp-101Ch]
  int v38; // [sp+1C8h] [bp-1018h]
  int v39; // [sp+1CCh] [bp-1014h]
  _DWORD v40[1024]; // [sp+1E0h] [bp-1000h] BYREF

  v2 = *a2;
  v4 = (const char *)*((_DWORD *)a2 + 288);
  v26 = v2;
  strcpy(dest, v4);
  v25[89] = 0;
  *(_DWORD *)&v25[87] = 0;
  V_LOCK();
  logfmt_raw((char *)v40, 0x1000u, 0, "start nonce: %08x", dword_165FC0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_ma"
    "ster/frontend/frontend_dcr/frontend_dcr.c",
    157,
    "push_work_dcr",
    13,
    349,
    60,
    v40);
  memcpy(v25, a2 + 1, 0x8Cu);
  v6 = (__int64 *)((char *)a2 + 155);
  v7 = &v25[71];
  do
  {
    v8 = *(_DWORD *)v6;
    v6 += 2;
    v9 = *((_DWORD *)v6 - 3);
    v7 += 16;
    v10 = *((_DWORD *)v6 - 2);
    *((_DWORD *)v7 - 4) = v8;
    v11 = *((_DWORD *)v6 - 1);
    *((_DWORD *)v7 - 3) = v9;
    *((_DWORD *)v7 - 2) = v10;
    *((_DWORD *)v7 - 1) = v11;
  }
  while ( v6 != (__int64 *)((char *)a2 + 187) );
  v12 = *(_BYTE *)v6;
  v13 = dword_165FC0 | (a1[34] << 22);
  *v7 = v12;
  v40[0] = v13;
  v25[70] = v13;
  LOBYTE(v25[71]) = BYTE2(v13);
  memcpy(v28, v25, sizeof(v28));
  v14 = target_to_diff_dcr((int)(a2 + 129));
  v15 = *((_DWORD *)a2 + 259);
  v16 = *((_DWORD *)a2 + 260);
  v29 = v14;
  v17 = *((_DWORD *)a2 + 261);
  v18 = (void (__fastcall *)(_DWORD *, __int64 *))a1[6];
  v30 = *((_DWORD *)a2 + 258);
  v31 = v15;
  v32 = v16;
  v33 = v17;
  v19 = *((_DWORD *)a2 + 263);
  v20 = *((_DWORD *)a2 + 264);
  v21 = *((_DWORD *)a2 + 265);
  v34 = *((_DWORD *)a2 + 262);
  v35 = v19;
  v36 = v20;
  v37 = v21;
  v22 = *((_DWORD *)a2 + 319);
  v23 = *((_DWORD *)a2 + 320);
  a1[76] = 1;
  v38 = v22;
  v39 = v23;
  v18(a1, &v26);
  return 0;
}
