int __fastcall packet_2_nonce_kda(int a1, _BYTE *a2, int a3, _BYTE *a4, void *dest, _DWORD *a6, _DWORD *a7)
{
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r2
  _BYTE v14[20]; // [sp+40h] [bp-1054h] BYREF
  _DWORD v15[7]; // [sp+1040h] [bp-54h] BYREF
  int v16; // [sp+105Ch] [bp-38h]
  unsigned __int16 v17; // [sp+1066h] [bp-2Eh]
  unsigned __int16 v18; // [sp+1068h] [bp-2Ch]
  __int16 v19; // [sp+106Ah] [bp-2Ah]
  int v20; // [sp+106Ch] [bp-28h]
  int v21; // [sp+1070h] [bp-24h]
  int v22; // [sp+1074h] [bp-20h]
  int v23; // [sp+1078h] [bp-1Ch]
  unsigned __int8 v24; // [sp+107Fh] [bp-15h]
  int v25; // [sp+1080h] [bp-14h]
  _BYTE *v26; // [sp+1084h] [bp-10h]

  v26 = a2;
  v25 = a3;
  v24 = 0;
  if ( (char)a2[10] >= 0 )
    return 10;
  v23 = *(_DWORD *)(a1 + 864);
  v22 = v26[9] & 0x7F;
  *(_QWORD *)v25 = *(_QWORD *)(v23 + 8 * v22);
  *a7 = *(_DWORD *)(v23 + 8 * v22);
  strcpy((char *)(v25 + 16), (const char *)(v23 + ((v22 + 16) << 6)));
  memcpy((void *)(v25 + 80), v26 + 3, 5u);
  memcpy((void *)(v25 + 85), (const void *)(v23 + 3 * v22 + 45824), 3u);
  *(_BYTE *)(v25 + 88) = v26[8];
  *(_BYTE *)(v25 + 89) = v22;
  v24 = (unsigned int)(unsigned __int8)v26[3] / *(_DWORD *)(a1 + 468);
  if ( v24 >= *(int *)(a1 + 372) )
  {
    v8 = rand();
    sub_34514C(v8, *(_DWORD *)(a1 + 372));
    *a6 = v9;
  }
  else
  {
    *a6 = v24;
  }
  *(_DWORD *)(v25 + 8) = *a6;
  v21 = (unsigned __int8)(v26[6] << 6) | (v26[7] >> 2);
  v20 = v26[7] & 3;
  *(_DWORD *)(v25 + 12) = 4 * v21 + v20;
  v19 = 9;
  v18 = BM_CRC5(v26 + 2, 0x43u);
  v17 = v26[10] & 0x1F;
  if ( v18 == v17 || !*(_BYTE *)(a1 + 279) )
  {
    memcpy(dest, (const void *)(v25 + 80), 8u);
    *a4 = 1;
    return 0;
  }
  else
  {
    v10 = dword_C1D7F8++;
    if ( !(v10 % 0x3E8) )
    {
      V_LOCK();
      sub_174D10((int)v15, *(int *)(a1 + 272));
      logfmt_raw(
        v14,
        0x1000u,
        0,
        v16,
        v15[0],
        v15[1],
        v15[2],
        v15[3],
        v15[4],
        v15[5],
        v15[6],
        v16,
        "chip id %3d, get nonce crc error calc value %04x expected value %04x\n",
        *a6,
        v18,
        v17);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
        171,
        "packet_2_nonce_kda",
        18,
        223,
        100,
        v14);
    }
    return 11;
  }
}
