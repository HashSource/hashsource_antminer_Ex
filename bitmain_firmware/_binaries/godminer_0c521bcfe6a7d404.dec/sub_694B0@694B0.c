int __fastcall sub_694B0(_DWORD *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, int *a6, _DWORD *a7)
{
  int v9; // r2
  int v11; // r8
  int *v12; // r6
  int v13; // r3
  int v15; // lr
  char v16; // r2
  int v17; // r1
  int v18; // r0
  int v19; // r3
  bool v20; // cc
  int v21; // r0
  int v22; // r0
  int v23; // r1
  int v24; // r2
  _BYTE v26[4096]; // [sp+20h] [bp-1000h] BYREF

  v9 = a1[196];
  v11 = *(_BYTE *)(a2 + 8) & 0x7F;
  v12 = (int *)(v9 + 8 * v11);
  v13 = *v12;
  v15 = v12[1];
  *(_DWORD *)a3 = *v12;
  *(_DWORD *)(a3 + 4) = v15;
  *a7 = v13;
  strcpy((char *)(a3 + 16), (const char *)(v9 + 32 * (v11 + 32)));
  *(_DWORD *)(a3 + 48) = *(_DWORD *)(a2 + 3);
  v16 = *(_BYTE *)(a2 + 7);
  *(_BYTE *)(a3 + 53) = v11;
  *(_BYTE *)(a3 + 52) = v16 & 0x7F;
  v17 = a1[99];
  *(_QWORD *)(a3 + 72) = *((_QWORD *)v12 + 2689);
  v18 = sub_12DDE8(*(unsigned __int8 *)(a2 + 3), v17);
  v19 = a1[76];
  v20 = v18 < v19;
  if ( v18 < v19 )
    *a6 = v18;
  else
    v19 = 0;
  if ( !v20 )
  {
    v18 = v19;
    *a6 = v19;
  }
  *(_DWORD *)(a3 + 8) = v18;
  v21 = -1431655765 * (*(_BYTE *)(a2 + 6) & 0xF);
  *(_DWORD *)(a3 + 12) = (*(_BYTE *)(a2 + 6) & 0xFu) % 0xC;
  V_LOCK(v21);
  v22 = logfmt_raw((int)v26, 0x1000u);
  V_UNLOCK(v22);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    176,
    "packet_2_nonce_dash",
    19,
    220,
    0x14u,
    v26);
  v23 = BM_CRC5(a2 + 2, 59);
  v24 = *(_BYTE *)(a2 + 9) & 0x1F;
  if ( v23 == v24 )
  {
    *a5 = *(_DWORD *)(a3 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    printf("get nonce crc error calc value %04x expected value %04x\n", v23, v24);
    return 11;
  }
}
