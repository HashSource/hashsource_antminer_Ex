int __fastcall packet_2_nonce_hns(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int v8; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r2
  _BYTE v15[12]; // [sp+40h] [bp-104Ch] BYREF
  _DWORD v16[7]; // [sp+1040h] [bp-4Ch] BYREF
  int v17; // [sp+105Ch] [bp-30h]
  unsigned __int16 v18; // [sp+1066h] [bp-26h]
  unsigned __int16 v19; // [sp+1068h] [bp-24h]
  __int16 v20; // [sp+106Ah] [bp-22h]
  int v21; // [sp+106Ch] [bp-20h]
  int v22; // [sp+1070h] [bp-1Ch]
  unsigned __int8 v23; // [sp+1077h] [bp-15h]
  int v24; // [sp+1078h] [bp-14h]
  int v25; // [sp+107Ch] [bp-10h]

  v25 = a2;
  v24 = a3;
  v23 = 0;
  if ( *(char *)(a2 + 11) >= 0 )
    return 10;
  v22 = *(_DWORD *)(a1 + 864);
  v21 = *(_BYTE *)(v25 + 10) & 0x7F;
  *(_QWORD *)v24 = *(_QWORD *)(v22 + 8 * v21);
  *a7 = *(_DWORD *)(v22 + 8 * v21);
  strcpy((char *)(v24 + 16), (const char *)(v22 + 32 * (v21 + 32)));
  *(_BYTE *)(v24 + 52) = *(_BYTE *)(v22 + (v21 << 8) + 5241);
  *(_BYTE *)(v24 + 53) = *(_BYTE *)(v22 + (v21 << 8) + 5240);
  *(_BYTE *)(v24 + 54) = *(_BYTE *)(v25 + 4);
  *(_BYTE *)(v24 + 55) = *(_BYTE *)(v25 + 3);
  *(_DWORD *)(v24 + 48) = *(_DWORD *)(v25 + 5);
  *(_BYTE *)(v24 + 56) = *(_BYTE *)(v25 + 9);
  *(_BYTE *)(v24 + 57) = v21;
  v23 = (unsigned int)*(unsigned __int8 *)(v25 + 3) / *(_DWORD *)(a1 + 468);
  if ( v23 >= *(int *)(a1 + 372) )
  {
    v8 = rand();
    sub_34514C(v8, *(_DWORD *)(a1 + 372));
    *a6 = v9;
  }
  else
  {
    *a6 = v23;
  }
  *(_DWORD *)(v24 + 8) = *a6;
  *(_DWORD *)(v24 + 12) = *(_BYTE *)(v25 + 8) & 0x3F;
  v20 = 10;
  v19 = BM_CRC5((_BYTE *)(v25 + 2), 0x4Bu);
  v18 = *(_BYTE *)(v25 + 11) & 0x1F;
  if ( v19 == v18 || !*(_BYTE *)(a1 + 279) )
  {
    *a5 = *(_DWORD *)(v24 + 48);
    *a4 = 1;
    return 0;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 272);
    v11 = dword_C15710[v10];
    dword_C15710[v10] = v11 + 1;
    if ( v11 <= 9 )
    {
      V_LOCK();
      sub_151C00((int)v16, *(int *)(a1 + 272));
      logfmt_raw(
        v15,
        0x1000u,
        0,
        v17,
        v16[0],
        v16[1],
        v16[2],
        v16[3],
        v16[4],
        v16[5],
        v16[6],
        v17,
        "chip id %2d, get nonce crc error calc value %04x expected value %04x",
        v23,
        v19,
        v18);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        171,
        "packet_2_nonce_hns",
        18,
        232,
        40,
        v15);
    }
    return 11;
  }
}
